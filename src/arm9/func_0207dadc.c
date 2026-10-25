#include "ctx.h"
void func_0207dadc(s32 *param_1, u8 *param_2)
{
    u32 t = (*(u16 *)(param_2 + 2) >> 8) & 0x7f;
    s32 q = (s32)param_2 + 16;
    *param_1 = (s32)param_2 - (u16)t;
    param_1[1] = *(s32 *)(param_2 + 4) + q;
}
