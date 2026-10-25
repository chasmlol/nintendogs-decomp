#include "ctx.h"

extern u8 data_0214f464[];
extern u8 data_02159428[];
extern void func_02035c98(u8 *p, int v);
extern void func_0203942c(u8 *p);
extern int func_02037450(u8 *p, int v);
extern int func_020289d0(u8 *p, int a, int b);
extern s32 func_02028124(u8 *p);
extern void func_0202fd7c(u8 *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0200ea1c(u8 *param_1)
{
    u32 uVar8;
    s32 iVar9;
    s32 iVar5;
    s32 iVar4;
    s32 iVar6;
    s32 iVar3;
    u32 *P;

    func_02035c98(param_1, 1);
    iVar4 = 0x10dcd;
    P = *(u32 **)data_0214f464;
    uVar8 = *P * iVar4 + 1;
    *P = uVar8;
    if ((u16)(((u32)(u16)uVar8 * 500u) >> 16) == 0) {
        iVar9 = *(s32 *)(*(u8 **)data_02159428 + 0xc) * 3;
        iVar5 = iVar9 >> 2;
        P = *(u32 **)data_0214f464;
        iVar6 = iVar4 * *P + 1;
        *P = iVar6;
        *(s32 *)(param_1 + 0x26c) = FX_Mul((s16)(u16)(iVar6 & 0xfff), iVar5) - (iVar5 >> 1);
        P = *(u32 **)data_0214f464;
        iVar4 = iVar4 * *P + 1;
        *P = iVar4;
        *(s32 *)(param_1 + 0x274) = FX_Mul((s16)(u16)(iVar4 & 0xfff), iVar5) - (iVar5 >> 1);
    }
    func_0203942c(param_1);
    iVar4 = func_02037450(param_1, 0x392);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 252) < 400) {
        if (iVar4 >= func_02028124(param_1)) {
            return;
        }
    }
    func_0202fd7c(param_1);
}
