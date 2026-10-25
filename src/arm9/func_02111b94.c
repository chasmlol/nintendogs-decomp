#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fc594(u32 a, u32 b, u32 c);

void func_02111b94(u16 param_1, u16 param_2, u16 param_3)
{
    u8 *p = data_0215be48 + 0xc840;
    *(u32 *)(p + 4) = 3;
    *(u16 *)(p + 8) = param_1;
    *(u16 *)(p + 10) = param_2;
    *(u16 *)(p + 12) = param_3;
    func_020fc594(2, 8, 1);
}
