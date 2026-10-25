#include "ctx.h"

extern int data_02159468;
extern int func_020bc4f4(int a);
extern void func_020bd824(int a, int b, int c, int d);

int func_020bc478(u16 param_1, int param_2, u16 param_3)
{
    int iVar1;
    int iVar2;

    iVar1 = func_020bc4f4(param_2);
    if ((iVar1 < 0) || (*(s16 *)(*(int *)&data_02159468 + 0x20) <= iVar1)) {
        iVar2 = 0;
    } else {
        iVar2 = *(int *)(*(int *)&data_02159468 + iVar1 * 4 + 4);
    }
    if (iVar2 != 0) {
        *(u16 *)(iVar2 + 0x9c) = param_1;
        *(u16 *)(iVar2 + 0x9e) = 0;
        func_020bd824(iVar2, param_3, -1, -1);
        return iVar1;
    }
    return -1;
}
