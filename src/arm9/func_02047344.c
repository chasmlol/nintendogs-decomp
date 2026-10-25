#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02025264(u8 *p, u32 a, s32 b);
extern s32 func_0204754c(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0204fc38(u8 *p);

void func_02047344(u8 *param_1)
{
    s32 v;

    v = func_02028124(param_1);
    func_02025264(param_1, 9, FX_Mul(v, 512));
    if (func_0204754c(param_1, 1) != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0204fc38(param_1);
        return;
    }
}
