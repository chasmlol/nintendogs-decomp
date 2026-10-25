#include "ctx.h"
extern void func_020bdd1c(u8 *p, u32 a);
extern u32 func_020038b8(u32 *p, u32 a);
extern u32 func_020f1300(u32 a);
extern void func_020f125c(u32 a, u8 *p);
extern void func_020da3b4(void);
extern void func_020d9d7c(void);
extern void func_020da6cc(void);
void func_020da744(u8 *param_1, u32 *param_2)
{
    u32 uVar1;
    u32 uVar2;
    u32 iVar3;
    u32 *piVar4;
    func_020bdd1c(param_1, 0x1f);
    *(u32 *)(param_1 + 500) = (u32)func_020da3b4;
    uVar2 = (u32)func_020d9d7c;
    uVar1 = (u32)func_020da6cc;
    *(u32 *)(param_1 + 0x1f8) = uVar2;
    *(u32 *)(param_1 + 0x1f0) = uVar1;
    uVar2 = func_020038b8(param_2, 0xc);
    *(u32 *)(param_1 + 0x214) = uVar2;
    piVar4 = *(u32 **)(param_1 + 0x214);
    iVar3 = func_020f1300(0x1d);
    *piVar4 = iVar3;
    func_020f125c(0x1d, param_1);
}
