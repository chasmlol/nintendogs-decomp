#include "ctx.h"

void func_020708f4(u8 **pp, u16 a, u16 b)
{
    if (*pp == NULL) {
        return;
    }
    *(u16 *)(*pp + 0x34) = 2;
    *(u16 *)(*pp + 0x38) = a;
    *(u16 *)(*pp + 0x3a) = b;
}
