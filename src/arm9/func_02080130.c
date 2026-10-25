#include "ctx.h"

void func_02080130(void)
{
    u32 z = 0;
    asm { mcr p15, 0, z, c7, c10, 4 }
}
