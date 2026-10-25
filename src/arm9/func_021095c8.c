#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fc114(u32 a, u8 *b, s32 c, u32 d);

void func_021095c8(s32 *param_1)
{
    *param_1 = *param_1 - 1;
    if (*param_1 < 0) {
        *(u32 *)(data_0215be48 + 0x4868) = 1;
        return;
    }
    func_020fc114(2, (u8 *)param_1 + 0xf0, *param_1, 16);
}
