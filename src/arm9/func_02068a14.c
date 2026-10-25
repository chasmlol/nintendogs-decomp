#include "ctx.h"

extern void func_02068a84(u8 *p);
extern u8 data_02150e40[];

void func_02068a14(void)
{
    void (*fp)(u8 *) = func_02068a84;
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 & 0x7fffffff;
    fp(data_02150e40);
}
