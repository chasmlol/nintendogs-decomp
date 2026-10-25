#include "ctx.h"

extern u8 *data_0215be48;
extern s32 data_02148384[];
extern s32 data_02148410[];
extern s32 data_02148418[];
extern s32 data_02148420[];
extern s32 data_02148428[];
extern s32 data_02148444[];
extern s32 data_0214848c[];
extern s32 data_0214845c[];
extern s32 data_02148474[];
extern s32 data_02148488[];
extern s32 data_021484d8[];
extern s32 data_021484a8[];
extern s32 data_021484c0[];
extern s32 data_021484d4[];
extern s32 data_02148528[];
extern s32 data_021484f8[];
extern s32 data_02148510[];
extern s32 data_02148524[];
extern s32 data_02148574[];
extern s32 data_02148544[];
extern s32 data_0214855c[];
extern s32 data_02148570[];
extern s32 data_021485c0[];
extern s32 data_02148590[];
extern s32 data_021485a8[];
extern s32 data_021485bc[];

extern void func_021044cc(void);
extern void func_0205f050(u8 *d, u32 n, s32 *src, s32 ctx);
extern s32 func_0210e968(u32 n, s32 *p);
extern void func_0211305c(u32 n, s32 v);
extern void func_02113090(u32 n, s32 v);
extern void func_021130c4(u32 n, s32 v);
extern void func_02112ed0(u32 n, s32 v);
extern void func_02112e74(u32 n, s32 v);
extern void func_021128a8(u32 a, s32 b, s32 c);
extern void func_020fc76c(u32 a, void *b, void *c, void *d, void *e);
extern void func_02101328(u8 *p, s32 a, s32 b);
extern void func_0210ddbc(u8 *p);
extern void func_0210cf70(u8 *p, s32 a, s32 b);
extern void func_0210d590(u8 *p);
extern void func_02112798(u32 a, u32 b, s32 c);
extern void func_021129b4(u32 a, u32 b, s32 c, s32 d);
extern void func_02112978(u32 a, u32 b, s32 c, s32 d);
extern s64 func_0205e270(s32 a, s32 b);

