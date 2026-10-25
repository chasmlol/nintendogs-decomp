#include "ctx.h"

extern u32 *data_0215be34;
void func_020bd858(u8 *a);
void func_02081104(u32 a, u32 *b);

void func_020ea20c(u8 *param_1)
{
    u32 *iVar4;
    u32 *piVar2;
    u32 *piVar1;
    u32 iVar3;
    iVar4 = *(u32 **)(param_1 + 0x214);
    func_020bd858(param_1);
    piVar2 = (u32 *)iVar4[1];
    if (piVar2 == 0) {
        return;
    }
    piVar1 = data_0215be34;
    iVar3 = (piVar1 != 0) ? *piVar1 : 0;
    if (iVar3 != 0) {
        iVar3 = (piVar1 != 0) ? *piVar1 : 0;
        func_02081104(iVar3, piVar2);
        iVar4[1] = 0;
        return;
    }
}
