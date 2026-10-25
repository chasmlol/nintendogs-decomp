#include "ctx.h"

extern u8 *data_0215be38;
extern void func_0208f704(u32 a, u8 *b);

void func_020ebe10(u32 param_1)
{
    ((void (*)(u32, u8 *))func_0208f704)(param_1, data_0215be38 + 4);
}
