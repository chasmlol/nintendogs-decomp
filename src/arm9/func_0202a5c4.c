#include "ctx.h"

extern u32 func_02009dfc(u32 *a, s32 *b, u32 *c);

extern u8 data_02152cd8[];

void func_0202a5c4(u8 *param_1)
{
    u32 local[3];
    local[0] = *(u32 *)(data_02152cd8 + 0x54);
    local[1] = *(u32 *)(data_02152cd8 + 0x60);
    local[2] = *(u32 *)(data_02152cd8 + 0x6c);
    func_02009dfc(local, (s32 *)(param_1 + 0x1a4), (u32 *)(param_1 + 0x18c));
}
