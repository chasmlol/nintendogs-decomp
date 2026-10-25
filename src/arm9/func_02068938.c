#include "ctx.h"

extern u8 data_02150e48;
extern void func_02068a84(void *p);

void func_02068938(void)
{
    u32 *reg = (u32 *)0x04001000;
    void (*fp)(void *) = func_02068a84;
    *reg = *reg & 0x7fffffff;
    fp(&data_02150e48);
}
