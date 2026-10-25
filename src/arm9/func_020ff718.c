#include "ctx.h"

extern u8 *data_0215be48;
extern u32 func_02112dec(u32 a, u32 b);
extern void func_02112dc4(u32 a, u32 b, u32 c);

void func_020ff718(void)
{
    s32 i;
    if (*(s32 *)(data_0215be48 + 0xb8) != 7) {
        return;
    }
    for (i = 0; i < 6; i++) {
        u32 v = func_02112dec(2, 14);
        func_02112dc4(2, i + 7, v);
    }
    *(u32 *)(data_0215be48 + 0xa10) = 0;
}
