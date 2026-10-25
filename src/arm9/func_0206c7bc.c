#include "ctx.h"

void func_0206c7bc(u16 param_1, u8 *param_2, s32 param_3)
{
    s32 i;

    i = 0;
    for (;;) {
        if (i >= param_3) {
            break;
        }
        *(u16 *)(param_2 + i) = param_1;
        i = i + 2;
    }
}
