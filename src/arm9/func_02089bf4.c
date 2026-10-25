#include "ctx.h"

extern u8 data_02156168[];
extern void func_0207ff58(u32 a);

void func_02089bf4(void)
{
    ((void (*)(u32))func_0207ff58)((u32)data_02156168);
}
