#include "ctx.h"

extern int *data_0215be48;
extern s32 func_020c8e00(void);
extern void func_020ad7c8(int a, int b);
extern void func_020ad6fc(int a, int b);
extern void func_020ad7b4(int a, int b);
extern void func_02109238(void);
extern u32 func_021150fc(void);

void func_020b8a04(int param_1)
{
    int iVar1;
    u32 uVar2;

    if (*(s16 *)(param_1 + 0x10e) >= 0) {
        func_020ad7c8(param_1, 0x15);
        func_020ad6fc(param_1, 2);
        func_02109238();
        return;
    }
    iVar1 = func_020c8e00();
    if (iVar1 != 0) {
        *(s16 *)(param_1 + 0x2e) = 3;
        *(s16 *)(param_1 + 0x30) = 0;
        return;
    }
    if (*(s32 *)((u8 *)data_0215be48 + 0x48bc) == 1) {
        func_020ad7c8(param_1, 10);
        func_020ad6fc(param_1, 0);
        return;
    }
    if (*(s32 *)((u8 *)data_0215be48 + 0x48bc) == 4) {
        func_020ad7c8(param_1, 5);
        func_020ad6fc(param_1, 0);
        return;
    }
    uVar2 = func_021150fc();
    switch (uVar2) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        func_020ad7c8(param_1, 4);
        func_020ad6fc(param_1, 0);
        return;
    case 3:
        func_020ad7c8(param_1, 9);
        func_020ad6fc(param_1, 0);
        return;
    case 4:
        func_020ad7b4(param_1, 0);
        func_020ad6fc(param_1, 0);
        return;
    case 5:
        func_020ad7b4(param_1, 1);
        func_020ad6fc(param_1, 0);
        return;
    case 6:
        func_020ad7b4(param_1, 2);
        func_020ad6fc(param_1, 0);
        break;
    }
    return;
}
