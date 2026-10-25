#include "ctx.h"

extern void func_02068a84(void *p);
extern u8 data_02150e30[];

void func_020689b0(void)
{
    void (*fp)(void *) = func_02068a84;
    fp(data_02150e30);
}
