#include "ctx.h"

extern u8 *data_0215bf9c;

void func_021189e0(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (*param_1 >= 16) {
        *(u32 *)(data_0215bf9c + 0x19c) = 1;
    }
}
