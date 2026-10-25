#include "ctx.h"

extern u32 data_02142c08;
extern u32 data_02142d88;
extern u32 data_02142bd4;
extern u32 data_02159498;
extern u32 data_02142c00;
extern u32 data_02142c04;
extern u32 data_02142bfc;

void func_020c9534(u32 *param_1)
{
    u32 a = data_02142c08;
    u32 b = data_02142d88;
    u32 c = data_02142bd4;
    u32 d;
    u32 e;
    u32 f;
    param_1[0] = c;
    param_1[1] = b;
    param_1[2] = a;
    d = data_02159498;
    e = data_02142c00;
    f = data_02142c04;
    param_1[3] = f;
    param_1[4] = e;
    param_1[5] = d;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142bfc;
}
