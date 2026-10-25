#include "ctx.h"

u32 func_020383b4(u8 *p);

void func_02037e4c(u8 *param_1)
{
    u32 uVar1;
    u16 uVar2;
    s32 iVar3;

    uVar1 = func_020383b4(param_1);
    switch (uVar1) {
    case 0:
        *(u16 *)(param_1 + 0x148) = 0x11;
        return;
    case 1:
        *(u16 *)(param_1 + 0x148) = 0x12;
        return;
    case 2:
        *(u16 *)(param_1 + 0x148) = 0x13;
        return;
    case 3:
        iVar3 = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
        if (iVar3 < 0xccd) {
            iVar3 = 0;
        } else if (iVar3 <= 0x119a) {
            iVar3 = 1;
        } else {
            iVar3 = 2;
        }
        if (iVar3 == 0) {
            goto c22;
        }
        if (iVar3 == 1) {
            goto c21;
        }
        if (iVar3 != 2) {
            goto c21;
        }
        goto c20;
c22:
        uVar2 = 0x16;
        goto st;
c21:
        uVar2 = 0x15;
        goto st;
c20:
        uVar2 = 0x14;
st:
        *(u16 *)(param_1 + 0x148) = uVar2;
    }
}
