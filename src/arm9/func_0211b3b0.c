#include "ctx.h"
extern u16 *func_020955c0(int a);
int func_0211b3b0(int param_1)
{
    int iVar7 = 0;
    int iVar6 = 0;
    int iVar5 = -1;
    u32 uVar3 = 0xffff;
    int iVar2;
    int tmp;
    u16 *puVar4;
    do {
        iVar2 = (iVar5 + 1) * 0x10000;
        iVar5 = iVar2 >> 16;
        goto CMP;
LAB:
        iVar2 = (iVar5 + 1) * 0x10000;
        iVar5 = iVar2 >> 16;
CMP:
        if (iVar5 < 3) {
            puVar4 = func_020955c0(iVar5);
            if (*puVar4 == uVar3) goto LAB;
        }
        tmp = iVar6;
        iVar6 = (iVar6 + 1) * 0x10000 >> 16;
        if (tmp < param_1) {
            continue;
        }
        if (iVar5 >= 3) {
            iVar5 = -1;
        }
        if (iVar5 >= 0) {
            iVar7 = (int)func_020955c0(iVar5);
        }
        return iVar7;
    } while (1);
}
