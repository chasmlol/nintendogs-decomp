#include "ctx.h"

extern u32 data_0214f464;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
s32 func_0202508c(u8 *p, s32 a, s32 b, s32 c);
void func_ov006_0215c310(u8 *p, s32 a, s32 b);

void func_ov006_0215c090(u8 *param_1)
{
    s32 bVar1;
    s32 uVar2;
    s32 iVar3;
    s32 iVar4;
    s32 nb;

    bVar1 = 0;
    uVar2 = func_02028124(param_1);
    iVar3 = func_0202508c(param_1, 77, 96, FX_Mul(uVar2, 129));
    if (iVar3 == 0) {
        uVar2 = func_02028124(param_1);
        iVar3 = func_0202508c(param_1, 116, 135, FX_Mul(uVar2, 129));
        if (iVar3 == 0) {
            goto skip;
        }
    }
    bVar1 = 1;
skip:
    iVar3 = 0;
    nb = (bVar1 == 0);
    if (nb) {
        uVar2 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = uVar2;
        if ((u16)(((u32)(u16)uVar2 * 200) >> 16) == 0) {
            iVar3 = 1;
        }
    }
    iVar4 = 0;
    if (nb) {
        uVar2 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = uVar2;
        if ((u16)(((u32)(u16)uVar2 * 200) >> 16) == 0) {
            iVar4 = 1;
        }
    }
    func_ov006_0215c310(param_1, iVar4, iVar3);
}
