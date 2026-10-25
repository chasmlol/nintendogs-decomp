#include "ctx.h"
extern void func_020b0d18(u8 *p);
void func_020b0cc4(u8 *p)
{
    u16 st = *(u16 *)(p + 4);
    if (st == 0) {
        goto init;
    }
    if (st == 1024) {
        goto run;
    }
    return;
init:
    *(u16 *)(p + 4) = 1024;
    *(u16 *)(p + 6) = 0;
    return;
run:
    func_020b0d18(p);
}
