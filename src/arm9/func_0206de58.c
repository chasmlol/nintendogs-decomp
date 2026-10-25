#include "ctx.h"

extern u32 func_0206eb3c(u16 *p, u16 mask, u32 b, u32 c);

u32 func_0206de58(u8 *param_1, u32 param_2, u16 *param_3)
{
    u32 uVar1;
    u8 *puVar2;
    u16 mask;
    u8 t;

    puVar2 = param_1 + 0x1d4 + param_2 * 0x68;
    mask = (u16)(1 << param_2);
    uVar1 = 0;
    if (puVar2[0] != 2) {
        return uVar1;
    }
    t = puVar2[1];
    if (t == 10) {
        uVar1 = func_0206eb3c(param_3, mask, puVar2[2], t);
        puVar2[0] = 1;
    }
    return uVar1;
}
