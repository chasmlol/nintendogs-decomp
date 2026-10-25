#include "ctx.h"

extern u32 data_02145060;
void func_020bdd1c(u8 *p, u32 v);
u8 *func_020038b8(u32 *p, u32 v);
void func_020f1110(void);
void func_020f0c64(void);
void func_020f1250(void);
void func_020f125c(u32 v, u8 *p);

void func_020f08c4(u8 *param_1, u32 *param_2)
{
    u8 *iVar2;

    func_020bdd1c(param_1, 7);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020f1110;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020f0c64;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020f1250;
    *(u8 **)(param_1 + 0x214) = func_020038b8(param_2, 4);
    iVar2 = *(u8 **)(param_1 + 0x214);
    *(u32 *)iVar2 = (u32)&data_02145060;
    func_020f125c(3, param_1);
}
