#include "ctx.h"

u32 func_0207eb98(u32 param_1)
{
    vu16 *ime = (vu16 *)0x04000208;
    vu32 *ie = (vu32 *)0x04000214;
    u16 saved;
    u32 old;
    saved = *ime;
    *ime = 0;
    old = *ie;
    *ie = param_1;
    (void)*ime;
    *ime = saved;
    return old;
}
