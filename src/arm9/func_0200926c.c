#include "ctx.h"

extern void func_020092f4(int a, int b);

void func_0200926c(int param_1, int param_2, int param_3)
{
    int iVar2;
    int iVar1;

    iVar2 = 0;
    iVar1 = param_1;
    do {
        if (((*(int *)(param_1 + iVar2 * 4 + 0x8fc) != 0) &&
             (param_2 == *(s16 *)(param_1 + iVar2 * 2 + 0x81c))) &&
            (param_3 == *(s8 *)(iVar1 + 0x838))) {
            goto LAB_020092cc;
        }
        iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
        iVar1 = iVar1 + 1;
    } while (iVar2 < 7);
    iVar2 = -1;
LAB_020092cc:
    if (iVar2 != -1) {
        func_020092f4(param_1, iVar2);
    }
}
