#include "ctx.h"

typedef struct {
    u32 w[11];
} T44;

void func_020d14ac(u8 *param_1, s32 param_2, T44 *param_3)
{
    *(T44 *)(param_1 + param_2 * 44 + 0x20) = *param_3;
}
