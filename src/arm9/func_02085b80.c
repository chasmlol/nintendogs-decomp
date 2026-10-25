#include "ctx.h"

extern u32 data_02156024;
extern void func_02067af0(u32, u32);

void func_02085b80(s32 *param_1)
{
    s32 v;
    s32 add = 0x1b0cb173;
    s32 mul = 0x5eedf715;
    v = (s32)data_02156024 * mul + add;
    data_02156024 = (u32)v;
    param_1[0] = v >> 8;
    v = (s32)data_02156024 * mul + add;
    data_02156024 = (u32)v;
    param_1[1] = v >> 8;
    v = (s32)data_02156024 * mul + add;
    data_02156024 = (u32)v;
    param_1[2] = v >> 8;
    func_02067af0((u32)param_1, (u32)param_1);
}
