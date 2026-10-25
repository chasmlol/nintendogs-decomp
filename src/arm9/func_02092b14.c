#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 year, month, day, week; } RTCDate;
typedef struct { u32 hour, minute, second; } RTCTime;
typedef struct { u8 pad[0x1c]; RTCDate date; RTCTime time; } Clock;
typedef union { u8 b[8]; u32 w[2]; } Stamp;
typedef struct { u16 c[10]; } Name;
typedef struct { u32 id[2]; u8 body[0x54]; } Info;

typedef struct {
    Info info;          /* 0x00 */
    u16 count;          /* 0x5c */
    u16 f5e;            /* 0x5e */
    Stamp stamp;        /* 0x60 */
    Name names[3];      /* 0x68 */
} Entry;                /* 0xa4 */

typedef struct {
    u32 f0;
    Entry entries[50];  /* 0x04 */
    u8 pad[6];          /* 0x200c */
    u16 flags;          /* 0x2012 */
} Table;

typedef struct { u8 pad[0x1434]; Table *tab; } Mgr;

extern Mgr *data_02159034;
extern Clock *data_0214f130;
extern BOOL func_020956b0(const Stamp *a, const Stamp *b);

static inline void SetStamp(Entry *e, const RTCDate *d, const RTCTime *t)
{
    e->stamp.b[5] = (u8)d->year;
    e->stamp.b[4] = (u8)d->month;
    e->stamp.b[3] = (u8)d->day;
    e->stamp.b[2] = (u8)t->hour;
    e->stamp.b[1] = (u8)t->minute;
    e->stamp.b[0] = (u8)t->second;
    e->stamp.b[6] = 0;
    e->stamp.b[7] = 0;
}

static inline void Store(Table *tab, s16 idx, const Entry *src)
{
    s16 j;
    Entry *e = &tab->entries[idx];

    if (e->info.id[0] == src->info.id[0] && e->info.id[1] == src->info.id[1]) {
        e->info = src->info;
        if (e->count < 99) {
            e->count++;
        }
    } else {
        e->info = src->info;
        e->count = 1;
    }
    e->f5e = 0;
    SetStamp(e, &data_0214f130->date, &data_0214f130->time);
    for (j = 0; j < 3; j++) {
        e->names[j] = src->names[j];
    }
}

void func_02092b14(const Entry *src)
{
    s16 i;
    s16 found = -1;
    s16 empty = -1;
    s16 oldest = -1;
    Table *tab;
    Stamp best;
    Entry *e;
    BOOL used;

    tab = data_02159034->tab;
    best.w[0] = 0;
    best.w[1] = 0;
    for (i = 0; i < 50; i++) {
        e = &tab->entries[i];
        used = TRUE;
        if (e->info.id[0] == 0 && e->info.id[1] == 0) {
            used = FALSE;
        }
        if (used) {
            if (src->info.id[0] == e->info.id[0] && src->info.id[1] == e->info.id[1]) {
                found = i;
                break;
            }
            if ((best.w[0] == 0 && best.w[1] == 0) || func_020956b0(&e->stamp, &best)) {
                best = e->stamp;
                oldest = i;
            }
        } else if (empty < 0) {
            empty = i;
        }
    }
    if (found >= 0) {
        Store(tab, found, src);
    } else if (empty >= 0) {
        Store(tab, empty, src);
    } else {
        Store(tab, oldest, src);
    }
    tab->flags |= 1;
}
