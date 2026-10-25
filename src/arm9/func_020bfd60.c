#include "ctx.h"

extern u8 *data_02159444;

void func_020bfd60(u32 param_1, s32 *param_2, s32 *param_3)
{
    s32 iVar2 = *(s32 *)(data_02159444 + 0x94) << 12;
    s32 iVar1 = *(s32 *)(data_02159444 + 0x98) << 12;
    if (iVar2 > 0x50000) {
        iVar2 = 0x50000;
    }
    if (iVar2 < -0x50000) {
        iVar2 = -0x50000;
    }
    if (iVar1 > 0x50000) {
        iVar1 = 0x50000;
    }
    if (iVar1 < -0x50000) {
        iVar1 = -0x50000;
    }
    *param_2 = iVar2;
    *param_3 = iVar1;
}
