#include "ctx.h"

extern u8 data_02142abc[];
extern void func_020bdd1c(int a, int b);
extern void func_020c38c0(void);
extern void func_020c20f4(void);
extern void func_020c3af0(void);
extern void func_020c20e8(void);
extern u32 func_020038b8(int *a, int b);
extern void func_020c4690(int a, int b);

void func_020c3f34(int param_1, int *param_2)
{
    u32 uVar2;
    u32 *puVar3;

    func_020bdd1c(param_1, 0x27);
    *(void **)(param_1 + 500) = (void *)func_020c38c0;
    *(void **)(param_1 + 0x1f8) = (void *)func_020c20f4;
    *(void **)(param_1 + 0x1f0) = (void *)func_020c3af0;
    *(void **)(param_1 + 0x210) = (void *)func_020c20e8;
    uVar2 = func_020038b8(param_2, 0x18);
    *(u32 *)(param_1 + 0x214) = uVar2;
    puVar3 = *(u32 **)(param_1 + 0x214);
    *puVar3 = 0;
    puVar3[5] = (u32)data_02142abc;
    func_020c4690(7, param_1);
}
