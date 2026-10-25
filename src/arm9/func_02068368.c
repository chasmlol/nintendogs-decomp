#include "ctx.h"

void func_02068368(u32 v)
{
    vu32 *r = (vu32 *)0x04001000;
    *r = (*r & ~7u) | v;
}
