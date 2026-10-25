#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u32 p);
extern s32 func_02024e40(u32 p, u32 a, s32 v);
extern void func_02024d40(u32 p, u32 a, u32 b, s32 v);
extern void func_020488e4(u32 p, u32 a);

void func_02047f2c(u32 p)
{
    s32 x;

    x = func_02028124(p);
    if (func_02024e40(p, 22, FX_Mul(x, 93)) == 0) {
        x = func_02028124(p);
        func_02024d40(p, 23, 44, FX_Mul(x, 186));
    }
    func_020488e4(p, 7);
}
