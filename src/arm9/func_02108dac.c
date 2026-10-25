#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fddc0(u32 p);

void func_02108dac(void)
{
    if (*(u32 *)(*(u8 **)&data_0215be48 + 0xa8) == 2) {
        func_020fddc0(0x24);
    }
}
