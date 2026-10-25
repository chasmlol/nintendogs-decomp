#include "ctx.h"

extern void func_020bdd1c(u8 *p, s32 v);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern u8 data_02144f1c[];
extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_020f125c(s32 a, u8 *p);

void func_020f0a20(u8 *param_1, s32 *param_2)
{
    u8 *uVar2;

    func_020bdd1c(param_1, 4);
    *(u32 *)(param_1 + 500) = (u32)func_020f1110;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020f0c64;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020f1250;
    uVar2 = func_020038b8(param_2, 4);
    *(u32 *)(param_1 + 0x214) = (u32)uVar2;
    **(u32 **)(param_1 + 0x214) = (u32)data_02144f1c;
    func_020f125c(0, param_1);
}
