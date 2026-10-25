#include "ctx.h"

extern void func_0206c7f0(u32 fill, u32 *dst, u32 n);

u32 func_0207db08(u8 *p, u32 param_2, u32 param_3)
{
    u32 *base;
    u32 *puVar2;
    u32 uVar1, uVar4;
    vu32 zero;

    base = (u32 *)(p + 0x24);
    if (param_3 == 0) {
        param_3 = 1;
    }
    param_3 = (param_3 + 3) & ~3;
    puVar2 = (u32 *)base[0];
    uVar4 = param_3 + param_2;
    uVar1 = (u32)puVar2 - param_2;
    if (param_3 == uVar1) {
        return param_3;
    }
    if (param_3 > uVar1) {
        if ((s32)(uVar4 - base[1]) > 0) {
            return 0;
        }
        if ((((u16)(*(u32 *)(p + 0x20) & 0xff)) & 1) != 0) {
            zero = 0;
            func_0206c7f0(zero, puVar2, param_3 - uVar1);
        }
    }
    base[0] = uVar4;
    return param_3;
}
