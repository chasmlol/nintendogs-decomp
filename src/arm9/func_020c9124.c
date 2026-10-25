#include "ctx.h"

extern u32 data_02142bcc;
extern void func_020cdc04(s32 *, s32 *, s32, s32, u16);

void func_020c9124(s32 *param_1, s32 param_2, u16 param_3, s32 param_4)
{
    s32 local_1c[3];
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    func_020cdc04(param_1, local_1c, param_2, 0, param_3);
    param_1[1] = param_4;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142bcc;
}
