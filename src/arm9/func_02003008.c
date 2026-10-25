#include "ctx.h"

extern u8 data_0214e73c;

u32 func_02003008(void)
{
    return *(u32 *)((u8 *)&data_0214e73c + 0x14);
}
