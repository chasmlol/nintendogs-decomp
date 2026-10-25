#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 v);
extern void *func_020038b8(s32 *p, u32 n);
extern void func_020c38c0(void);
extern void func_020c20f4(void);
extern void func_020c3af0(void);
extern void func_020c20e8(void);
extern void func_020c4690(u32 a, u8 *p);
extern u8 data_02142adc;

void func_020c3e24(u8 *param_1, s32 *param_2)
{
    u32 *puVar3;

    func_020bdd1c(param_1, 41);
    *(void **)(param_1 + 0x1f4) = (void *)func_020c38c0;
    *(void **)(param_1 + 0x1f8) = (void *)func_020c20f4;
    *(void **)(param_1 + 0x1f0) = (void *)func_020c3af0;
    *(void **)(param_1 + 0x210) = (void *)func_020c20e8;
    *(void **)(param_1 + 0x214) = func_020038b8(param_2, 24);
    puVar3 = *(u32 **)(param_1 + 0x214);
    *puVar3 = 0;
    puVar3[5] = (u32)&data_02142adc;
    func_020c4690(9, param_1);
}
