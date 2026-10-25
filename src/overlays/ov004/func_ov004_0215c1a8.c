#include "ctx.h"

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; asm { swpb old, v, [p] } return old; }

extern u8 *data_ov004_02170320;

u8 func_ov004_0215c1a8(void)
{
    u8 *base = data_ov004_02170320 + 0x3000;
    u8 *obj = *(u8 **)(base + 0x6c4);
    u8 *q = obj + 0x2000;
    return SwapByte(0, q + 0x318);
}
