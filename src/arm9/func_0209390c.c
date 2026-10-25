#include "ctx.h"

extern u8 *data_02159034;

void func_0209390c(u16 *param_1)
{
    u8 *b = *(u8 **)(data_02159034 + 0x1000 + 0x41c) + 4;
    s32 i = 0;
    do {
        *(u16 *)(b + i * 2 + 12) = 0;
        i = (s16)(i + 1);
    } while (i < 11);
    i = 0;
    do {
        if (*param_1 == 0) {
            return;
        }
        *(u16 *)(b + i * 2 + 12) = *param_1;
        i = (s16)(i + 1);
        param_1 = param_1 + 1;
    } while (i < 10);
}
