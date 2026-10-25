#include "ctx.h"

extern s16 data_02136a14[];

void func_02037f20(u8 *param_1, s32 param_2)
{
    s16 sVar3;
    s32 iVar2;
    s32 iVar1;
    s32 i;
    iVar2 = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 0xc);
    if (iVar2 < 3277) {
        sVar3 = 0;
    } else if (iVar2 <= 4506) {
        sVar3 = 1;
    } else {
        sVar3 = 2;
    }
    iVar2 = (s32)data_02136a14 + sVar3 * 12;
    i = 5;
    do {
        iVar1 = *(s16 *)((u8 *)iVar2 + i * 2 + 0x6c);
        if (iVar1 >= 0 && iVar1 <= param_2) {
            break;
        }
        i = (s16)(i - 1);
    } while (i > 0);
    *(s16 *)(param_1 + 0x148) = (s16)(i + 0x11);
}
