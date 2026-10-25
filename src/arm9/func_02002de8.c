#include "ctx.h"

extern u32 data_0214e6f4;

void func_02002de8(void)
{
    u32 v;
    vu32 *p = (vu32 *)&data_0214e6f4;
    do {
        v = *p;
    } while (v != 0);
}
