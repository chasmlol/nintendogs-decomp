#include "ctx.h"
void func_02078044(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *b = param_1 + *(s32 *)(param_1 + 8);
    u8 *a = b + 4;
    u8 *y = a + *(u16 *)(b + 10);
    u8 *z = y + *(u16 *)y * param_2;
    u8 *r = b + *(s32 *)(z + 4);
    *(u32 *)(r + 8) = (*(u32 *)(r + 8) & 0x8000ffff) | (param_3 << 16);
}
