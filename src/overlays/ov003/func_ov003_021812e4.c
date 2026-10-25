#include "ctx.h"

extern s32 func_02028124(u32 p);
extern void func_ov003_02183a9c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_ov003_021812e4(u32 param_1)
{
    s32 uVar1;
    s64 t;

    uVar1 = func_02028124(param_1);
    t = (s64)uVar1 * 163 + 0x800;
    func_ov003_02183a9c(param_1, 1, 0xef, 0x14, 0x32, (u32)(t >> 12));
}
