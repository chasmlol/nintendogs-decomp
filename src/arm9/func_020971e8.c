#include "ctx.h"

extern u8 *data_02159034;
u8 func_02097240(u8 *p);

u8 *func_020971e8(void)
{
    u8 *p;
    u32 v;
    v = *(u32 *)(data_02159034 + 0x141c);
    p = (u8 *)v + 4;
    if (*(u32 *)((u8 *)v + 4) != 0) {
        return p;
    }
    if (*(u32 *)(p + 4) == 0) {
        return (u8 *)(u32)func_02097240(p);
    }
    return p;
}
