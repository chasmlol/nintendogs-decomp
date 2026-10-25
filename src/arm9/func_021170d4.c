#include "ctx.h"

extern u8 *data_0215be48;
void func_0210a854(u32 a);

void func_021170d4(u32 *param_1)
{
    *param_1 = 0;
    if (*(u32 *)(data_0215be48 + 0xa8) == 3) {
        func_0210a854(8);
    }
}
