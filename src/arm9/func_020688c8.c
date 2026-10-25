#include "ctx.h"

extern u8 data_02150e30;

u16 func_020688c8(void)
{
    return *(u16 *)((u8 *)&data_02150e30 + 0xc);
}
