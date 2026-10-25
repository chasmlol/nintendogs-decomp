#include "ctx.h"
extern u8 data_021453c0[];
extern void func_020bdd1c(u8 *p, u32 a);
extern u32 func_020038b8(u32 *p, u32 a);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern void func_020f125c(u32 a, u8 *p);
void func_020f06f4(u8 *param_1, u32 *param_2)
{
    u32 uVar1;
    u32 uVar2;
    func_020bdd1c(param_1, 0xf);
    *(u32 *)(param_1 + 500) = (u32)func_020f1110;
    uVar2 = (u32)func_020f0c64;
    uVar1 = (u32)func_020f1250;
    *(u32 *)(param_1 + 0x1f8) = uVar2;
    *(u32 *)(param_1 + 0x1f0) = uVar1;
    uVar2 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = uVar2;
    **(u32 **)(param_1 + 0x214) = (u32)data_021453c0;
    func_020f125c(0xb, param_1);
}
