#include "ctx.h"

s32 func_02078500(u8 *param_1, s32 param_2)
{
    u32 t = *(u16 *)(param_1 + 0x12);
    u8 *b = param_1 + 0xc;
    u16 a = *(u16 *)(b + t);
    return (s32)a * param_2 + (s32)(b + t + 4);
}
