#include "ctx.h"

extern u8 data_02151804[];
extern void func_02070434(u8 *a, u32 b);

void func_02070b64(u32 p)
{
    s32 i = 0;
    u8 *e = data_02151804;
    do {
        if (*(u8 *)(e + 0x2c) != 0) {
            func_02070434(e, p);
        }
        i = i + 1;
        e = e + 68;
    } while (i < 16);
}
