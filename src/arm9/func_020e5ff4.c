#include "ctx.h"

extern void func_020bd500(void);
extern void func_020e6010(void);
extern void func_020e608c(void);

void func_020e5ff4(void)
{
    void (*fp)(u32, u32) = (void (*)(u32, u32))func_020bd500;
    fp((u32)func_020e6010, (u32)func_020e608c);
}
