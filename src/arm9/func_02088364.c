#include "ctx.h"

void func_02088364(u32 *p)
{
    p[0] = 0;
    p[1] = p[0];
    *(u16 *)(p + 6) = 0;
    p[2] = 0;
    p[4] = 0xe;
    p[3] = 0;
}
