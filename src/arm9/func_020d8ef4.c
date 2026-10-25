#include "ctx.h"

extern void func_020bdd1c(int a, int b);
extern void func_020d8c68(void);
extern void func_020d8b54(void);
extern void func_020d8ed0(void);
extern u32 func_020038b8(int *a, int b);

void func_020d8ef4(int param_1, int *param_2, int param_3)
{
    u32 uVar1;

    func_020bdd1c(param_1, (int)(s16)param_3);
    *(u32 *)(param_1 + 500) = (u32)func_020d8c68;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020d8b54;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020d8ed0;
    uVar1 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = uVar1;
    if (*(u32 **)(param_1 + 0x214) != NULL) {
        **(u32 **)(param_1 + 0x214) = 0;
    }
    *(u32 *)(param_1 + 0x24) = 0x800;
    *(u32 *)(param_1 + 0x28) = 0x800;
    *(u32 *)(param_1 + 0x2c) = 0x800;
    *(u32 *)(param_1 + 0x124) = 0x28f;
    uVar1 = 0x5ec;
    *(u32 *)(param_1 + 0xac) = 0x4b0;
    *(u32 *)(param_1 + 0xf8) = uVar1;
    *(u32 *)(param_1 + 0x120) = uVar1;
    *(u32 *)(param_1 + 0x128) = uVar1;
    *(u32 *)(param_1 + 300) = 1;
}
