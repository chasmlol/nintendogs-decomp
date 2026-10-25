#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern void func_02024ff0(u8 *p, u32 v);
extern s32 func_0203567c(u8 *p);
extern void func_02048680(u8 *p, u32 a, s32 b);

#define FX_Mul(a, b) ((u32)((((s64)(a) * (b)) + 0x800) >> 12))

void func_020485ac(u8 *p)
{
    s32 x;
    s32 iVar2;

    x = func_02028124(p);
    func_02024ff0(p, FX_Mul(x, 102));
    iVar2 = func_0203567c(p);
    func_02048680(p, 0, iVar2);
}
