#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern void func_ov003_02183d00(u8 *p, u32 a, u32 b, u32 c);

void func_ov003_02181134(u8 *p)
{
    s32 v = func_02028124(p);
    s64 x = (s64)v * 26;
    func_ov003_02183d00(p, 4, 243, (u32)((x + 0x800) >> 12));
}
