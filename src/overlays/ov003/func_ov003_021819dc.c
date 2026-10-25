#include "ctx.h"

extern s32 func_02028124(u32 a);
extern void func_ov003_02183a9c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_ov003_021819dc(u32 param_1)
{
    s32 uVar1;
    s64 v;
    s32 r;

    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * 163 + 0x800;
    r = (s32)(v >> 12);
    func_ov003_02183a9c(param_1, 3, 0xf2, 0x14, 0x32, (u32)(-r));
}
