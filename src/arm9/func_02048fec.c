#include "ctx.h"

extern BOOL func_02049304(u32 p, s32 *out, u32 a, u32 b, u32 c, u32 d);
extern s32 func_02028130(u32 p);
extern void func_0203e908(u32 p, u32 v);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02048fec(u32 param_1)
{
    s32 local[2];

    local[0] = 0;
    if (func_02049304(param_1, local, 0, 0xb6, 0xb9, 0x29b)) {
        return;
    }
    if (local[0] > FX_Mul(func_02028130(param_1), 0x1cd4)) {
        func_0203e908(param_1, 0x297);
    }
}
