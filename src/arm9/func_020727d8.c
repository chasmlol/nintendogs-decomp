#include "ctx.h"

u32 func_02071824(u32 a);
u32 func_02071f78(u32 *a, u32 b, u32 c, u32 d, u32 e);
u32 func_020717a0(u32 a, u32 b, u32 c, u32 d);
void func_020800f0(u32 a, u32 b);

u32 func_020727d8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 *param_5)
{
    u32 iVar1;
    u32 uVar2;

    iVar1 = func_02071824(param_1);
    if (iVar1 == 0) {
        return 0;
    }
    if (param_5 == 0) {
        return 0;
    }
    uVar2 = func_02071f78(param_5, iVar1 + 0x20, param_2, param_3, param_4);
    if (uVar2 == 0) {
        return 0;
    }
    if (iVar1 != func_020717a0(param_1, uVar2, iVar1, 0)) {
        return 0;
    }
    func_020800f0(uVar2, iVar1);
    return uVar2;
}
