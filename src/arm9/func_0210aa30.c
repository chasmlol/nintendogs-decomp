#include "ctx.h"

extern int *data_02159424;
extern int *data_0215be48;
extern void func_0210454c(int a);
extern void func_0210453c(void);
extern void func_02112798(int a, int b, int c);
extern void func_0210a854(int a);
extern void func_0210a818(void);

void func_0210aa30(int *param_1)
{
    int iVar1;
    int iVar2;

    iVar1 = *param_1;
    iVar2 = *(s16 *)(*(int *)((u8 *)data_02159424 + 4) + 8) + 0x3b;
    switch ((u16)(iVar2 / 60)) {
    case 3:
        *param_1 = 1;
        if (*param_1 != iVar1) {
            func_0210454c(3);
        }
        break;
    case 2:
        *param_1 = 2;
        if (*param_1 != iVar1) {
            func_0210454c(2);
        }
        break;
    case 1:
        *param_1 = 3;
        if (*param_1 != iVar1) {
            func_0210454c(1);
        }
        break;
    case 0:
        if (param_1[1] >= 0x1e) {
            goto set5;
        }
        if (*(s32 *)((u8 *)data_0215be48 + 0xa8) != 7) {
            goto inc;
        }
    set5:
        *param_1 = 5;
        break;
    inc:
        param_1[1] = param_1[1] + 1;
        *param_1 = 4;
        if (*param_1 != iVar1) {
            func_0210453c();
        }
        break;
    }
    func_02112798(0, 2, *param_1 == 1);
    func_02112798(0, 1, *param_1 == 2);
    func_02112798(0, 0, *param_1 == 3);
    func_02112798(0, 3, *param_1 == 4);
    func_02112798(0, 4, 0);
    if (*param_1 != 5) {
        return;
    }
    iVar1 = *(s32 *)((u8 *)data_0215be48 + 0xa8);
    switch (iVar1) {
    case 5:
        func_0210a854(2);
        return;
    case 6:
        func_0210a854(9);
        return;
    case 7:
        func_0210a854(0xb);
        return;
    default:
        func_0210a818();
        return;
    }
}
