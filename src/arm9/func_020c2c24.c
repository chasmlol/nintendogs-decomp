#include "ctx.h"

extern s32 data_021429f0;
extern void func_02067e68(void *a, void *b, void *c);

void func_020c2c24(u8 *param_1, s32 *param_2)
{
    s64 lVar1;
    s32 iVar3;
    s32 *piVar2;
    s32 b0;

    iVar3 = *(s32 *)(param_1 + 0x214);
    func_02067e68(param_1 + 0xbc, param_2, param_1 + 0xbc);
    piVar2 = &data_021429f0;
    b0 = *(s32 *)(param_1 + 0xb0);
    lVar1 = (s64)b0 * (s64)data_021429f0 + 0x800;
    *(s32 *)(param_1 + 0xb0) = b0 - (s32)(lVar1 >> 12);
    lVar1 = (s64)*(s32 *)(param_1 + 0xb8) * (s64)*piVar2 + 0x800;
    *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) - (s32)(lVar1 >> 12);
    *(s32 *)(param_1 + 0xb4) = *(s32 *)(param_1 + 0xb4) + *(s32 *)(iVar3 + 0xc) / 2;
}
