#include "ctx.h"

extern u8 data_02150e3a[];
extern void func_02068c64(void *p);

void func_02068bf4(void)
{
    void (*fp)(void *) = func_02068c64;
    fp(data_02150e3a);
}
