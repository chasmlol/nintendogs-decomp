#include "ctx.h"

u32 func_0207dbe0(u8 *param_1, u32 param_2)
{
    u32 *e;
    u32 *h;
    h = (u32 *)(param_1 + 36);
    e = (u32 *)h[2];
    if (param_2 == 0) {
        goto after;
    }
    if (e == NULL) {
        goto after;
    }
loop:
    if (e[0] == param_2) {
        goto after;
    }
    e = (u32 *)e[3];
    if (e != NULL) {
        goto loop;
    }
after:
    if (e == NULL) {
        return 0;
    }
    h[0] = e[1];
    h[1] = e[2];
    h[2] = e[3];
    return 1;
}
