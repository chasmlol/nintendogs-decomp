#include "ctx.h"

extern void func_02067728(s32 a, s32 b);
extern u32 func_020677c8(void);

void func_0207ad20(s32 *param_1, u8 *param_2)
{
    s32 iVar1;
    s32 iVar2;
    u32 uVar3;

    iVar1 = (s32)(*(u16 *)(param_2 + 0x2c) << 12);
    iVar2 = (s32)(*(u16 *)(param_2 + 0x2e) << 12);
    func_02067728(iVar2, iVar1);
    param_1[0] = *(s16 *)(param_2 + 0x22);
    param_1[5] = *(s16 *)(param_2 + 0x22);
    uVar3 = func_020677c8();
    param_1[1] = (s32)(-(s32)*(s16 *)(param_2 + 0x20) * uVar3) >> 12;
    func_02067728(iVar1, iVar2);
    param_1[12] = (*(u16 *)(param_2 + 0x2c) * ((s32)(0 - (u32)(*(s16 *)(param_2 + 0x20) + *(s16 *)(param_2 + 0x22))) + 0x1000)) * 8
                  - (*(s32 *)(param_2 + 0x24) * *(u16 *)(param_2 + 0x2c)) * 16;
    param_1[13] = (*(u16 *)(param_2 + 0x2e) * ((*(s16 *)(param_2 + 0x20) - *(s16 *)(param_2 + 0x22)) + 0x1000)) * 8
                  + (*(s32 *)(param_2 + 0x28) * *(u16 *)(param_2 + 0x2e)) * 16;
    uVar3 = func_020677c8();
    param_1[4] = ((s32)(*(s16 *)(param_2 + 0x20) * uVar3)) >> 12;
}
