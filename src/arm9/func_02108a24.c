#include "ctx.h"

extern u8 *data_0215be48;
void func_020fddc0(u32 a);
void func_0210a854(u32 a);

void func_02108a24(void)
{
    if (*(u32 *)(data_0215be48 + 0xa8) == 7) {
        func_020fddc0(40);
        func_0210a854(1);
    }
}
