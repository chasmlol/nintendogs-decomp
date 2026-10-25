#include "ctx.h"

extern s32 func_02027f78(int a, int b);
extern s32 func_020273f0(int a);
extern void func_02027f40(int a, int b, int c);

void func_ov005_02167b50(int param_1, int param_2)
{
    int iVar5;
    int iVar2;
    int iVar3;
    int bVar1;
    s16 sVar4;

    iVar5 = *(int *)(param_1 + 0x214);
    iVar2 = func_02027f78(param_2, 7);
    if ((*(s16 *)(param_1 + 0x94) == 0x3e) && (iVar3 = func_020273f0(param_2), iVar3 == 0)) {
        bVar1 = 1;
    }
    else if ((*(s16 *)(param_1 + 0x94) == 0x3f) && (iVar3 = func_020273f0(param_2), iVar3 == 1)) {
        bVar1 = 1;
    }
    else {
        bVar1 = 0;
    }
    if ((bVar1) && (iVar2 >= 10000)) {
        return;
    }
    if ((!bVar1) && (iVar2 >= 9000)) {
        return;
    }
    *(s16 *)(iVar5 + 0x18) = *(s16 *)(iVar5 + 0x18) + 1;
    if (bVar1) {
        sVar4 = 2;
    }
    else {
        sVar4 = 4;
    }
    if (*(s16 *)(iVar5 + 0x18) >= sVar4) {
        iVar2 = (s16)(iVar2 + 1);
        *(u16 *)((u32)iVar5 + 0x18) = 0;
    }
    func_02027f40(param_2, 7, iVar2);
}
