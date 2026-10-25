#include "ctx.h"

extern u32 data_02145354;
extern void func_020bdd1c(u8 *p, u32 a);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern u32 func_020038b8(s32 *p, u32 a);
extern void func_020f125c(u32 a, u8 *p);

void func_020f0768(u8 *param_1, s32 *param_2)
{
    u32 v;

    func_020bdd1c(param_1, 14);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020f1110;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020f0c64;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020f1250;
    v = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = v;
    **(volatile u32 **)(param_1 + 0x214) = (u32)&data_02145354;
    func_020f125c(10, param_1);
}
