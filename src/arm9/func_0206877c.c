#include "ctx.h"

extern u32 data_02150e30;
void func_02068824(u32 a);

void func_0206877c(void)
{
    void (*fp)(u32) = func_02068824;
    fp(*(u16 *)((u8 *)&data_02150e30 + 12));
}
