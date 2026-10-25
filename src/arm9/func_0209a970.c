#include "ctx.h"

extern u8 *data_0215906c;
extern void func_020e1294(u8 *p, u32 a, u32 b);
extern void func_020a1a40(u32 a);

u32 func_0209a970(void)
{
    u8 *p;

    p = data_0215906c;
    if (*(s16 *)(p + 0x4e30) != 0) {
        func_020e1294(p, 0x39, 1);
        func_020a1a40(0x7e);
        return 1;
    }
    return 0;
}
