#include "ctx.h"

extern u32 data_0215be48;
extern void func_02003d90(s32 v);

void func_020f1f04(void)
{
    u8 *p = (u8 *)data_0215be48;
    if (*(s32 *)(p + 0xbc) == 5) {
        func_02003d90(20);
    }
}
