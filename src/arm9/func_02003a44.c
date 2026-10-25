#include "ctx.h"

extern u8 data_0214e77c[];

BOOL func_02003a44(void)
{
    return *(u16 *)(data_0214e77c + 4) == 0;
}
