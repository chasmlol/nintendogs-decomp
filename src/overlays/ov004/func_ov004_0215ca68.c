#include "ctx.h"

extern u8 *data_ov004_02170320;

int func_ov004_0215ca68(void)
{
    u8 *p = data_ov004_02170320;
    if (p[0x33cd] != 0) {
        return *(int *)(p + 0x36c8);
    }
    return -1;
}
