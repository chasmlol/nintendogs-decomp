#include "ctx.h"

extern u8 data_02150e36[];
extern void func_02068a84(void *p);

void func_020689c4(void)
{
    void (*fp)(void *) = func_02068a84;
    fp(data_02150e36);
}
