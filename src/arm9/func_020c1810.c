#include "ctx.h"
extern void func_020c184c(u8 *p);
void func_020c1810(u8 *p)
{
    s16 st = *(s16 *)(p + 0x90);
    if (st == 0) {
        return;
    }
    if (st == 1) {
        func_020c184c(p);
        return;
    }
}
