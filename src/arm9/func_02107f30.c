#include "ctx.h"
extern u8 *data_0215be48;
extern void func_020fddc0(s32 a);
void func_02107f30(void)
{
    if (*(s32 *)(data_0215be48 + 0xb8) == 2) {
        func_020fddc0(1);
    }
}
