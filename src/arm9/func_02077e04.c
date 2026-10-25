#include "ctx.h"

extern void func_02077ffc(u8 *p, u32 i, u32 v);

void func_02077e04(u8 *p, u32 v)
{
    u32 i = 0;
    if (i < *(u8 *)(p + 0x18)) {
        do {
            func_02077ffc(p, i, v);
            i = i + 1;
        } while (i < *(u8 *)(p + 0x18));
    }
}
