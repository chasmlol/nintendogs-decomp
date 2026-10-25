#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 year; u32 month; u32 day; u32 week; } RTCDate;
typedef struct { u32 hour; u32 minute; u32 second; } RTCTime;

typedef struct { u8 pad[80]; } OSOwnerInfo;

typedef struct {
    u32 offsetLo;
    u32 offsetHi;
    u8 mac[6];
    u8 second;
    u8 minute;
    u8 hour;
    u8 day;
    u8 month;
    u8 year;
} Rec;

extern s64 func_02080cf4(void);
extern void func_02080d08(OSOwnerInfo *info);
extern void func_02080d84(u8 *mac);
extern s32 func_0209253c(const RTCDate *a, const RTCDate *b);
extern RTCTime data_0215903c;
extern RTCDate data_02159048;

static inline s32 DateKey(const RTCDate *d)
{
    return (s32)((d->day - 1) + (d->year * 384 + (d->month - 1) * 32));
}

static inline s32 TimeSecs(const RTCTime *t)
{
#ifndef TS_BODY
    return (s32)(t->second + (t->minute * 60 + t->hour * 3600));
#else
    TS_BODY
#endif
}

static inline s64 Elapsed(const RTCDate *d0, const RTCTime *t0, const RTCDate *d1, const RTCTime *t1)
{
    s32 days;

    if (DateKey(d1) >= DateKey(d0)) {
        days = func_0209253c(d0, d1);
        return days * 86400 + (TimeSecs(t1) - TimeSecs(t0));
    }
    return 0;
}

static inline void SaveRecord(Rec *rec, const RTCDate *date, const RTCTime *time)
{
    OSOwnerInfo info;
    s64 off;

    off = func_02080cf4();
    func_02080d08(&info);
    rec->offsetLo = (u32)(off & 0xffffffff);
    rec->offsetHi = (u32)((off >> 32) & 0xffffffff);
    func_02080d84(rec->mac);
    rec->second = time->second;
    rec->minute = time->minute;
    rec->hour = time->hour;
    rec->day = date->day;
    rec->month = date->month;
    rec->year = date->year;
}

s64 func_02092140(Rec *rec, const RTCDate *date, const RTCTime *time)
{
    u8 mac[6];
    s64 elapsed;
    BOOL same;
    s16 i;

    func_02080d84(mac);
    same = TRUE;
    for (i = 0; i < 6; i++) {
        if (mac[i] != rec->mac[i]) {
            same = FALSE;
            break;
        }
    }
    if (same) {
        RTCDate recDate;
        RTCTime recTime;
        s64 off;
        s64 recOff;

        off = func_02080cf4();
        recOff = (s64)(((u64)rec->offsetHi << 32) | rec->offsetLo);
        recDate.year = rec->year;
        recDate.month = rec->month;
        recDate.day = rec->day;
        recTime.hour = rec->hour;
        recTime.minute = rec->minute;
        recTime.second = rec->second;
        if (off == recOff) {
            elapsed = Elapsed(&recDate, &recTime, date, time);
        } else {
            s64 d = off - recOff;
            if (d < 0) {
                d = 0;
            }
            elapsed = Elapsed(&recDate, &recTime, date, time) - d;
            if (elapsed < 0) {
                elapsed = 0;
            }
        }
    } else {
#ifndef NOTSAME
        SaveRecord(rec, &data_02159048, &data_0215903c);
        elapsed = Elapsed(&data_02159048, &data_0215903c, date, time);
#else
        NOTSAME
#endif
    }
    if (elapsed <= 0) {
        elapsed = 0;
        SaveRecord(rec, date, time);
    }
    return elapsed;
}
