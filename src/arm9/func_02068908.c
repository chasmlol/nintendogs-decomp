#include "ctx.h"

extern u8 data_02150e30;

u16 func_02068908(void)
{
    return *(u16 *)((u8 *)&data_02150e30 + 0xe);
}
