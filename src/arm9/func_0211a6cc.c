#include "ctx.h"
extern u16 func_02027c58(u32 a);
void func_0211a6cc(u8 *p)
{
    u32 v = func_02027c58(*(u32 *)(p + 4));
    u16 r;
    if (v < 300) {
        r = 0;
    } else if (v < 1000) {
        r = 1;
    } else if (v < 2000) {
        r = 2;
    } else if (v < 5000) {
        r = 3;
    } else if (v < 10000) {
        r = 4;
    } else {
        r = 5;
    }
    *(u16 *)(p + 2) = r;
}
