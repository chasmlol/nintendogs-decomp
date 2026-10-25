#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern s32 func_0202508c(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_0203567c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_02047fe0(u8 *param_1)
{
    s32 v;
    s32 r;

    v = func_02028124(param_1);
    r = func_0202508c(param_1, 17, 37, FX_Mul(v, 92));
    if (r == 0) {
        v = func_02028124(param_1);
        func_0202508c(param_1, 44, 70, FX_Mul(v, 118));
    }
    if (func_0203567c(param_1) != 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
    }
}
