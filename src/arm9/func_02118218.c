#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02108380(void);

void func_02118218(void)
{
    u8 *q = data_0215be48 + 0x1000;
    void (*fp)(u32) = (void (*)(u32))func_02108380;
    *(u32 *)(q + 0xd1c) = 17;
    fp(1);
}
