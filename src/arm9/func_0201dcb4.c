#include "ctx.h"

extern int data_02159444;
extern int data_02159468;
extern void func_02026bac(int a);
extern void func_02025a84(int a);

void func_0201dcb4(int param_1)
{
    int iVar1;
    u32 v;

    v = 0xcd;
    ((u16 *)(param_1 + 0x100))[41] = v;
    func_02026bac(param_1);
    func_02025a84(param_1);
    iVar1 = (int)*(s16 *)(data_02159444 + 0x7a);
    if ((iVar1 < 0) || (*(s16 *)(data_02159468 + 0x20) <= iVar1)) {
        iVar1 = 0;
    } else {
        iVar1 = *(int *)(data_02159468 + iVar1 * 4 + 4);
    }
    if (iVar1 != 0) {
        if ((int)*(s8 *)(param_1 + 0x88) == (int)*(s16 *)(iVar1 + 0x98)) {
            ((u16 *)(param_1 + 0x100))[43] = 1;
        }
    }
}
