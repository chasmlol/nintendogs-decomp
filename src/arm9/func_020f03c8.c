#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 n);
extern u32 *func_020038b8(u8 *p, u32 n);
extern void func_020f125c(u32 n, u8 *p);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern u32 data_021456b4;

void func_020f03c8(u8 *param_1, u8 *param_2)
{
    func_020bdd1c(param_1, 0x16);
    *(void (**)(void))(param_1 + 0x1f4) = func_020f1110;
    *(void (**)(void))(param_1 + 0x1f8) = func_020f0c64;
    *(void (**)(void))(param_1 + 0x1f0) = func_020f1250;
    *(u32 **)(param_1 + 0x214) = func_020038b8(param_2, 4);
    **(u32 **)(param_1 + 0x214) = (u32)&data_021456b4;
    func_020f125c(0x12, param_1);
}
