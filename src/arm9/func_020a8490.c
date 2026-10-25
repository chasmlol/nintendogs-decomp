#include "ctx.h"

extern int data_0215942c;
extern void func_020a85c4(u16 *a, int b);

void func_020a8490(u32 *param_1, s16 *param_2)
{
    u16 *puVar3;
    int iVar2;
    u16 *puVar1;
    int iVar3;

    puVar3 = (u16 *)data_0215942c;
    func_020a85c4(puVar3, 0);
    iVar2 = 0;
    puVar3[2] = 0;
    puVar1 = puVar3 + 0x10;
    puVar3[6] = param_2[1];
    puVar3[9] = param_2[2];
    puVar3[10] = param_2[3];
    puVar3[0xb] = param_2[4];
    puVar3[0xc] = param_2[5];
    do {
        *puVar1 = *puVar1 | 1;
        puVar1[1] = (u16)iVar2;
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 10;
    } while (iVar2 < 3);
    if (param_2[0] >= 0) {
        iVar3 = param_2[0] * 0x14;
        *(u16 *)(data_0215942c + 0x20 + iVar3) = *(u16 *)(data_0215942c + 0x20 + iVar3) | 4;
    }
    if (param_1 != (u32 *)0) {
        *param_1 = 0x434e5454;
        *(u16 *)(param_1 + 1) = 0;
        *(s16 *)((int)param_1 + 6) = -1;
        *(s16 *)(param_1 + 2) = -1;
        return;
    }
}
