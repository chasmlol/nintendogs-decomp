#include "ctx.h"

extern s32 func_0206cdb8(u32 a, u32 b, u32 c);

BOOL func_0206d7a4(u32 param_1)
{
    u32 t = param_1 << 8;
    s32 r = func_0206cdb8(5, t & 0x7f00, 0);
    return r >= 0;
}
