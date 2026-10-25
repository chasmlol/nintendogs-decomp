#include "ctx.h"

void func_020805fc(u32 v)
{
    asm { mcr p15, 0, v, c6, c2, 0 }
}
