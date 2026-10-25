#include "ctx.h"

void func_020bdd1c(u8 *p, u32 v);
u8 *func_020038b8(u32 *p, u32 v);
void func_020e5df4(void);
void func_020e4ef4(void);
void func_020e5ee4(void);
void func_020e4eb8(void);

void func_020e5f58(u8 *param_1, u32 *param_2)
{
    u8 *iVar3;

    func_020bdd1c(param_1, 69);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020e5df4;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020e4ef4;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020e5ee4;
    *(u32 *)(param_1 + 0x200) = (u32)func_020e4eb8;
    *(u8 **)(param_1 + 0x214) = func_020038b8(param_2, 32);
    *(u32 *)(param_1 + 0x24) = 0x6000;
    *(u32 *)(param_1 + 0x28) = 0x6000;
    *(u32 *)(param_1 + 0x2c) = 0x6000;
    iVar3 = *(u8 **)(param_1 + 0x214);
    *(u32 *)(iVar3 + 4) = 0;
    *(u32 *)(iVar3 + 0x14) = 0;
    *(u32 *)(iVar3 + 0x18) = 1;
    *(u32 *)(iVar3 + 8) = 0;
    *(u32 *)(iVar3 + 0x1c) = 0;
    *(u32 *)(param_1 + 0xac) = 1000;
}
