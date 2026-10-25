#include "ctx.h"

extern u8 *data_0215bf9c;

void func_0210a818(void)
{
    s32 *piVar2 = (s32 *)data_0215bf9c;
    s32 iVar1;
    if (piVar2[0] == 0) {
        return;
    }
    iVar1 = piVar2[2];
    if (iVar1 != 0) {
        if (iVar1 != 5) {
            if (iVar1 != 6) {
                piVar2[2] = 5;
            }
            return;
        }
        return;
    }
}
