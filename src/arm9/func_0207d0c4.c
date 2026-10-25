#include "ctx.h"

extern void func_0207d1b4(void);
extern u8 data_02155c74;

void func_0207d0c4(u32 a)
{
    void (*fp)(void *, u32) = (void (*)(void *, u32))func_0207d1b4;
    fp(&data_02155c74, a);
}
