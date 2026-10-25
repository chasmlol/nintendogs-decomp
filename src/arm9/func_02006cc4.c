#include "ctx.h"

extern void *func_020038b8(int *a, u32 b);
extern void func_0206c7f0(u32 a, void *b, u32 c);

u16 *func_02006cc4(int *param_1, int param_2)
{
    u16 *puVar1;
    u32 uVar2;
    vu32 uVar3;

    puVar1 = (u16 *)func_020038b8(param_1, 8);
    if (puVar1 != NULL) {
        *puVar1 = (u16)param_2;
        puVar1[1] = 0;
        uVar2 = (u32)func_020038b8(param_1, param_2 << 3);
        *(u32 *)(puVar1 + 2) = uVar2;
        puVar1[1] = 0;
        uVar3 = 0xc0;
        func_0206c7f0(uVar3, *(void **)(puVar1 + 2), (u32)*puVar1 << 3);
    }
    return puVar1;
}
