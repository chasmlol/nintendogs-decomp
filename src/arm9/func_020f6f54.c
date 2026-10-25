#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02094258(u8 *p);

void func_020f6f54(u8 *param_1)
{
    if (*(s8 *)(param_1 + 0x70) == 0) {
        func_02094258(param_1 + 0x74);
    }
    *(u32 *)(data_0215be48 + 0x4868) = 1;
}
