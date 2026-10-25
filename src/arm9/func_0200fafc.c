#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0215942c;
extern u32 data_0214f45c;
extern u32 data_02159428;
extern void func_02035c98(s32 a, s32 b);
extern s32 func_0200c498(s32 a, s32 b);
extern void func_0203942c(s32 a);
extern s32 func_02037450(s32 a, s32 b);
extern s32 func_020289d0(s32 a, s32 b, s32 c);
extern s32 func_0202e304(s32 a);
extern s32 func_02042bec(s32 a);
extern s32 func_0203592c(s32 a, s32 b);
extern s32 func_020357c8(s32 a, s32 b);
extern s32 func_02028124(s32 a);
extern void func_0203e908(s32 a, s32 b);
extern void func_0202fd7c(s32 a);

typedef struct {
    u32 w[3];
} T3;

static inline s32 Rnd(s32 *p, s32 mul, s32 k)
{
    s32 v = *p * mul + 1;
    s32 fx = (s32)(((s64)(s16)(u16)(v & 0xfff) * k + 0x800) >> 12);
    *p = v;
    return fx - (k >> 1);
}

void func_0200fafc(s32 param_1, s32 param_2)
{
    u16 uVar1;
    s32 bVar4;
    s32 iVar5;
    s32 iVar6;
    u32 uVar11;
    s32 iVar12;

    func_02035c98(param_1, 1);
    iVar5 = 0x10dcd;
    uVar11 = *(u32 *)data_0214f464 * iVar5 + 1;
    *(u32 *)data_0214f464 = uVar11;
    if ((u16)((((u32)(u16)uVar11) * 500u) >> 16) == 0) {
        if (*(u16 *)data_0215942c == 0xc || *(u16 *)data_0215942c == 0x8003) {
            uVar1 = *(u16 *)(*(u32 *)(data_0214f45c + 0x20) + 0x2e);
            uVar11 = *(u32 *)data_0214f464 * iVar5 + 1;
            *(u32 *)data_0214f464 = uVar11;
            iVar5 = func_0200c498(0xb, (s16)(u16)(((u32)uVar1 * (u32)(u16)uVar11) >> 16));
            if (iVar5 != 0) {
                *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar5 + 8);
            }
        } else {
            iVar12 = *(s32 *)(data_02159428 + 0xc) * 3;
            iVar6 = iVar12 >> 2;
            *(u32 *)(param_1 + 0x26c) = Rnd((s32 *)data_0214f464, iVar5, iVar6);
            *(u32 *)(param_1 + 0x274) = Rnd((s32 *)data_0214f464, iVar5, iVar6);
        }
    }
    func_0203942c(param_1);
    iVar5 = func_02037450(param_1, 0x392);
    iVar6 = func_020289d0(param_1, 0, 1);
    if (iVar6 != 0) {
        return;
    }
    if (((*(u16 *)data_0215942c == 0) && (bVar4 = func_0202e304(param_1), bVar4 == 0)) &&
        (*(u16 *)(param_1 + 0x10c) == 0) && (iVar6 = func_02042bec((s32)*(s8 *)(param_1 + 0x88)), iVar6 != 0)) {
        return;
    }
    bVar4 = func_0203592c(param_1, 0);
    if (bVar4 != 0) {
        return;
    }
    iVar6 = func_020357c8(param_1, 1);
    if (iVar6 != 0) {
        return;
    }
    iVar6 = func_02028124(param_1);
    if (iVar5 >= iVar6) {
        return;
    }
    if (param_2 != 0) {
        func_0203e908(param_1, 0x255);
        return;
    }
    func_0202fd7c(param_1);
}
