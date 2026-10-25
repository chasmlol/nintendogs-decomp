#include "ctx.h"

extern char *data_ov004_02170320;

u16 func_ov004_0215c000(void)
{
    char *p = *(char **)(data_ov004_02170320 + 0x36c4);
    return (u16)(s8)p[0x2314];
}
