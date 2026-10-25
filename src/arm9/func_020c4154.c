#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 v);
extern u8 *func_020038b8(u8 *p, u32 v);
extern void func_020c4690(u32 a, u8 *p);
extern void func_020c38c0(void);
extern void func_020c20f4(void);
extern void func_020c3af0(void);
extern void func_020c20e8(void);
extern u32 data_02142a6c;

void func_020c4154(u8 *param_1, u8 *param_2)
{
    u8 *obj;

    func_020bdd1c(param_1, 35);
    *(void **)(param_1 + 0x1f4) = (void *)func_020c38c0;
    *(void **)(param_1 + 0x1f8) = (void *)func_020c20f4;
    *(void **)(param_1 + 0x1f0) = (void *)func_020c3af0;
    *(void **)(param_1 + 0x210) = (void *)func_020c20e8;
    obj = func_020038b8(param_2, 24);
    *(u8 **)(param_1 + 0x214) = obj;
    obj = *(u8 **)(param_1 + 0x214);
    *(u32 *)obj = 0;
    *(u32 *)(obj + 0x14) = (u32)&data_02142a6c;
    func_020c4690(2, param_1);
}
