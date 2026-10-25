#include "ctx.h"

extern u8 data_02155c84[];
extern u8 data_02155c8c[];
extern u8 data_02155c88[];
extern u32 func_0207ec14(u32 a);

void func_0207eccc(s32 param_1, u32 param_2, u32 param_3)
{
    s32 off;
    u32 uVar2;
    off = 12 * param_1;
    *(u32 *)((s32)data_02155c84 + off) = param_2;
    *(u32 *)(data_02155c8c + off) = param_3;
    uVar2 = func_0207ec14(1 << (param_1 + 8));
    *(u32 *)(data_02155c88 + off) = uVar2 & (1 << (param_1 + 8));
}
