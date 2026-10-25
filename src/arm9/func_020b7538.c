#include "ctx.h"

extern int *data_02159060;
extern s32 func_020ad77c(int a);
extern void func_020ad7c8(int a, int b);
extern void func_020ad6fc(int a, int b);
extern void func_02097b94(int a, int b, int c, int d, int e);
extern s32 func_020ad690(int a);
extern void func_020ad8f0(int a);
extern void func_020b7674(void);

void func_020b7538(int param_1)
{
    s16 sVar1;
    int *piVar2;

    switch (*(s16 *)((u32)param_1 + 0x2e)) {
    case 0:
        if (func_020ad77c(param_1) == 0) {
            return;
        }
        func_02097b94(9, 0x2711, 0, (int)func_020b7674, 0);
        return;
    case 1:
        piVar2 = data_02159060;
        if (*(s32 *)((u8 *)piVar2 + 0xa4) == 0) {
            return;
        }
        sVar1 = *(s16 *)((u8 *)piVar2 + 0x9a);
        if (sVar1 == 0) {
            goto zero_case;
        }
        if (sVar1 == 1) {
            goto one_case;
        }
        return;
zero_case:
        func_020ad7c8(param_1, 0x24);
        func_020ad6fc(param_1, 2);
        func_02097b94(9, 0x2712, 0, 0, 1);
        return;
one_case:
        *(s16 *)(param_1 + 0x2e) = 2;
        *(s16 *)(param_1 + 0x30) = 0;
        *(s16 *)(param_1 + 0x100) = 2;
        return;
    case 4:
        if (func_020ad690(param_1) == 0) {
            return;
        }
        func_020ad8f0(param_1);
        break;
    case 2:
    case 3:
    default:
        break;
    }
}
