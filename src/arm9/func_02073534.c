#include "ctx.h"

extern u8 data_02152768[];
extern void func_0207337c(u8 *a, u32 b);

void func_02073534(u32 p)
{
    s32 i = 0;
    u8 *e = data_02152768;
    do {
        if (((*(s32 *)(e + 0x10c)) << 31) >> 31) {
            func_0207337c(e, p);
        }
        i = i + 1;
        e = e + 348;
    } while (i < 4);
}
