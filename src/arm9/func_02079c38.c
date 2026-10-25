#include "ctx.h"

extern u32 data_0213e4fc;
extern void func_0206c7bc(int a, void *b, u32 c);

void func_02079c38(u8 *param_1, u8 *param_2, u8 *param_3)
{
    vu16 local;
    u32 i;
    u16 *src;

    *(u8 **)(param_1 + 8) = param_2;
    *(u32 *)(param_1 + 0xc) = data_0213e4fc;
    param_1[0x19] = param_3[0x17];
    local = 0;
    func_0206c7bc(local, param_1 + 0x1a, (u32)param_1[0x19] << 1);
    src = (u16 *)(param_2 + 0x14);
    for (i = 0; i < *(u16 *)(param_2 + 6); i++) {
        ((u16 *)(param_1 + 0x1a))[i] = (*(u32 *)(param_2 + src[i]) >> 24) | 0x100;
    }
}
