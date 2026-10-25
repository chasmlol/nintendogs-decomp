#include "ctx.h"

extern void func_020bdd1c(u8 *p, s32 v);
extern void func_020da3b4(void);
extern void func_020d9d7c(void);
extern void func_020da6cc(void);
extern u8 *func_020038b8(s32 *p, s32 n);
extern s32 func_020f1300(s32 v);
extern void func_020f125c(s32 a, u8 *p);

void func_020da6d0(u8 *param_1, s32 *param_2)
{
    u8 *uVar2;
    s32 iVar3;
    s32 *piVar4;

    func_020bdd1c(param_1, 0x20);
    *(u32 *)(param_1 + 500) = (u32)func_020da3b4;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020d9d7c;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020da6cc;
    uVar2 = func_020038b8(param_2, 0xc);
    *(u32 *)(param_1 + 0x214) = (u32)uVar2;
    piVar4 = *(s32 **)(param_1 + 0x214);
    iVar3 = func_020f1300(0x1e);
    *piVar4 = iVar3;
    func_020f125c(0x1e, param_1);
}
