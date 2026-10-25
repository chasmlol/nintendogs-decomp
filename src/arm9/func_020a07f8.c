#include "ctx.h"

extern void *data_021592bc;

void func_02070ac8(void **g, u32 a, u32 b);

void func_020a07f8(u32 param_1, u32 param_2)
{
    if (data_021592bc != 0) {
        func_02070ac8(&data_021592bc, param_1, param_2);
    }
}
