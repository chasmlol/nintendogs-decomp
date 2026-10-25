#include "ctx.h"

extern void func_ov003_021894ec(void);

void func_ov003_02186800(void *p)
{
    u16 h;
    h = *(u16 *)((u8 *)p + 252);
    ((void (*)(u32, u32, u32, u32))func_ov003_021894ec)((u32)p, 5, 0x57, h > 40);
}
