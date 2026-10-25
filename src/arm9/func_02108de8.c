#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fddc0(s32 v);

void func_02108de8(void)
{
    if (*(s32 *)(data_0215be48 + 0xa8) == 1) {
        func_020fddc0(0x23);
    }
}
