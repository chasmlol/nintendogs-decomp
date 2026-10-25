#include "ctx.h"

extern u16 *data_0215942c;
void func_02023684(u8 *a, u32 b, u32 c);

void func_020235b4(u8 *param_1, u32 param_2, u32 param_3)
{
    if (*data_0215942c != 0x11) {
        return;
    }
    if (*(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x72) == 4) {
        func_02023684(param_1, param_2, param_3);
    }
}
