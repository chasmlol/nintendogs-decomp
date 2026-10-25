#include "ctx.h"

void func_02063cdc(void)
{
    u16 *p = (u16 *)0x027fff96;
    if (*p & 1) {
        *p &= ~1;
    }
}
