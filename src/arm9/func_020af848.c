#include "ctx.h"

void func_020ad7c8(u8 *a, u32 b);
void func_020ad6fc(u8 *a, u32 b);

u32 func_020af848(u8 *param_1)
{
    u32 r = 0;
    if (*(s32 *)(param_1 + 0x134) == -3) {
        r = 1;
        func_020ad7c8(param_1, 10);
        func_020ad6fc(param_1, 0);
    }
    return r;
}
