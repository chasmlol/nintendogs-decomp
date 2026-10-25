#include "ctx.h"

extern u32 data_02144a44;
extern u8 data_0215aecc[];

u32 func_020dde0c(u32 param_1)
{
    u32 r = 0xffffffff;
    u32 *p;
    u32 bit;
    p = (u32 *)(data_0215aecc + param_1 * 136);
    if (data_02144a44 == 0) {
        return r;
    }
    bit = 1u << param_1;
    if ((data_02144a44 & bit) == 0) {
        goto xorout;
    }
    if (p[0x20] != 0) {
        r = p[0];
    } else {
        r = p[0x21];
    }
    p[0x20] = 0;
    p[0x21] = 0xffffffff;
xorout:
    data_02144a44 = data_02144a44 ^ bit;
    return r;
}
