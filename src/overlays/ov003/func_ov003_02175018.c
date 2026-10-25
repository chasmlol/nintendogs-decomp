#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02024f18(u8 *p, u32 a, s32 b);
extern s32 func_ov003_02175458(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_02175018(u8 *param_1)
{
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(param_1);
    func_02024f18(param_1, 1, FX_Mul(uVar1, 491));
    iVar2 = func_ov003_02175458(param_1, 944, 0, 768, 1, 0, 1, 0, 0);
    if (iVar2 != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 944);
    }
}
