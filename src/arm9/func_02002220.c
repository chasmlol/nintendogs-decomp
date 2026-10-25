#include "ctx.h"

extern u8 data_0214e6e8[];
extern void func_02002298(void *p, u32 v);

void func_02002220(u32 x)
{
    void (*fp)(void *, u32) = func_02002298;
    fp(data_0214e6e8, x);
}
