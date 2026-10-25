#include "ctx.h"

extern u8 *data_0215906c;
extern void func_020e1294(u8 *a, int b, int c);
extern void func_020a1a40(int a);

u32 func_0209a9c4(void)
{
    if (*(s16 *)(data_0215906c + 0x4e30) != 0) {
        func_020e1294(data_0215906c, 0x39, 1);
        func_020a1a40(0x7d);
        return 1;
    }
    return 0;
}
