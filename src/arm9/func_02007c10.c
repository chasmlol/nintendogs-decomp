#include "ctx.h"

extern void func_02007c28(void);
extern u8 data_0214f138;

void func_02007c10(void)
{
    void (*fp)(void *, u32) = (void (*)(void *, u32))func_02007c28;
    fp(&data_0214f138, 1);
}
