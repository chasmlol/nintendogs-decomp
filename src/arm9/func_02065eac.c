#include "ctx.h"

extern u32 data_02150600[];
extern u32 data_02150c00[];

void func_0206cbd8(u32 a, u32 b, u32 c, u32 d);
void func_02065f04(u32 a, u32 b);

void func_02065eac(void)
{
    u32 base = (u32)data_02150600;

    func_0206cbd8(*(u32 *)(base + 0x24), 0x04100010, *(u32 *)(base + 0x1c), 512);
    func_02065f04(*(u32 *)(base + 0x18) >> 8 | 0xb7000000, *(u32 *)(base + 0x18) << 24);
    *(vu32 *)0x040001a4 = data_02150c00[1];
}
