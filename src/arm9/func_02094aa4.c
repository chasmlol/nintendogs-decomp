#include "ctx.h"
extern u32 data_02159034;
extern void func_0206c7d4(u32 a, u32 b, u32 c);
void func_02094aa4(u32 param_1, s16 param_2, u32 param_3)
{
    u8 *row;
    u16 m = (u16)param_3;
    row = (u8 *)data_02159034 + 0x155c + param_2 * 24;
    func_0206c7d4((u32)(*(s32 *)(row + 4) * m + *(s32 *)(row + 0x10) + 4), param_1, 0x13c);
}
