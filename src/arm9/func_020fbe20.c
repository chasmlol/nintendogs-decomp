#include "ctx.h"

extern u32 data_0213331c;
extern void func_020bdd1c(int a, int b);
extern void func_020fbc04(void);
extern void func_020fbba0(void);
extern void func_020fbcfc(void);
extern u32 func_020038b8(int *a, int b);

void func_020fbe20(int param_1, int *param_2)
{
    u32 *puVar1;
    u32 uVar2;

    func_020bdd1c(param_1, 0x72);
    *(u32 *)(param_1 + 500) = (u32)func_020fbc04;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020fbba0;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020fbcfc;
    uVar2 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = uVar2;
    if (*(u32 **)(param_1 + 0x214) != NULL) {
        **(u32 **)(param_1 + 0x214) = 0;
    }
    puVar1 = (u32 *)&data_0213331c;
    *(u32 *)(param_1 + 0xac) = 1200;
    uVar2 = data_0213331c;
    *(u32 *)(param_1 + 0xf8) = uVar2;
    *(u32 *)(param_1 + 0x120) = uVar2;
    *(u32 *)(param_1 + 0x128) = uVar2;
    *(u32 *)(param_1 + 300) = 1;
}
