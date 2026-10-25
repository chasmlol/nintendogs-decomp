#include "ctx.h"

extern u8 data_02150e46[];
extern void func_02068c64(void *p);

void func_02068b90(void)
{
    void (*fp)(void *) = func_02068c64;
    u32 *io = (u32 *)0x04001000;
    *io = *io & 0xbfffffff;
    fp(data_02150e46);
}
