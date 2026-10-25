#include "ctx.h"
void func_0207f980(u32 *param_1, u32 param_2, u32 param_3)
{
    asm { add param_2, param_2, #4 }
    param_1[16] = param_2;
    param_1[17] = param_3;
    param_1[14] = param_3 - 64;
    asm { ands param_2, param_2, #1 }
    asm { movne param_2, #63 }
    asm { moveq param_2, #31 }
    param_1[0] = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[11] = 0;
    param_1[12] = 0;
    param_1[13] = 0;
    param_1[15] = 0;
}
