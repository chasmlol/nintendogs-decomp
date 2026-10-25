#include "ctx.h"

extern u32 data_0214e778;
extern u32 data_0213695c;
extern u64 func_02080858(void);
extern void func_0206a514(void);
extern void func_02003fb4(void);
extern u64 func_0205e068(u32 a, u32 b, u32 c, u32 d);

void func_02004180(int param_1)
{
    u64 uVar6;
    u64 now;
    u64 d;
    int iVar4;

    do {
        iVar4 = *(int *)&data_0214e778;
        uVar6 = func_02080858();
        *(u32 *)(iVar4 + 0xc4) = (u32)uVar6;
        *(u32 *)(iVar4 + 0xc8) = (u32)(uVar6 >> 32);
        if (*(u16 *)(iVar4 + 10) == 1) {
            func_0206a514();
        }
        ((void (*)(void))data_0213695c)();
        func_02003fb4();
        ((void (*)(void))(*(int *)((u8 *)&data_0213695c + 12)))();
        now = func_02080858();
        *(int *)(*(int *)&data_0214e778 + 0x28) = *(int *)(*(int *)&data_0214e778 + 0x28) + 1;
        iVar4 = *(int *)&data_0214e778;
        d = (now - *(volatile u64 *)((u8 *)iVar4 + 0xcc)) * 64000;
        *(int *)(iVar4 + 0xd8) = (int)func_0205e068((u32)d, (u32)(d >> 32), 0x82ea, 0);
        iVar4 = *(int *)&data_0214e778;
        d = (now - *(volatile u64 *)((u8 *)iVar4 + 0xc4)) * 64000;
        *(int *)(iVar4 + 0xdc) = (int)func_0205e068((u32)d, (u32)(d >> 32), 0x82ea, 0);
        param_1 = param_1 - 1;
    } while (param_1 > 0);
}
