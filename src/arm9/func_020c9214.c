#include "ctx.h"

extern u8 *data_02159428;
extern u32 data_02142bd0;
extern void func_020cdc04(u32 *a, u32 *b, u32 c, u32 d, u32 e);

void func_020c9214(u32 *param_1, u16 param_2)
{
    u32 local[3];
    u32 a;
    u32 c;
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    func_020cdc04(param_1, local, *(u32 *)(data_02159428 + 0xc), 0, param_2);
    param_1[1] = 0x14000;
    a = param_1[0];
    c = param_1[2];
    param_1[3] = -a;
    param_1[4] = 0;
    param_1[5] = -c;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02142bd0;
}
