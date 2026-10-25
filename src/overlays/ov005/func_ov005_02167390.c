#include "ctx.h"

extern u32 data_0215be34;
void func_020bd858(u8 *p);
void func_02081104(u32 a, u32 b);

void func_ov005_02167390(u8 *param_1)
{
    u32 *piVar1;
    u32 *iVar5;
    u32 *piVar3;
    u32 iVar4;
    u32 iVar2;
    s16 i;

    iVar5 = *(u32 **)(param_1 + 0x214);
    func_020bd858(param_1);
    piVar3 = *(u32 **)&data_0215be34;
    iVar2 = piVar3 ? *piVar3 : 0;
    if (iVar2 != 0) {
        i = 0;
        do {
            piVar3 = *(u32 **)&data_0215be34;
            iVar4 = piVar3 ? *piVar3 : 0;
            func_02081104(iVar4, *(u32 *)((u8 *)iVar5 + (i << 2) + 8));
            *(u32 *)((u8 *)iVar5 + ((u32)i << 2) + 8) = 0;
            i = (s16)(i + 1);
        } while (i < 4);
    }
}
