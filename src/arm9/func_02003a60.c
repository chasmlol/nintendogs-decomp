#include "ctx.h"

extern u8 data_0214e858;

BOOL func_02003a60(void)
{
    return *(u16 *)(&data_0214e858 + 4) == 0;
}
