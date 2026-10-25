#include "ctx.h"

extern u8 data_02150e3a;
extern void func_02068a84(void *p);

void func_020689ec(void)
{
    void (*fp)(void *) = func_02068a84;
    fp(&data_02150e3a);
}
