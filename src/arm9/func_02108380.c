#include "ctx.h"
extern u8 *data_0215be48;
extern u8 *data_0215bf9c;
void func_02108380(u32 param_1)
{
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xb8) == 2) {
        *(u32 *)(*(u8 **)&data_0215bf9c + 0x48) = param_1;
    }
}
