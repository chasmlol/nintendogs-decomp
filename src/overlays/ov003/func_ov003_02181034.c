#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern void func_ov003_0218381c(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);

void func_ov003_02181034(u8 *param_1)
{
    s32 v1;
    s32 v2;
    s64 t1;
    s64 t2;

    v1 = func_02028124(param_1);
    v2 = func_02028124(param_1);
    t1 = (s64)v2 * -217 + 0x800;
    t2 = (s64)v1 * -168 + 0x800;
    func_ov003_0218381c(param_1, 1, 0xec, 0xb, 0x22, (u32)(t1 >> 12), 0x23, 0x3e, (u32)(t2 >> 12));
}
