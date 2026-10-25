#include "ctx.h"

extern int data_0215be38;
extern void func_02087eb0(int a);
extern void func_02087efc();
extern void func_0207df9c();

void func_020ebec4(void)
{
    int iVar4;
    int *piVar3;
    int iVar2;
    int flag;

    iVar4 = 0;
    iVar2 = 0;
    do {
        piVar3 = (int *)(data_0215be38 + 0x30 + iVar2);
        flag = (piVar3[3] & 0x10U) ? 1 : 0;
        if (flag != 0) {
            func_02087eb0((int)piVar3);
            func_02087efc(piVar3);
        }
        if ((int *)piVar3[0x13] != (int *)0x0) {
            func_0207df9c(piVar3[0x13]);
            piVar3[0x13] = 0;
        }
        iVar4 = (s16)(iVar4 + 1);
        iVar2 = iVar2 + 0x54;
    } while (iVar4 < 3);
    data_0215be38 = 0;
}
