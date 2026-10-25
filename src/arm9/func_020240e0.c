#include "ctx.h"

void func_0202406c(u8 *p, s32 v);

void func_020240e0(u8 *param_1, s32 param_2)
{
    s32 iVar1;
    if (param_2 < 0 || param_2 >= 20) {
        iVar1 = 0;
    } else {
        iVar1 = *(s32 *)(param_1 + 0x9e8);
        iVar1 = iVar1 + 0x90;
        iVar1 = (s16)param_2 * 60 + iVar1;
    }
    func_0202406c(param_1, iVar1);
}
