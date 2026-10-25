#include "ctx.h"

extern u32 func_020038b8(int *a, int b);
extern u32 func_02003500(int a, int b);
extern void func_0206c7bc(int a, void *b, u32 c);

void *func_020a9954(int *param_1, u32 param_2)
{
    u32 *puVar1;
    u32 uVar2;
    vu16 local_a;
    vu16 local_b;

    puVar1 = (u32 *)func_020038b8(param_1, 0x1ac);
    *puVar1 = param_2;
    *(u16 *)(puVar1 + 1) = 0;
    *(u16 *)((int)puVar1 + 6) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    uVar2 = func_02003500((int)param_1, 0x40000);
    puVar1[0xb] = uVar2;
    local_a = 0;
    func_0206c7bc(local_a, (void *)(puVar1 + 0xc), 0x13c);
    local_b = 0;
    func_0206c7bc(local_b, (void *)(puVar1 + 0x5b), 0x40);
    return puVar1;
}
