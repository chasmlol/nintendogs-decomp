#include "ctx.h"

extern int data_02159198;
extern void func_02070ac8(int *a, int b, int c);

u32 func_0209f848(int param_1, int param_2)
{
    int *piVar2;
    int iVar3;
    u16 uVar1;
    u16 uVar4;

    piVar2 = (int *)&data_02159198;
    iVar3 = *piVar2;
    *(s16 *)((int)piVar2 + 0xe) = (s16)param_1;
    if (iVar3 != 0) {
        if (piVar2[7] != 0) {
            uVar4 = *(u16 *)((int)piVar2 + 0x1a);
            uVar1 = *(u16 *)(piVar2 + 6);
            *(u16 *)(piVar2 + 6) = 0;
            piVar2[7] = 0;
            param_2 = (int)uVar4 - (int)uVar1;
        }
        iVar3 = *(s16 *)((int)piVar2 + 12) * param_1;
        func_02070ac8(piVar2, iVar3 / 100, param_2);
        return 1;
    }
    return 0;
}
