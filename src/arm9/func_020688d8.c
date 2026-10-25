#include "ctx.h"

extern u32 data_02150e30;

u16 func_020688d8(void)
{
    return *(u16 *)((u8 *)&data_02150e30 + 10);
}
