#include "ctx.h"

extern void func_020d1cd8(u8 *p);

typedef struct { u32 w[3]; } T3;

void func_020cf9d8(u8 *p)
{
    if (*(s32 *)(p + 0x6c) == 1) {
        return;
    }
    *(u32 *)(p + 0x30) = 2;
    *(s16 *)(p + 0x3c) = -1;
    *(u32 *)(p + 0x44) = 0;
    *(u16 *)(p + 0x50) = 60;
    *(T3 *)(p + 0x54) = *(T3 *)(p + 0xc);
    func_020d1cd8(p);
}
