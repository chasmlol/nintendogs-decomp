#include "ctx.h"

extern u32 data_02156024;
void func_02067af0(u32 *a, u32 *b);

void func_02085b24(u32 *param_1)
{
    u32 t;
    t = data_02156024 * 0x5eedf715u + 0x1b0cb173u;
    data_02156024 = t;
    param_1[0] = (u32)((s32)t >> 8);
    t = data_02156024 * 0x5eedf715u + 0x1b0cb173u;
    data_02156024 = t;
    param_1[1] = (u32)((s32)t >> 8);
    param_1[2] = 0;
    func_02067af0(param_1, param_1);
}
