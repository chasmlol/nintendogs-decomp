#include "ctx.h"
u32 func_020781d4(u8 *o)
{
    u8 *p = o + *(u16 *)(o + 12);
    if (*(u16 *)(o + 14) != 1) {
        goto other;
    }
    if (*(u32 *)o == 0x30585442) {
        return (u32)o + *(u32 *)p;
    }
    return 0;
other:
    return (u32)o + *(u32 *)(p + 4);
}
