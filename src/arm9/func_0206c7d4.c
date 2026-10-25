#include "ctx.h"

void func_0206c7d4(u8 *param_1, u8 *param_2, s32 param_3)
{
    s32 i = 0;
    for (;;) {
        if (i >= param_3) {
            break;
        }
        *(u16 *)(param_2 + i) = *(u16 *)(param_1 + i);
        i = i + 2;
    }
}
