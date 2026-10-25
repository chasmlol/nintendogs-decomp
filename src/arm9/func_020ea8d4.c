#include "ctx.h"

extern u8 *data_02159424;
void func_0210b780(u32 a, u32 b, u32 c, u8 *d, u32 e);

void func_020ea8d4(u8 *param_1)
{
    u8 *iVar1;
    if (*(s16 *)(param_1 + 0x90) == 3) {
        iVar1 = *(u8 **)(param_1 + 0x214);
        func_0210b780(*(u32 *)(iVar1 + 0x14), *(u32 *)(iVar1 + 0x10),
                      *(u32 *)(data_02159424 + 0x10), iVar1 + 0x38, 0);
    }
}
