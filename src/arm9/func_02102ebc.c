#include "ctx.h"

extern int data_0215be48;
extern void func_0210444c(void);
extern void func_0210445c(void);
extern int func_021179b0(int *a, u16 b, u16 c);

void func_02102ebc(int param_1, int param_2, u16 param_3, u16 param_4)
{
    int iVar1;

    if (param_1 == 1) {
        iVar1 = *(int *)(param_2 + 0x1cc);
    }
    else {
        iVar1 = param_2;
        if (param_1 == 3) {
            iVar1 = *(int *)(param_2 + 0x1ac);
        }
    }
    if (*(int *)(param_2 + 100) == 0) {
        return;
    }
    if (iVar1 != 3) {
        return;
    }
    if (*(int *)(param_2 + 8) == 0) {
        if (*(int *)(param_2 + 4) != 0) {
            if (*(int *)(param_2 + 0x68) != 0) {
                func_0210444c();
            }
            else {
                func_0210445c();
            }
        }
        if (param_1 == 1) {
            iVar1 = func_021179b0((int *)(param_2 + 0xa8), param_3, param_4);
            if (iVar1 != 0) {
                *(u32 *)(data_0215be48 + 0x48b8) = 1;
            }
        }
        else if ((param_1 == 3) &&
                 (iVar1 = func_021179b0((int *)(param_2 + 0x6c), param_3, param_4), iVar1 != 0)) {
            *(u32 *)(data_0215be48 + 0x48b8) = 1;
        }
        *(u32 *)(param_2 + 4) = 0;
        return;
    }
}
