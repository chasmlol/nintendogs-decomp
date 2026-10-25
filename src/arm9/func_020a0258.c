#include "ctx.h"

extern u32 data_02159074;
extern u32 data_02159184;
extern void func_02071e34(u32 a, s32 b);
extern u16 func_02071f20(u32 a);
extern void func_02072cf0(u32 a, u32 b);
extern void func_0207307c(u8 *a, u32 b);

void func_020a0258(u32 param_1)
{
    u8 *obj;
    u8 *piVar2;
    u32 piVar4;

    obj = (u8 *)&data_02159074;
    piVar2 = (u8 *)&data_02159184;
    piVar4 = *(u32 *)(obj + 4);
    if (param_1 == 0xffffffff) {
        return;
    }
    if (*(s16 *)(obj + 22) != -1) {
        func_02071e34(piVar4, *(s16 *)(obj + 22));
    }
    *(u16 *)(obj + 22) = func_02071f20(piVar4);
    func_02072cf0(param_1, piVar4);
    func_0207307c(piVar2, param_1);
    *(u32 *)(piVar2 + 12) = 1;
}
