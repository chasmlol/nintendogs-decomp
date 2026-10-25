#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 v);
extern u8 *func_020038b8(u8 *p, u32 v);
extern void func_020f125c(u32 a, u8 *p);
extern void func_020f1110(void);
extern void func_020f0c64(void);
extern void func_020f1250(void);
extern u32 data_021452e8;

void func_020f07dc(u8 *param_1, u8 *param_2)
{
    u8 *obj;

    func_020bdd1c(param_1, 13);
    *(void **)(param_1 + 0x1f4) = (void *)func_020f1110;
    *(void **)(param_1 + 0x1f8) = (void *)func_020f0c64;
    *(void **)(param_1 + 0x1f0) = (void *)func_020f1250;
    obj = func_020038b8(param_2, 4);
    *(u8 **)(param_1 + 0x214) = obj;
    obj = *(u8 **)(param_1 + 0x214);
    *(u32 *)obj = (u32)&data_021452e8;
    func_020f125c(9, param_1);
}
