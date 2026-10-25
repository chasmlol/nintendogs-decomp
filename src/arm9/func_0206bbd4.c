#include "ctx.h"

extern s32 func_02068bf4(void);
extern u32 data_02150e74;
extern u16 data_0212aa68[];
extern u32 data_02150e70;

void func_0206bbd4(void)
{
    s32 iVar3;
    u16 uVar1;
    iVar3 = func_02068bf4();
    uVar1 = data_0212aa68[iVar3 >> 4];
    data_02150e74 = iVar3;
    data_02150e70 = (u32)uVar1 << 12;
}
