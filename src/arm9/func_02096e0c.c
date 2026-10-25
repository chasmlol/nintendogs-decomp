#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 year, month, day, week; } RTCDate;
typedef struct { u32 hour, minute, second; } RTCTime;
typedef struct {
    u8 language;
    u8 favoriteColor;
    u8 month;
    u8 day;
    u16 nickName[10];
    u16 nickNameLength;
    u16 comment[26];
    u16 commentLength;
} OSOwnerInfo;

typedef struct {
    u32 rtcOffset[2];   /* 0x00 */
    u8 mac[6];          /* 0x08 */
    u8 stamp[8];        /* 0x0e */
    u32 f18;            /* 0x18 */
    u16 f1c;            /* 0x1c */
    s16 f1e;            /* 0x1e */
    u16 f20;            /* 0x20 */
    u16 f22;            /* 0x22 */
    u8 f24;
    u8 f25;
    u8 f26;
    u8 f27;
    u8 f28;
    u8 f29;
    u8 f2a;
    u8 f2b;
    u8 pad2c[0x28];
} Header;               /* 0x54 */

typedef struct { s16 a; u16 b; u32 c; } E8;
typedef struct { u16 id; u8 pad[26]; } E28;
typedef struct { s16 a; s8 b; u8 c; } E4;
typedef struct { u8 pad[14]; u8 a; s8 b; } E16;
typedef struct { s8 a[4]; E8 e[8]; } SubB4;

typedef struct {
    u32 f0;
    u16 f4;
    u8 pad6[0x5a];
    Header hdr;         /* 0x060 */
    SubB4 sb4;          /* 0x0b4 */
    E28 ff8[3][4];      /* 0x0f8 */
    E4 f248[200];       /* 0x248 */
    E16 f568[20];       /* 0x568 */
} Block;

typedef struct {
    u16 type;
    u16 pad2;
    u32 blockSize;      /* 0x04 */
    u8 pad8[8];
    u8 *blocks;         /* 0x10 */
} SaveMgr;

typedef struct { u32 magic; u16 sum; u16 flags; } Footer;
typedef struct { s16 type; s16 value; } Req;

extern const u32 data_0212fc5c;
extern const u16 data_0212fc50;
extern const s16 data_0212fc4c;
extern const u16 data_0212fc60[];
extern const s16 data_0212fc44;
extern const u16 data_0212fc68[];

extern void func_0206c7bc(u16 data, void *dest, u32 size);
extern void func_0200719c(RTCDate *date, RTCTime *time);
extern s64 func_02080cf4(void);
extern void func_02080d08(OSOwnerInfo *info);
extern void func_02080d84(u8 *mac);
extern void func_020942c0(Req *req, s32 n);

static inline void MI_CpuFill16(void *dest, u16 data, u32 size)
{
    func_0206c7bc(*(u16 *)&data, dest, size);
}

static inline void MI_CpuClear16(void *dest, u32 size)
{
    MI_CpuFill16(dest, 0, size);
}

static inline void AddList(Req *req, s16 type, const u16 *tbl, s16 n)
{
    s16 i;

    for (i = 0; i < n; i++) {
        req->type = type;
        req->value = tbl[i];
        func_020942c0(req, 1);
    }
}
void func_02096e0c(SaveMgr *mgr, s32 index)
{
    u32 size;
    Block *block;
    Footer *footer;
    Req req;
    RTCDate date;
    RTCTime time;
    OSOwnerInfo info;

    size = mgr->blockSize;
    block = (Block *)(mgr->blocks + size * index);
    MI_CpuClear16(block, size);
    footer = (Footer *)((u8 *)block + size) - 1;
    footer->flags |= 1;
    switch (mgr->type) {
    case 1:
        MI_CpuClear16(&block->f4, 0x85c);
        block->f4 = 0xffff;
        return;
    case 0: {
        Header *hdr = &block->hdr;
        s64 rtc;
        s16 i;
        s16 j;
        s16 k;
        SubB4 *sb;
        E4 *e4;
        E16 *e16;
        E8 *e8;

        func_0200719c(&date, &time);
        rtc = func_02080cf4();
        func_02080d08(&info);
        hdr->rtcOffset[0] = (u32)(rtc & 0xffffffff);
        hdr->rtcOffset[1] = (u32)((rtc >> 32) & 0xffffffff);
        func_02080d84(hdr->mac);
        hdr->stamp[0] = (u8)time.second;
        hdr->stamp[1] = (u8)time.minute;
        hdr->stamp[2] = (u8)time.hour;
        hdr->stamp[3] = (u8)date.day;
        hdr->stamp[4] = (u8)date.month;
        hdr->stamp[5] = (u8)date.year;
        hdr->f18 = data_0212fc5c;
        hdr->f1c = data_0212fc50;
        hdr->f1e = -1;
        hdr->f20 = 0xffff;
        hdr->f22 = 0;
        hdr->f24 = 3;
        hdr->f25 = 0;
        hdr->f26 = 1;
        hdr->f27 = 0;
        hdr->f28 = 0;
        hdr->f29 = 0;
        hdr->f2b = 0;
        sb = &block->sb4;
        for (i = 0; i < 4; i++) {
            sb->a[i] = -1;
        }
        e8 = sb->e;
        for (i = 0; i < 8; i++) {
            e8->a = -1;
            e8->b = 0;
            e8->c = 0;
            e8++;
        }
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                block->ff8[j][k].id = 0xffff;
            }
        }
        e4 = block->f248;
        for (i = 0; i < 200; i++) {
            e4->a = -1;
            e4->b = -1;
            e4->c = 0;
            e4++;
        }
        req.type = 2;
        req.value = 0;
        func_020942c0(&req, 1);
        req.type = 3;
        req.value = data_0212fc50;
        func_020942c0(&req, 2);
        AddList(&req, 3, data_0212fc60, data_0212fc4c);
        AddList(&req, 4, data_0212fc68, data_0212fc44);
        e16 = block->f568;
        for (i = 0; i < 20; i++) {
            e16->a = 0;
            e16->b = -1;
            e16++;
        }
        return;
    }
    case 4:
        MI_CpuClear16(&block->f4, 0x85c);
        block->f4 = 0xffff;
        break;
    case 2:
    case 3:
    case 5:
    case 6:
        break;
    }
}
