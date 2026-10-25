#include "ctx.h"

extern u32 data_0215be48;
extern void func_02003c58(u32);

void func_0211cb98(void)
{
    if (*(s32 *)((u8 *)data_0215be48 + 0xb4) == 0x17) {
        func_02003c58(10);
        return;
    }
}
