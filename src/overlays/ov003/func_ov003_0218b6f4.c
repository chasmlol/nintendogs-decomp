#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T3;

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern s32 data_0214f460;
extern u8 data_02152cd8[];
extern u8 *data_02159444;

extern s32 func_020ab02c(s32 a, s32 b, s32 c);
extern void func_02067e34(s32 a, s32 b, s32 c);
extern void func_01ff832c(s32 a, s32 b, s32 c, s32 d);
extern s32 func_02067df0(s32 a, s32 b);
extern void func_ov003_0218c050(s32 a, s32 b);
extern s32 func_02028130(s32 a);
extern s32 func_020aaf38(s32 a, s32 b, s32 c);
extern void func_0202f9b4(s32 a);
extern void func_02044bcc(s32 a);
extern u32 func_ov003_0218cb7c(s32 a);
extern s32 func_02026df0(s32 a);
extern s32 func_020385e4(s32 a);
extern void func_0203e908(s32 a, s32 b);
extern s32 func_02029504(s32 a);
extern s32 func_02022e14(s32 a, s32 b);
extern s32 func_0202a864(s32 a);
extern u32 func_020340f4(s32 a);
extern u32 func_ov003_0218ba3c(s32 a);

u32 func_ov003_0218b6f4(int param_1)
{
    s32 a0[3];
    s32 a1[3];
    s32 a2[3];
    s32 iVar4;
    s32 iVar6;
    s32 t3;
    s32 t4;
    u32 uVar5;
    s32 bVar2;
    s32 t;
    u32 uq;

    a0[0] = *(s32 *)(data_02152cd8 + 0x4c);
    a0[1] = *(s32 *)(data_02152cd8 + 0x58);
    a0[2] = *(s32 *)(data_02152cd8 + 0x64);
    func_020ab02c(data_0214f460, (s32)a1, param_1 + 0x2dc);
    func_02067e34((s32)a1, param_1 + 0x2dc, (s32)a1);
    iVar4 = *(s32 *)(data_02159444 + 0x1c);
    *(T3 *)a2 = *(T3 *)(iVar4 + 0x30);
    func_01ff832c(0x3000, (s32)a1, (s32)a2, param_1 + 0x3b4);
    *(s32 *)(param_1 + 0x3b8) += a1[1] * 3 - 0x5000;
    uVar5 = func_02067df0((s32)a1, (s32)a0);
    if ((s32)uVar5 > 0) {
        *(u16 *)(param_1 + 0x12e) = 0xf400;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xc00;
    }
    func_ov003_0218c050(param_1, 1);
    iVar4 = func_02028130(param_1);
    iVar6 = func_02028130(param_1);
    iVar4 = func_020aaf38(data_0214f460, param_1 + 0x378, FX_Mul(FX_Mul(iVar6, iVar4), 0x1004));
    if (iVar4 == 0) {
        *(u16 *)(param_1 + 0x11c) = *(u16 *)(param_1 + 0x11c) + 1;
    } else {
        *(u16 *)(param_1 + 0x11c) = 0;
    }
    iVar4 = *(s32 *)(data_02159444 + 0x98);
    iVar6 = *(s32 *)(data_02159444 + 0x94);
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 + iVar4 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
    } else {
        {
            if (*(u16 *)((u8 *)param_1 + 0x11e) != 0) {
                *(u16 *)((u8 *)param_1 + 0x11e) = *(u16 *)((u8 *)param_1 + 0x11e) - 1;
            }
        }
    }
    func_0202f9b4(param_1);
    if (*(u16 *)(param_1 + 0x11c) <= 2) {
        SwapByte(1, (vu8 *)(param_1 + 0xb9));
    } else {
        SwapByte(0, (vu8 *)(param_1 + 0xb9));
    }
    if (*(u16 *)(param_1 + 0x11c) > 20) {
        func_02044bcc(*(s8 *)(param_1 + 0x88));
        return func_ov003_0218cb7c(param_1);
    }
    bVar2 = func_02026df0(param_1);
    if (bVar2 != 0) {
        func_02044bcc(*(s8 *)(param_1 + 0x88));
        iVar4 = func_020385e4(param_1);
        switch (iVar4) {
        case 0:
            func_0203e908(param_1, 0x30f);
            break;
        case 1:
            func_0203e908(param_1, 0x311);
            break;
        case 2:
            func_0203e908(param_1, 0x312);
            break;
        case 3:
            func_0203e908(param_1, 0x313);
            break;
        }
        if (*(s16 *)(param_1 + 0xf0) == 1) {
            return func_02029504(param_1);
        }
        t = func_02022e14(param_1, 1);
        if (t == 0) {
            return t;
        }
        return func_02029504(param_1);
    }
    t = func_0202a864(param_1);
    if (t != 0) {
        func_02044bcc(*(s8 *)(param_1 + 0x88));
        func_0203e908(param_1, 858);
        return func_020340f4(param_1);
    }
    uq = *(u16 *)(param_1 + 0x11e);
    if (uq <= 20) {
        return uq;
    }
    return func_ov003_0218ba3c(param_1);
}
