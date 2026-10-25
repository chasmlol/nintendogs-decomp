#include "ctx.h"

typedef struct {
    u32 w[3];
} T;

void func_020d3a2c(u8 *param_1, T *param_2)
{
    *param_2 = *(T *)(param_1 + 8);
}
