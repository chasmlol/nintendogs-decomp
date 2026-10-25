#include "ctx.h"

void func_020995b8(void *p)
{
    *(u16 *)((u8 *)p + 2) = *(u16 *)((u8 *)p + 2) | 8;
    *(u16 *)((u8 *)p + 4) = *(u16 *)((u8 *)p + 4) | 1;
}
