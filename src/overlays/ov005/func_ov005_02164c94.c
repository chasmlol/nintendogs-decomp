#include "ctx.h"

extern void func_0208f704(void);
extern u32 data_ov005_02167f04;

void func_ov005_02164c94(u32 a)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_0208f704;
    fp(a, data_ov005_02167f04);
}
