#include "ctx.h"

extern u8 *data_0215be48;
void func_020fddc0(u32 a);
void func_0210a854(u32 a);

void func_02108908(void)
{
    if (*(u32 *)(data_0215be48 + 0xa8) == 7) {
        func_020fddc0(2);
        *(u32 *)(data_0215be48 + 0x1d14) = 18;
        func_0210a854(4);
    }
}
