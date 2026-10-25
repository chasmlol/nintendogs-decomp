#include "ctx.h"

s32 func_0206267c(u8 *param_1)
{
    s32 i = -1;
    u32 c;
    do {
        c = *(u32 *)param_1++;
        i = i + 1;
    } while ((c & 0xff) != 0);
    return i;
}
