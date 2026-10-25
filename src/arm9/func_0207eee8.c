#include "ctx.h"

extern void func_02080b78(void);

void func_0207eee8(void)
{
    void (*fp)(u32) = (void (*)(u32))func_02080b78;
    fp(0x1000);
}
