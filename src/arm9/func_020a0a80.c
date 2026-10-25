#include "ctx.h"

extern u8 data_021592e4;

void func_020a0a80(void)
{
    *(u32 *)(&data_021592e4 + 0x24) = 0;
    *(u32 *)(&data_021592e4 + 0x20) = 0;
}
