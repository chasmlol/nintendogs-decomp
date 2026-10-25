#include "ctx.h"

extern u32 data_0214542c;
extern void func_020bdd1c(int a, int b);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern u32 func_020038b8(int *a, int b);
extern void func_020f125c(int a, int b);

void func_020f0680(int param_1, int *param_2)
{
    u32 uVar2;

    func_020bdd1c(param_1, 0x10);
    *(u32 *)(param_1 + 500) = (u32)func_020f1110;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020f0c64;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020f1250;
    uVar2 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = uVar2;
    **(u32 **)(param_1 + 0x214) = (u32)&data_0214542c;
    func_020f125c(0xc, param_1);
}
