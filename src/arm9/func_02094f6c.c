#include "ctx.h"

void func_02094f6c(u8 *param_1, s32 param_2)
{
    s16 i = 0;
    do {
        if (i != param_2) {
            *(u16 *)(param_1 + i * 2 + 0x7e8) = 0;
        }
        i = i + 1;
    } while (i < 8);
}
