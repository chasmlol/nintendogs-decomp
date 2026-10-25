#include "ctx.h"

extern void func_ov003_02189740(void);

void func_ov003_02189680(void *p)
{
    *(u16 *)((u8 *)p + 0x12e) = 0x6000;
    ((void (*)(u32, u32))func_ov003_02189740)((u32)p, 8);
}
