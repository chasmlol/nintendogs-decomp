#include "ctx.h"

extern u32 data_0215be48;
extern void func_020fc594(u32, u32, u32);

void func_0210f61c(u8 *param_1)
{
    s32 iVar2 = 0;
    s32 iVar1;
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xac) == 2) {
        iVar1 = *(s32 *)(param_1 + 0x28);
        if (iVar1 == 4) {
            goto setv;
        }
        if (iVar1 == 5) {
            goto setv;
        }
        if (iVar1 != 6) {
            goto call;
        }
setv:
        iVar2 = 1;
call:
        func_020fc594(2, 8, iVar2);
        return;
    }
}
