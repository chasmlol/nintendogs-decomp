#include "ctx.h"

extern void func_020ea29c(void);

void func_020ea26c(u32 a, u32 b)
{
    void (*fp)(u32, u32, u32) = (void (*)(u32, u32, u32))func_020ea29c;
    fp(a, b, 109);
}
