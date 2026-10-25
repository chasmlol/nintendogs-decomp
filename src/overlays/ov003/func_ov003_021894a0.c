#include "ctx.h"

extern void func_ov003_021894ec(void);

void func_ov003_021894a0(void *p)
{
    u16 h;
    h = *(u16 *)((u8 *)p + 252);
    ((void (*)(u32, u32, u32, u32))func_ov003_021894ec)((u32)p, 1, 0x1f, h > 60);
}
