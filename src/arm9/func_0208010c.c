#include "ctx.h"

void func_0208010c(u32 addr, s32 size)
{
    asm { mov r12, #0 }
    size = size + addr;
    addr = addr & 0xffffffe0;
    do {
        asm { mcr p15, 0, r12, c7, c10, 4 }
        asm { mcr p15, 0, addr, c7, c14, 1 }
        addr = addr + 0x20;
    } while ((s32)addr < size);
}
