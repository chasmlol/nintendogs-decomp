#include "ctx.h"

u32 func_02067760(void)
{
    while (*(vu16 *)0x040002b0 & 0x8000) {
    }
    return (*(vu32 *)0x040002b4 + 0x200) >> 10;
}
