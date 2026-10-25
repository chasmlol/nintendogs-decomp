#include "ctx.h"

extern u8 *data_0215be48;

u32 *func_02006b78(u32 a);

void func_02112e74(u32 param_1, u32 param_2)
{
    u32 *puVar2;
    u32 *piVar1;

    puVar2 = (u32 *)(data_0215be48 + 0x1dec + param_1 * 660);
    if (param_2 != 0) {
        piVar1 = func_02006b78(param_2);
        puVar2[4] = piVar1[3];
        puVar2[0] = 1;
        return;
    }
    puVar2[4] = 0;
    puVar2[0] = 0;
}
