#include "ctx.h"

extern u32 func_020fc938(int a, int b, int c, int d);
extern void func_02101be4(u32 a, int b);
extern u32 func_02112e14(int a);
extern void func_02101118(int a, u32 b, u32 c, int d, u16 *e);
extern void func_0210167c(int a);

void func_0210be10(u8 *param_1)
{
    u16 *puVar1;
    u32 iVar2;

    if (*(int *)(param_1 + 4) < 2) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        return;
    }
    if (*(int *)(param_1 + 0x86c) != 0) {
        *(int *)(param_1 + 0x86c) = 0;
        puVar1 = (u16 *)func_020fc938(2, 0, 0xc9, 0);
        func_02101be4(*(u32 *)(param_1 + 0x18), 0);
        if (puVar1 != (u16 *)0) {
            iVar2 = func_02112e14(2);
            func_02101118(0, iVar2, *(u16 *)(param_1 + 0x20), 0, puVar1);
        }
        puVar1 = (u16 *)func_020fc938(2, 0, 0xc9, 1);
        func_02101be4(*(u32 *)(param_1 + 0x1c), 0);
        if (puVar1 != (u16 *)0) {
            iVar2 = func_02112e14(2);
            func_02101118(0, iVar2, *(u16 *)(param_1 + 0x22), 1, puVar1);
        }
        func_0210167c(0);
        return;
    }
}
