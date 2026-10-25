#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 func_0203567c(u8 *p);
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern s32 func_0203579c(u8 *p, s32 v);
extern s32 func_02028124(u8 *p);

void func_ov003_0217b2bc(u8 *param_1)
{
    s32 iVar1;
    s32 uVar2;
    iVar1 = func_0203567c(param_1);
    func_ov003_0217b43c(param_1, 2, 38, 1, 1, iVar1, 19, 19);
    iVar1 = func_0203579c(param_1, 1);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        *(s32 *)(param_1 + 0x25c) = FX_Mul(uVar2, -30);
        *(s32 *)(param_1 + 0x264) = *(s32 *)(param_1 + 0x25c) * -18;
    }
}
