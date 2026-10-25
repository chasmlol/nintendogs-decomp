#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_020bc14c(void);
extern void func_020bbe14(int a, int b);
extern u8 *func_020bc3c4(void);

/* swpb cannot be written in C; this helper swaps the byte at p with v and returns the old byte */
static inline u8 SwapByte(vu8 *p, u32 v)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline void SwapR0(vu8 *p, u32 v)
{
    *(u8 *)(p) = (u8)(v);
}

static inline void SwapR1(vu8 *p, u32 v)
{
    *(u8 *)(p) = (u8)(v);
}

s32 func_0202c5d8(u8 *param_1, s32 param_2)
{
    s32 bVar2;
    s8 cVar1;
    s32 iVar4;
    u8 *q;
    u8 *pp;

    pp = param_1 + 256;
    if (*(u16 *)(pp + 18) != 0) {
        return 0;
    }
    switch (*(s16 *)(param_1 + 0xf0)) {
    case 0:
    case 1:
    case 2:
    case 3:
        goto ret0;
    case 4:
        goto c4;
    case 5:
        goto c5;
    case 6:
        goto c6;
    case 7:
        goto c7;
    case 8:
        goto c8;
    case 111:
        goto ret0;
    default:
        goto ret0;
    }
ret0:
    return 0;
c4:
    cVar1 = *(s8 *)(param_1 + 0x88);
    bVar2 = 1;
    iVar4 = func_020bc14c();
    if (cVar1 != iVar4 && cVar1 != *(s8 *)(data_0214f464 + 7)) {
        bVar2 = 0;
    }
    if (!bVar2) {
        goto done_true;
    }
    switch (param_2) {
    case 0:
    default:
        goto d5;
    case 1:
        goto s1;
    case 2:
        goto s2;
    case 3:
        goto d5;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        goto s13;
    }
d5:
    func_020bbe14(5, cVar1);
    goto jn;
s1:
    if (*(u16 *)(param_1 + 0xf2) == 0x1c) {
        func_020bbe14(11, cVar1);
    } else {
        func_020bbe14(7, cVar1);
    }
    goto jn;
s2:
    func_020bbe14(9, cVar1);
    goto jn;
s13:
    func_020bbe14(13, cVar1);
jn:
    if (*(s8 *)(param_1 + 0x88) == *(s8 *)(data_0214f464 + 7)) {
        q = (u8 *)func_020bc3c4() + 136;
        *(s32 *)(q + 0x6c) = 1;
    } else {
        q = (u8 *)func_020bc3c4() + 136;
        *(s32 *)(q + 0x6c) = 0;
    }
done_true:
    *(s16 *)(param_1 + 0xea) = param_2 + 0xec;
    return 1;
c5:
    *(s16 *)(param_1 + 0xea) = param_2 + 0x122;
    SwapR1((vu8 *)(param_1 + 168), 0);
    *(u16 *)(pp + 18) = 0;
    *(u16 *)(param_1 + 0xf0) = 0x6f;
    SwapR0((vu8 *)(param_1 + 165), 0);
    SwapR0((vu8 *)(param_1 + 163), 0);
    return 1;
c6:
    *(s16 *)(param_1 + 0xea) = param_2 + 0x12b;
    SwapR1((vu8 *)(param_1 + 168), 0);
    *(u16 *)(pp + 18) = 0;
    *(u16 *)(param_1 + 0xf0) = 0x6f;
    SwapR0((vu8 *)(param_1 + 165), 0);
    SwapR0((vu8 *)(param_1 + 163), 0);
    return 1;
c7:
    *(s16 *)(param_1 + 0xea) = param_2 + 0x134;
    SwapR1((vu8 *)(param_1 + 168), 0);
    *(u16 *)(pp + 18) = 0;
    *(u16 *)(param_1 + 0xf0) = 0x6f;
    SwapR0((vu8 *)(param_1 + 165), 0);
    SwapR0((vu8 *)(param_1 + 163), 0);
    return 1;
c8:
    *(s16 *)(param_1 + 0xea) = param_2 + 0x119;
    SwapR1((vu8 *)(param_1 + 168), 0);
    *(u16 *)(pp + 18) = 0;
    *(u16 *)(param_1 + 0xf0) = 0x6f;
    SwapR0((vu8 *)(param_1 + 165), 0);
    SwapR0((vu8 *)(param_1 + 163), 0);
    return 1;
}
