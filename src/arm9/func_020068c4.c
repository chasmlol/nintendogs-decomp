#include "ctx.h"

extern int data_0214f008;
extern u16 func_0207d294(int a, u16 b);
extern u32 *func_020038b8(int *a, int b);
extern void func_02005f84(void);

u32 *func_020068c4(int *param_1, u16 *param_2)
{
    u16 uVar1;
    u32 *puVar2;
    u16 local_18;
    vu16 local_16;

    if (param_2 == NULL) {
        local_18 = 0;
        local_16 = 0;
        param_2 = &local_18;
    }
    uVar1 = func_0207d294((int)param_1, *param_2);
    puVar2 = func_020038b8(param_1, 0x3c);
    *puVar2 = 2;
    *(u16 *)(puVar2 + 1) = 0;
    *(u16 *)((int)puVar2 + 6) = 0;
    *(u16 *)((int)puVar2 + 10) = 0;
    *(u16 *)(puVar2 + 3) = 0;
    *(u16 *)((int)puVar2 + 0xe) = 0;
    *(u16 *)(puVar2 + 4) = 0;
    *(u16 *)((int)puVar2 + 0x12) = 0xff;
    *(u16 *)(puVar2 + 5) = 0;
    *(u16 *)((int)puVar2 + 0x16) = 0;
    *(u16 *)(puVar2 + 6) = 4;
    *(u16 *)((int)puVar2 + 0x1a) = 0;
    *(u16 *)(puVar2 + 7) = 0;
    *(u16 *)((int)puVar2 + 0x1e) = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    func_02005f84();
    *(u32 **)&data_0214f008 = puVar2;
    func_0207d294((int)param_1, uVar1);
    return puVar2;
}
