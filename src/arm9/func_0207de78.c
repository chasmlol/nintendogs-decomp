#include "ctx.h"

void func_0206c7f0(u32 a, u32 *b, u32 c);

u32 func_0207de78(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 *puVar1;
    u32 uVar3;
    u32 uVar2;
    u32 z;
    u32 len;
    puVar1 = (u32 *)param_1[0];
    uVar3 = ~(param_3 - 1) & ((param_3 - 1) + (u32)puVar1);
    uVar2 = param_2 + uVar3;
    if (uVar2 > param_1[1]) {
        return 0;
    }
    len = uVar2 - (u32)puVar1;
    if (((u16)(param_1[-1] & 0xff) & 1) != 0) {
        z = 0;
        func_0206c7f0(*(vu32 *)&z, puVar1, len);
    }
    param_1[0] = uVar2;
    return uVar3;
}
