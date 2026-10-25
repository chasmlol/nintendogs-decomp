#include "ctx.h"

extern u32 data_02159424;
extern void func_0210b780(u32, u32, u32, u32, u32);

void func_020eceec(u8 *param_1)
{
    u8 *iVar1;
    if (*(s16 *)(param_1 + 0x90) == 3) {
        iVar1 = *(u8 **)(param_1 + 0x214);
        func_0210b780(*(u32 *)(iVar1 + 0x68), *(u32 *)(iVar1 + 0x64),
                      *(u32 *)(*(u8 **)&data_02159424 + 0x10), (u32)(iVar1 + 0xa4), 0);
        return;
    }
}
