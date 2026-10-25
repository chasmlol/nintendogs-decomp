#include "ctx.h"

extern u32 data_0215be48;
extern void func_0210a854(s32 a);

void func_02108b2c(s32 param_1, s32 param_2)
{
    u8 *base;
    u8 *q;
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) == 5) {
        func_0210a854(2);
        base = *(u8 **)&data_0215be48;
        q = base + 0x53a8;
        *(s32 *)(base + 0x53a8) = param_1;
        *(s32 *)(q + 4) = param_2;
        *(s32 *)(q + 8) = 0x5a;
        *(s32 *)(*(u8 **)&data_0215be48 + 0x2fc) = param_2;
    }
}
