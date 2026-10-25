#include "ctx.h"

extern void func_020a1a40(void);

void func_021043ec(void)
{
    void (*fp)(u32) = (void (*)(u32))func_020a1a40;
    fp(79);
}
