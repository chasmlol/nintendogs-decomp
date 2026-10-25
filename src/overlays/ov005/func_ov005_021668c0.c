#include "ctx.h"

extern u8 *data_02159444;
s32 func_02044ca0(s32 a);

u32 func_ov005_021668c0(u8 *param_1, u32 *param_2, u32 *param_3)
{
    u32 *iVar2 = *(u32 **)(param_1 + 0x214);
    s32 iVar1 = func_02044ca0(*(s16 *)(param_1 + 156));
    if (iVar1 != 0 && (*(u16 *)(data_02159444 + 0x84) & 1) != 0) {
        param_2[0] = iVar2[1];
        param_2[1] = iVar2[2];
        param_2[2] = iVar2[3];
        param_3[0] = iVar2[4];
        param_3[1] = iVar2[5];
        param_3[2] = iVar2[6];
        return 1;
    }
    return 0;
}
