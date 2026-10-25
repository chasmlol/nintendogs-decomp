#include "ctx.h"

extern u32 data_ov022_0215c6a0;
extern void func_01ffe474(u8 *p);

void func_ov022_0215c53c(u8 *p)
{
    void (*fp)(u8 *) = func_01ffe474;
    *(u32 *)(*(u8 **)(p + 0x78) + 8) = data_ov022_0215c6a0;
    fp(p);
}
