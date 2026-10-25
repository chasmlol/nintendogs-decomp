#include "ctx.h"

extern u8 *data_027c0360;
extern s16 data_02126868[];
extern void func_01ff8000(u32 *out, s32 a, s32 b);
extern void func_01ff810c(u32 *out, u32 *x, u32 *y);

void func_020e70d8(u32 unused, u32 *p2)
{
    u32 buf[12];
    u8 *g = data_027c0360;
    u16 c = *(u16 *)(*(u8 **)(g + 0x214) + 0xc);
    s32 i = c >> 4;
    func_01ff8000(buf, data_02126868[i * 2], data_02126868[i * 2 + 1]);
    func_01ff810c(buf, p2, p2);
}