typedef struct { s32 flag; u8 pad[0x10]; void *ptr; } Sub;
typedef struct { u8 pad[0x24]; Sub sub; } Obj;
static inline void SubSet(Sub *s, void *p) { s->ptr = p; }
static inline u8 *GetW(void) { u8 *b = (u8 *)((u32)data_0215be48 + 0x1dec); return (u8 *)((u32)b + 0x528); }
static inline Sub *GetSub(u8 *w) { return (Sub *)((u32)w + 0x24); }
void func_0210d860(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *pq;
    s32 r5;
    u8 *r6;
    s32 ctx;
    s32 c1;
    s32 a1;
    s32 b1;
    s32 d1;
    s32 e1;
    s32 one;
    s32 v;
    s32 n;
    s32 k;
    u32 u880;
    u8 *w;
    s32 *q;
    s32 x3;
    s32 x4;
    s32 blkA[16];
    s32 blkB[16];
    s32 blkC[16];
    s64 t;
    u32 lo;
    u32 hi;

    r5 = param_2;
    r6 = param_1;
    *(s32 *)(data_0215be48 + 0x1000 + 0xd20) = r5;
    pq = r6 + 0x1c5c;
    if (param_3 != 0) {
        func_021044cc();
    }
    ctx = data_02148384[r5];
    func_0205f050((u8 *)blkA, 64, data_02148410, ctx);
    func_0205f050((u8 *)blkB, 64, data_02148418, ctx);
    func_0205f050((u8 *)blkC, 64, data_02148420, ctx);
    c1 = func_0210e968(8, blkC);
    a1 = func_0210e968(8, blkA);
    b1 = func_0210e968(8, blkB);
    d1 = func_0210e968(8, data_02148428);
    e1 = func_0210e968(8, data_02148444);
    func_0211305c(2, c1);
    func_02113090(2, a1);
    func_021130c4(2, b1);
    func_02112ed0(2, d1);
    func_02112e74(2, e1);
    one = 1;
    *(s32 *)(r6 + 0x86c) = one;
    *(s32 *)(data_0215be48 + 0xc000 + 0x838) = 2;
    *(s32 *)(data_0215be48 + 0xc000 + 0x83c) = one;
    func_021128a8(2, 0, 0);
    func_021128a8(2, one, 0);
    func_021128a8(2, 2, 0);
    func_021128a8(2, 3, 0);
    func_021128a8(2, 4, 0);
    func_021128a8(2, 11, 2);
    func_021128a8(2, 12, 2);
    func_021128a8(2, 13, 2);
    func_021128a8(2, 14, 0);
    switch (r5) {
    case 0:
    case 1:
    case 2:
        func_020fc76c(8, data_0214845c, data_02148474, data_02148488, data_0214848c);
        func_021128a8(2, 0, one);
        break;
    case 3:
    case 4:
        func_020fc76c(8, data_021484a8, data_021484c0, data_021484d4, data_021484d8);
        func_021128a8(2, one, one);
        break;
    case 5:
        func_020fc76c(8, data_021484f8, data_02148510, data_02148524, data_02148528);
        func_021128a8(2, 2, one);
        break;
    case 6:
        func_020fc76c(8, data_02148544, data_0214855c, data_02148570, data_02148574);
        func_021128a8(2, 3, one);
        break;
    case 7:
        func_020fc76c(8, data_02148590, data_021485a8, data_021485bc, data_021485c0);
        func_021128a8(2, 4, one);
        break;
    default:
        break;
    }
    func_02101328(0, *(s32 *)(r6 + 0x14), 0);
    func_0210ddbc(r6);
    w = (u8 *)((u32)data_0215be48 + 0x1dec);
    {
        u8 *w2 = (u8 *)((u32)w + 0x528);
        SubSet((Sub *)((u32)w2 + 0x24), r6 + 100);
        ((Sub *)((u32)w2 + 0x24))->flag = 1;
    }
    switch (r5) {
    case 3:
        func_0210cf70(r6, 9, 1);
        func_0210cf70(r6, 21, 0);
        break;
    case 4:
        func_0210cf70(r6, 21, 1);
        func_0210cf70(r6, 9, 0);
        break;
    case 0:
        *(s32 *)(r6 + 0x864) = 0;
        func_0210cf70(r6, 1, 0);
        *(s32 *)(r6 + 0x868) = 0;
        func_0210cf70(r6, 0, 0);
        break;
    }
    func_0210d590(r6);
    v = *(s32 *)(pq + 8);
    func_02112798(2, 5, v);
    func_02112798(2, 7, v);
    func_02112798(2, 6, v);
    func_02112798(2, 8, v);
    v = (v == 0);
    func_02112798(2, 9, v);
    func_02112798(2, 10, v);
    func_021128a8(2, 5, 0);
    func_021128a8(2, 6, 0);
    func_021128a8(2, 9, 0);
    k = *(s32 *)(r6 + 0x874) - 2;
    n = *(u16 *)(r6 + 48);
    if (n >= k) {
        n = k;
    }
    u880 = *(u16 *)(r6 + 0x800 + 128);
    t = func_0205e270(n, u880);
    hi = (u32)(t >> 32);
    hi <<= 16;
    x3 = *(u16 *)(r6 + 0x800 + 120);
    x3 <<= 3;
    *(u16 *)(r6 + 0x800 + 130) = (u16)(x3 + (hi >> 12));
    t = func_0205e270(n, u880);
    lo = (u32)t;
    lo <<= 16;
    x4 = *(u16 *)(r6 + 0x800 + 122);
    x4 <<= 3;
    *(u16 *)(r6 + 0x800 + 132) = (u16)(x4 + (lo >> 12) + 3);
    func_021129b4(2, 14, 0, 0);
    func_02112978(2, 14, *(s16 *)(r6 + 0x800 + 130), *(s16 *)(r6 + 0x800 + 132));
}



