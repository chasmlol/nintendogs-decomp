#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 v);
extern void *func_020038b8(s32 *p, u32 n);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern void func_020f125c(u32 a, u8 *p);
extern u8 data_021450cc;

void func_020f0850(u8 *param_1, s32 *param_2)
{
    u32 *p;

    func_020bdd1c(param_1, 8);
    *(void **)(param_1 + 0x1f4) = (void *)func_020f1110;
    *(void **)(param_1 + 0x1f8) = (void *)func_020f0c64;
    *(void **)(param_1 + 0x1f0) = (void *)func_020f1250;
    *(void **)(param_1 + 0x214) = func_020038b8(param_2, 4);
    p = *(u32 **)(param_1 + 0x214);
    *p = (u32)&data_021450cc;
    func_020f125c(4, param_1);
}
