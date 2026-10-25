#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_02028124(u8 *p);
void func_02024e40(u8 *p, s32 a, s32 b);
s32 func_0203567c(u8 *p);
void func_0202fd7c(u8 *p);

void func_0200e7a0(u8 *p)
{
    s32 x;

    x = func_02028124(p);
    func_02024e40(p, 11, FX_Mul(x, 93));
    *(s16 *)(p + 0x152) = *(s16 *)(p + 0x148);
    if (func_0203567c(p) != 0) {
        *(u16 *)(p + 0x152) = 0;
        func_0202fd7c(p);
    }
}
