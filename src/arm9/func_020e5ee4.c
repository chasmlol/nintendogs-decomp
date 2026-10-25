#include "ctx.h"

extern s32 *data_0215be34;
extern void func_020bd858(u8 *p);
extern void func_02081104(s32 a, s32 *b);

void func_020e5ee4(u8 *param_1)
{
    s32 *piVar1;
    s32 *piVar2;
    s32 iVar3;
    s32 iVar4;

    if (*(s16 *)(param_1 + 0x88) == 0) {
        func_020bd858(param_1);
        return;
    }
    iVar4 = *(s32 *)(param_1 + 0x214);
    piVar2 = *(s32 **)(iVar4 + 0x1c);
    if (piVar2 != NULL) {
        piVar1 = data_0215be34;
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
            *(s32 *)(iVar4 + 0x1c) = 0;
            return;
        }
        return;
    }
    return;
}
