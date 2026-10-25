#include "ctx.h"
extern s32 func_02028124(u32 a);
extern void func_ov003_02183a9c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_ov003_021813b8(u32 param_1)
{
    s32 uVar1;
    s64 v;
    uVar1 = func_02028124(param_1);
    v = (s64)uVar1 * (s64)0x102 + 0x800;
    func_ov003_02183a9c(param_1, 3, 0xec, 0x1e, 0x31, (u32)(v >> 12));
}
