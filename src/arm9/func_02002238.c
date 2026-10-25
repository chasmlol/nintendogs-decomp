#include "ctx.h"

extern u8 data_0214e6f0;
extern void func_020022e4(void *p, u32 v);

void func_02002238(u32 a)
{
    void (*fp)(void *, u32) = func_020022e4;
    fp(&data_0214e6f0, a);
}
