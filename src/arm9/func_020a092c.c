#include "ctx.h"

extern u16 data_021592b4;
extern void func_020a0838(u32 a, u32 b);

void func_020a092c(u32 x)
{
    void (*fp)(u32, u32) = func_020a0838;
    fp(data_021592b4, x);
}
