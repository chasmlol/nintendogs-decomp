#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0201cb44(u8 *p)
{
    s32 r;

    r = func_02024d40(p, 11, 36, FX_Mul(func_02028124(p), 163));
    if (r == 0) {
        func_02024d40(p, 46, 80, FX_Mul(func_02028124(p), 94));
    }
    func_0201d1f0(p);
    func_02035c98(p, 1);
    r = func_0203567c(p);
    if (r != 0) {
        func_0202fcc0(p);
    }
}
