#pragma avoid_byte all
#include "ctx.h"

extern void func_02063908(u32 a, u32 b);

void func_02063318(u8 *param_1, u8 *param_2, u16 param_3)
{
    u32 uVar1;
    u8 *puVar4;
    u32 uVar3;

    *(u16 *)(param_1 + 2) = param_3;
    uVar1 = 0;
    *param_1 = (u8)uVar1;
    for (; ((s32)uVar1 < 0x20 && (*(vu8 *)param_2 != 0));
         param_2 = param_2 + 1, uVar1 = uVar1 + 1) {
        puVar4 = param_1 + uVar1 + 5;
        *puVar4 = (u8)(*param_2 - 0x30);
    }
    *(param_1 + 4) = (u8)uVar1;
    uVar3 = *param_2;
    if (uVar3 == 0) {
        return;
    }
    if (uVar3 < 5) {
        return;
    }
    if (uVar3 > 5) {
        goto LAB_0206343c;
    }
    {
        u8 *pp = param_2 + 1;
        uVar3 = *pp;
        while (uVar3 != 0) {
            if (uVar3 != 0x30) {
                goto LAB_0206343c;
            }
            pp = pp + 1;
            uVar3 = *pp;
        }
        if ((*(param_1 + (uVar1 - 1) + 5) & 1) == 0) {
            return;
        }
    }
LAB_0206343c:
    func_02063908((u32)param_1, param_1[4]);
}
