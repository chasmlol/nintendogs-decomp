#include "ctx.h"

extern void func_020bdd1c(u8 *p, s32 x);
extern void func_020da3b4(void);
extern void func_020d9d7c(void);
extern void func_020da6cc(void);
extern u32 *func_020038b8(u32 *p, u32 n);
extern s32 func_020f1300(s32 x);
extern void func_020f125c(s32 x, u8 *p);

void func_020da82c(u8 *param_1, u32 *param_2)
{
    u32 *piVar4;

    func_020bdd1c(param_1, 0x1d);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020da3b4;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020d9d7c;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020da6cc;
    *(u32 *)(param_1 + 0x214) = (u32)func_020038b8(param_2, 12);
    piVar4 = *(u32 **)(param_1 + 0x214);
    *piVar4 = func_020f1300(27);
    func_020f125c(27, param_1);
}
