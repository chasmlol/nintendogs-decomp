#include "ctx.h"
extern u8 *func_02077c44(u8 *p, int n);
extern int func_02077ca4(u8 *p);

int func_02077bd8(u8 *param_1, u8 *param_2, u32 param_3)
{
    u8 *pbVar1;
    int iVar2;
    int iVar3 = 0;
    for (pbVar1 = func_02077c44(param_2, 6); pbVar1 != 0;
         pbVar1 = func_02077c44(pbVar1 + iVar2, 6)) {
        if (pbVar1[2] == param_3 && pbVar1[2] != pbVar1[1]) {
            param_1[iVar3] = pbVar1[1];
            iVar3 = iVar3 + 1;
        }
        iVar2 = func_02077ca4(pbVar1);
    }
    return iVar3;
}
