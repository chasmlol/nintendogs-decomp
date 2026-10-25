#include "ctx.h"

void func_020735d4(u8 *p)
{
    s32 a = *(s32 *)(p + 8);
    s32 b = *(s32 *)(p + 0xc);
    if (a < b) {
        *(s32 *)(p + 8) = a + 1;
    }
}
