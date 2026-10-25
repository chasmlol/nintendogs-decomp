#include "ctx.h"

extern u32 data_0215be48;
extern void func_02003c10(u32);

void func_0210e388(u32 *param_1)
{
    if (*(s32 *)((u8 *)data_0215be48 + 0xb4) == 3) {
        func_02003c10(0x14);
    }
    *param_1 = 0;
}
