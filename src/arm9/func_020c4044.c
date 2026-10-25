#include "ctx.h"

extern u32 data_02142a8c;
extern void func_020bdd1c(u8 *p, u32 n);
extern void *func_020038b8(void *a, u32 n);
extern void func_020c4690(u32 a, u8 *p);
extern void func_020c38c0(void);
extern void func_020c20f4(void);
extern void func_020c3af0(void);
extern void func_020c20e8(void);

void func_020c4044(u8 *param_1, void *param_2)
{
    u32 *puVar3;

    func_020bdd1c(param_1, 37);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020c38c0;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020c20f4;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020c3af0;
    *(u32 *)(param_1 + 0x210) = (u32)func_020c20e8;
    *(u32 *)(param_1 + 0x214) = (u32)func_020038b8(param_2, 24);
    puVar3 = *(u32 **)(param_1 + 0x214);
    *puVar3 = 0;
    puVar3[5] = (u32)&data_02142a8c;
    func_020c4690(4, param_1);
}
