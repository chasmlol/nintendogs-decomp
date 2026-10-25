#include "ctx.h"

extern void func_0200232c(void);
extern u8 data_0214e6e8;

void func_02002250(u32 a)
{
    void (*fp)(void *, u32) = (void (*)(void *, u32))func_0200232c;
    fp(&data_0214e6e8, a);
}
