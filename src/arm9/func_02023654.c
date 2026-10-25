#include "ctx.h"

extern void func_02023684(s32 a, u32 b, s32 c);

void func_02023654(s32 param_1, u32 param_2, s32 param_3)
{
    if (*(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x72) == 5) {
        func_02023684(param_1, param_2, param_3);
        return;
    }
}
