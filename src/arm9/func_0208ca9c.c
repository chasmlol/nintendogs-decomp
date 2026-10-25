#include "ctx.h"

void func_0208ca9c(u8 *param_1, s16 param_2)
{
    u8 *b = param_1 + 0xc0;
    u16 *e = (u16 *)(b + param_2 * 12);
    if ((s16)e[1] == 2) {
        *e = *e ^ 1;
        e[1] = 0;
    }
}
