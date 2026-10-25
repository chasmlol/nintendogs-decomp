#include "ctx.h"

extern int func_01ffdb08(int a);
extern u32 func_02028130(int a);

typedef struct { u8 pad[12]; int v[3]; } Sub;
void func_02008c64(int param_1)
{
    int iVar1;
    int *piVar2;

    iVar1 = func_01ffdb08(1);
    if (iVar1 == 0) {
        return;
    }
    piVar2 = ((Sub *)((u8 *)iVar1 + 804))->v;
    if (param_1 == 0) {
        return;
    }
    *(int *)(param_1 + 0x20) = piVar2[0] + *(int *)(*(int *)*(int *)(param_1 + 0x18) + 4);
    *(int *)(param_1 + 0x24) = piVar2[1] + *(int *)(*(int *)*(int *)(param_1 + 0x18) + 8);
    *(int *)(param_1 + 0x28) = piVar2[2] + *(int *)(*(int *)*(int *)(param_1 + 0x18) + 0xc);
    *(int *)(param_1 + 0x54) = (s16)func_02028130(iVar1);
}
