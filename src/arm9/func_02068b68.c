#include "ctx.h"

extern void func_02068c64(void);
extern u8 data_02150e48;

void func_02068b68(void)
{
    u32 *reg = (u32 *)0x04001000;
    void (*fp)(void *) = (void (*)(void *))func_02068c64;
    *reg = *reg & 0x7fffffff;
    fp(&data_02150e48);
}
