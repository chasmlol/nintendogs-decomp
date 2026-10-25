#include "ctx.h"

extern u8 data_02144980;
extern void func_02065130(void);
extern void func_020d6a60(void);

void func_020d6a3c(u32 a, u32 b)
{
    ((void (*)(u32, u32, u32, u32))func_020d6a60)((u32)&data_02144980, (u32)func_02065130, a, b);
}
