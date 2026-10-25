#include "ctx.h"

extern u32 data_0215be34;
extern void func_02081104(u32, u32);

void func_ov005_02166940(u8 *param_1)
{
    u8 *iVar4;
    u32 *piVar1;
    u32 piVar2;
    u32 iVar3;
    iVar4 = *(u8 **)(param_1 + 0x214);
    piVar2 = *(u32 *)(iVar4 + 0x20);
    if (piVar2 == 0) {
        return;
    }
    piVar1 = (u32 *)data_0215be34;
    if (piVar1 != NULL) {
        iVar3 = *piVar1;
    } else {
        iVar3 = 0;
    }
    if (iVar3 != 0) {
        if (piVar1 != NULL) {
            iVar3 = *piVar1;
        } else {
            iVar3 = 0;
        }
        func_02081104(iVar3, piVar2);
        *(u32 *)(iVar4 + 0x20) = 0;
        return;
    }
}
