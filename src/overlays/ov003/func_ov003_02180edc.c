#include "ctx.h"

extern u32 func_02028124(u8 *p);
extern void func_ov003_02183d00(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_02180edc(u8 *param_1)
{
    s32 v = (s32)func_02028124(param_1);
    s64 x = (s64)v * 26 + 0x800;
    func_ov003_02183d00(param_1, 3, 242, (u32)(x >> 12));
}
