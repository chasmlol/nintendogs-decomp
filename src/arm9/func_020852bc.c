#include "ctx.h"
void func_020852bc(u8 *o, u8 *s, s32 x)
{
    u8 *t = *(u8 **)(s + 0x10);
    s32 i;

    for (i = 0; i < t[8]; i++) {
        if (x < (i + 1) * t[9]) {
            o[0x42] = t[i];
            return;
        }
    }
}
