#include "ctx.h"
extern void func_020bdd1c(u8 *p, u32 a);
extern u32 func_020038b8(u32 *p, u32 a);
extern void func_020eb4d0(void);
extern void func_020eb130(void);
extern void func_020eb610(void);
void func_020eb61c(u8 *param_1, u32 *param_2)
{
    u32 uVar1;
    u32 uVar2;
    func_020bdd1c(param_1, 2);
    *(u32 *)(param_1 + 500) = (u32)func_020eb4d0;
    uVar2 = (u32)func_020eb130;
    uVar1 = (u32)func_020eb610;
    *(u32 *)(param_1 + 0x1f8) = uVar2;
    *(u32 *)(param_1 + 0x1f0) = uVar1;
    uVar2 = func_020038b8(param_2, 2);
    *(u32 *)(param_1 + 0x214) = uVar2;
    uVar2 = 0x666;
    *(u32 *)(param_1 + 0xac) = 700;
    *(u32 *)(param_1 + 0xf8) = uVar2;
    *(u32 *)(param_1 + 0x128) = uVar2;
    uVar1 = 0x333;
    *(u32 *)(param_1 + 0x120) = uVar2;
    *(u32 *)(param_1 + 0x124) = uVar1;
    *(u32 *)(param_1 + 300) = 1;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 8;
    *(u16 *)(param_1 + 0x84) = 0;
    *(u16 *)(param_1 + 0x86) = 0;
}
