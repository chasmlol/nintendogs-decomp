#include "ctx.h"

extern void func_02068c64(u8 *p);
extern u8 data_02150e3e[];

void func_02068c40(void)
{
    void (*fp)(u8 *) = func_02068c64;
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 & 0xbfffffff;
    fp(data_02150e3e);
}
