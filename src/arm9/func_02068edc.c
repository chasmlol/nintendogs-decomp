#include "ctx.h"

extern u16 data_02150e30;

extern void func_020699dc(u16 v);

void func_02068edc(u16 v)
{
    void (*fp)(u16);
    data_02150e30 |= v;
    fp = (void (*)(u16))func_020699dc;
    fp(v);
}
