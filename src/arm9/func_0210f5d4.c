#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02111be4(u32 a, s32 b, s32 c);

void func_0210f5d4(u8 *param_1)
{
    if (*(s32 *)(data_0215be48 + 0xbc) == 11) {
        func_02111be4(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    }
}
