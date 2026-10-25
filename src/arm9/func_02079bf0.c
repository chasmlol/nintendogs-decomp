#include "ctx.h"

void func_020795d8(void *a, u32 b, s32 c, u32 *d);

void func_02079bf0(u32 *param_1, u32 *param_2, u32 param_3)
{
    s32 uVar2;
    s32 iVar1;
    u8 *q = (u8 *)param_2[2];

    uVar2 = (s32)param_2[0];
    iVar1 = (s32)((u32)*(u16 *)(q + 4) * 0x1000);
    if (uVar2 >= iVar1) {
        uVar2 = iVar1 - 1;
    } else if (uVar2 < 0) {
        uVar2 = 0;
    }
    func_020795d8(q, param_3, uVar2, param_1);
}
