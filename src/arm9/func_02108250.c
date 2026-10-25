#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fddc0(s32 a);

void func_02108250(void)
{
    u8 *p = data_0215be48;
    if (*(s32 *)(p + 0xb8) != 5) {
        func_020fddc0(5);
        return;
    }
}
