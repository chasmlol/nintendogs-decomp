#include "ctx.h"

extern u8 *data_0215be48;
void func_02111be4(u32 a, s16 b, s16 c);

void func_020ff8cc(u8 *param_1)
{
    if (*(u32 *)(data_0215be48 + 0xbc) == 11) {
        func_02111be4(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    }
}
