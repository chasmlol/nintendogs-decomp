#include "ctx.h"

extern u32 *data_0215be34;
extern void func_020bdd1c(int a, int b);
extern void func_020e4c34(void);
extern void func_020e3a20(void);
extern void func_020e4e10(void);
extern void func_020e39d4(void);
extern u32 func_020038b8(int *a, int b);

void func_020e4e1c(int param_1, int *param_2)
{
    u32 uVar1;
    int iVar2;

    func_020bdd1c(param_1, 0x31);
    *(void **)(param_1 + 500) = (void *)func_020e4c34;
    *(void **)(param_1 + 0x1f8) = (void *)func_020e3a20;
    *(void **)(param_1 + 0x1f0) = (void *)func_020e4e10;
    *(void **)(param_1 + 0x200) = (void *)func_020e39d4;
    uVar1 = func_020038b8(param_2, 0x1c);
    *(u32 *)(param_1 + 0x214) = uVar1;
    iVar2 = *(int *)(param_1 + 0x214);
    if (iVar2 != 0) {
        if (data_0215be34 != (u32 *)0) {
            uVar1 = *data_0215be34;
        }
        else {
            uVar1 = 0;
        }
        *(u32 *)(iVar2 + 0x18) = uVar1;
        *(u16 *)(iVar2 + 0x10) = 0;
        return;
    }
}
