#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

void func_020aae7c(u8 *param_1, T12 *param_2, s32 param_3)
{
    s16 sVar1 = *(s16 *)(param_1 + param_3 * 2 + 0xc6);
    if (sVar1 != -1) {
        *param_2 = *(T12 *)(param_1 + sVar1 * 12 + 0xd0);
        return;
    }
    *param_2 = *(T12 *)(param_1 + 0xe8);
}
