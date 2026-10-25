#include "ctx.h"

void func_0207091c(u8 **pp, u16 v)
{
    if (*pp != NULL) {
        *(u16 *)(*pp + 0x34) = 1;
        *(u16 *)(*pp + 0x38) = v;
    }
}
