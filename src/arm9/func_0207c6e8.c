#include "ctx.h"

extern u8 data_0213e79c[];
extern u8 *data_0213e788[];

void func_0207c6e8(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    data_0213e788[0] = data_0213e79c + param_1 * 24;
    data_0213e788[1] = data_0213e79c + param_2 * 24;
    data_0213e788[2] = data_0213e79c + param_3 * 24;
    data_0213e788[3] = data_0213e79c + param_4 * 24;
    data_0213e788[4] = data_0213e79c + param_5 * 24;
}
