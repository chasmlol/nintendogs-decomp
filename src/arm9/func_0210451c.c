#include "ctx.h"

extern void func_020a1a40(void);

void func_0210451c(void)
{
    void (*fp)(u32) = (void (*)(u32))func_020a1a40;
    fp(0);
}
