#include "ctx.h"

extern u8 data_021592e4[];
extern void func_02070c18(u32 *p, u32 a);

s32 func_020a1e70(u32 param_1)
{
    u8 *g;
    s16 i;
    u32 mask;
    g = data_021592e4;
    i = 0;
    do {
        mask = (u16)(1u << i);
        if (*(u32 *)(g + i * 4 + 0x28) != 0 && (*(u16 *)(g + 0x1a) & mask) != 0) {
            func_02070c18((u32 *)(g + 0x28 + i * 4), param_1);
            *(u16 *)(g + 0x1a) = *(u16 *)(g + 0x1a) & ~mask;
            *(u16 *)(g + 0x18) = *(u16 *)(g + 0x18) & ~mask;
            return i;
        }
        i = (s16)(i + 1);
    } while (i < 4);
    return -1;
}
