#include "ctx.h"

void func_02073758(void *p)
{
    *(u32 *)((u8 *)p + 0x14) = *(u32 *)((u8 *)p + 0x14) + (u32)p;
}
