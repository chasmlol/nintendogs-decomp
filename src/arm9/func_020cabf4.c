#include "ctx.h"

typedef struct { u32 w[3]; } T3;

void func_020cabf4(u32 *param_1, u32 *param_2, u8 *param_3)
{
    if (param_3 == 0) {
        return;
    }
    *(T3 *)param_1 = *(T3 *)param_2;
    *(T3 *)(param_1 + 3) = *(T3 *)(param_3 + 0xbc);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = 0x14000;
}
