#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02024e40(u8 *p, u32 n, s32 v);
extern void func_02039818(u8 *p);
extern s32 func_0200f8e0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0217dad0(u8 *param_1)
{
    s32 uVar1;

    uVar1 = func_02028124(param_1);
    func_02024e40(param_1, 11, -FX_Mul(uVar1, 93));
    func_02039818(param_1);
    if (func_0200f8e0(param_1) != 0) {
        return;
    }
    if (func_0203567c(param_1) == 0) {
        return;
    }
    func_0203e908(param_1, 0x355);
}
