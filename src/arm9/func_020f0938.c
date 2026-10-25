#include "ctx.h"

extern u8 data_02144ff4[];
extern void func_020bdd1c(int a, int b);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern u32 func_020038b8(int *a, int b);
extern void func_020f125c(int a, int b);

void func_020f0938(int param_1, int *param_2)
{
    u32 uVar2;

    func_020bdd1c(param_1, 6);
    *(void **)(param_1 + 500) = (void *)func_020f1110;
    *(void **)(param_1 + 0x1f8) = (void *)func_020f0c64;
    *(void **)(param_1 + 0x1f0) = (void *)func_020f1250;
    uVar2 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = uVar2;
    **(void ***)(param_1 + 0x214) = (void *)data_02144ff4;
    func_020f125c(2, param_1);
}
