#include "ctx.h"
extern void func_020aacd8(u8 *p);
void func_020ae374(u8 *p)
{
    if (*(s16 *)(p + 0x7c) == -1) {
        return;
    }
    if (*(s16 *)(p + 0x76) != 0) {
        func_020aacd8(p);
        return;
    }
    *(s16 *)(p + 0x76) = 1;
}
