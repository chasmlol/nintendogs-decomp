#include "ctx.h"

extern void func_02067728(u32 a, u32 b);
extern s32 func_020677c8(void);

void func_0207bef8(int *param_1, int param_2)
{
    u32 iVar1;
    u32 iVar2;
    s32 uVar3;

    iVar1 = (u32)*(u16 *)(param_2 + 0x2c) << 12;
    iVar2 = (u32)*(u16 *)(param_2 + 0x2e) << 12;
    func_02067728(iVar2, iVar1);
    *param_1 = (s32)*(s16 *)(param_2 + 0x22);
    param_1[5] = (s32)*(s16 *)(param_2 + 0x22);
    uVar3 = func_020677c8();
    param_1[1] = ((s32)*(s16 *)(param_2 + 0x20) * uVar3) >> 12;
    func_02067728(iVar1, iVar2);
    param_1[0xc] = (u32)*(u16 *)(param_2 + 0x2c) * (s32)*(s16 *)(param_2 + 0x20) * 0x10;
    param_1[0xd] = -(u32)*(u16 *)(param_2 + 0x2e) * (*(s16 *)(param_2 + 0x22) - 0x1000) * 0x10;
    uVar3 = func_020677c8();
    param_1[4] = (-(s32)*(s16 *)(param_2 + 0x20) * uVar3) >> 12;
}
