#include "ctx.h"

typedef struct { u32 a, b; } Pair;

extern u32 data_02156054;

void func_02088d90(Pair *dst, u8 *src)
{
    Pair t;
    t.a = (u32)&data_02156054;
    t.b = *(u32 *)(src + 0x18);
    *dst = t;
}
