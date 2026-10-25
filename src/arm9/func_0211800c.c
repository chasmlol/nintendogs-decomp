#include "ctx.h"

extern u8 *data_0215bf9c;
extern void func_020fc594(s32 a, s32 b, s32 c);

void func_0211800c(s32 param_1)
{
    *(s32 *)(param_1 + 4) = *(s32 *)(param_1 + 4) + 1;
    if (*(s32 *)(param_1 + 4) > 2) {
        func_020fc594(0, 4, 0);
        *(s32 *)(data_0215bf9c + 0x19c) = 1;
        return;
    }
}
