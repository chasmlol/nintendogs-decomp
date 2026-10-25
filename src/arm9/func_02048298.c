#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02024e40(u8 *p, u32 n, s32 v);
extern s32 func_0203567c(u8 *p);
extern void func_02048680(u8 *p, u32 n, s32 v);

void func_02048298(u8 *param_1)
{
    s32 x;
    s32 iVar2;

    x = func_02028124(param_1);
    func_02024e40(param_1, 11, FX_Mul(x, 93));
    iVar2 = func_0203567c(param_1);
    func_02048680(param_1, 1, iVar2);
}
