#include "ctx.h"

extern void func_0208db10(void);
extern u32 data_0215be40;

void func_020f1d34(void)
{
    void (*fp)(u32) = (void (*)(u32))func_0208db10;
    fp(*(u32 *)(*(u8 **)&data_0215be40 + 0x1c));
}
