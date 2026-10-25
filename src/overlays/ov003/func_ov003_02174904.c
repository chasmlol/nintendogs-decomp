#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0214f460;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

typedef struct { s32 w[3]; } T3;

s32 func_02035584(u8 *p, s32 a);
s32 func_0203567c(u8 *p);
void func_0203e8cc(u8 *p, s32 a, s32 b);
void func_0209bdcc(u8 *p, s32 a, s32 b);
void func_0200926c(u8 *p, s32 a, s32 b);
void func_020239b4(u8 *p, s32 a);
void func_0203e908(u8 *p, s32 a);
void func_02029504(u8 *p);
s32 func_02028130(u8 *p);
s32 func_020aaf38(u32 a, s32 *b, s32 c);
s32 func_0200963c(u8 *p, s32 a, s32 b);
void func_020ab02c(u32 a, s32 *b, s32 *c);
void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
s32 func_0202e29c(u8 *p);
void func_020b9b18(s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_ov003_02174904(u8 *param_1, u32 param_2, s32 param_3, u32 param_4)
{
    s32 iVar2;
    s32 iVar5;
    s32 bVar7;
    s32 local_2c[3];
    u32 *pc;
    u32 v;
    vu8 *pp;
    s32 fx;

    if (*(s32 *)(param_1 + 0x464) != 0) {
        if (*(u16 *)(param_1 + 0xfc) > 120) {
            iVar5 = 1;
            goto fl1;
        }
    }
    iVar5 = 0;
fl1:;
    bVar7 = 0;
    if (param_3 == -1) {
        iVar2 = func_02035584(param_1, 1);
        if (iVar2 != 0) {
            *(s32 *)(param_1 + 0x464) = 1;
            pp = (vu8 *)(param_1 + 151);
            SwapByte(0, pp);
            func_0203e8cc(param_1, 1, 0);
        }
    } else {
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            *(s32 *)(param_1 + 0x464) = 1;
            pp = (vu8 *)(param_1 + 151);
            SwapByte(0, pp);
            func_0203e8cc(param_1, 0, param_3);
        }
    }
    iVar2 = *(s32 *)(param_1 + 0x468);
    if (iVar2 > 0) {
        *(s32 *)(param_1 + 0x468) = iVar2 - 1;
        pp = (vu8 *)(param_1 + 151);
        SwapByte(4, pp);
        iVar2 = *(s32 *)(param_1 + 0x468);
        if (iVar2 == 84 || iVar2 == 72 || iVar2 == 60) {
            func_0209bdcc(param_1 + 0x95c, -2, 0);
        }
        if (*(s32 *)(param_1 + 0x468) == 40) {
            func_0200926c(param_1, 18, 3);
            func_0203e8cc(param_1, 2, 20);
        }
        if (*(s32 *)(param_1 + 0x468) == 0) {
            pc = *(u32 **)&data_0214f464;
            v = *pc * 0x10dcd + 1;
            *pc = v;
            if ((u16)((((u32)(u16)v) * 5) >> 16) == 0) {
                func_020239b4(param_1, 0);
            }
            if (*(s16 *)(param_1 + 0xf0) == 8) {
                func_0203e908(param_1, param_2);
                func_02029504(param_1);
                bVar7 = 1;
            }
            iVar5 = 1;
        } else {
            iVar5 = 0;
        }
    } else {
        *(T3 *)local_2c = *(T3 *)(param_1 + 0x490);
        if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 0) {
            iVar2 = func_020aaf38(*(u32 *)&data_0214f460, local_2c, FX_Mul(func_02028130(param_1), 0xcd0));
            if (iVar2 != 0) {
                iVar5 = func_0200963c(param_1, 0x13, 0);
                func_020ab02c(*(u32 *)&data_0214f460, local_2c, local_2c);
                *(T3 *)(param_1 + 0x490) = *(T3 *)local_2c;
                if (iVar5 == -1) goto Lm1;
                *(T3 *)(param_1 + (s16)iVar5 * 12 + 0x8a8) = *(T3 *)local_2c;
                goto Lj1;
            Lm1:
                {
                    func_0200926c(param_1, 79, 0);
                    func_0200926c(param_1, 73, 0);
                    func_0200926c(param_1, 74, 0);
                    func_0200926c(param_1, 75, 0);
                    func_0200926c(param_1, 76, 0);
                    func_0200926c(param_1, 77, 0);
                    func_0200926c(param_1, 78, 0);
                    func_02009408(param_1, 19, 0, local_2c, 1);
                }
                Lj1:;
                iVar5 = func_02028130(param_1);
                iVar2 = func_02028130(param_1);
                fx = FX_Mul(iVar2, iVar5);
                iVar5 = 0;
                iVar2 = func_020aaf38(*(u32 *)&data_0214f460, (s32 *)(param_1 + 0x2e8), FX_Mul(fx, 0x19a));
                if (iVar2 != 0) {
                    func_0200926c(param_1, 19, iVar5);
                    iVar5 = 1;
                    func_02009408(param_1, 18, 3, 0, 1);
                    func_0203e8cc(param_1, 2, 13);
                    *(s32 *)(param_1 + 0x468) = 90;
                }
                *(T3 *)(param_1 + 0x3b4) = *(T3 *)local_2c;
                SwapByte(9, (vu8 *)(param_1 + 147));
                iVar5 = 0;
                *(u16 *)(param_1 + 0x12e) = param_4;
            }
        }
    }
    if (iVar5 != 0) {
        func_0200926c(param_1, 79, 0);
        func_0200926c(param_1, 73, 0);
        func_0200926c(param_1, 74, 0);
        func_0200926c(param_1, 75, 0);
        func_0200926c(param_1, 76, 0);
        func_0200926c(param_1, 77, 0);
        func_0200926c(param_1, 78, 0);
        func_0200926c(param_1, 19, 0);
        func_0200926c(param_1, 18, 3);
    }
    if (iVar5 != 0 && !bVar7 && func_0202e29c(param_1) != 0) {
        func_020b9b18(1);
    }
    return iVar5;
}
