#include "ctx.h"

extern u32 data_0214527c;
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern void func_020bdd1c(u8 *p, u32 v);
extern u32 func_020038b8(u32 a, u32 b);
extern void func_020f125c(u32 v, u8 *p);

void func_020f0a94(u8 *param_1, u32 param_2)
{
    u32 uVar2;
    func_020bdd1c(param_1, 12);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020f1110;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020f0c64;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020f1250;
    uVar2 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = uVar2;
    **(u32 **)(param_1 + 0x214) = (u32)&data_0214527c;
    func_020f125c(8, param_1);
}
