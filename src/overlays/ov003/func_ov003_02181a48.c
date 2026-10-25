#include "ctx.h"
extern s32 func_02028124(int p);
extern void func_ov003_02183a9c(int p, int a, int b, int c, int d, u32 e);

void func_ov003_02181a48(int param_1)
{
    s32 x;
    s64 v;
    x = func_02028124(param_1);
    v = (s64)x * 163 + 0x800;
    func_ov003_02183a9c(param_1, 2, 0xf1, 0x14, 0x32, (u32)(v >> 12));
}
