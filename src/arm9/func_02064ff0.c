#include "ctx.h"

s32 func_02064590(u32 *p, u32 v);
void func_0206431c(s32 a, u32 b);
u32 *func_020641b8(void);
s32 func_020641c8(s32 a, s32 b, u32 c, u32 d, u32 e);

s32 func_02064ff0(u32 *param_1, u32 param_2, u32 param_3)
{
    s32 iVar1;
    u32 *puVar2;

    iVar1 = func_02064590(param_1, param_3);
    if (iVar1 != 0) {
        return iVar1;
    }
    func_0206431c(0, param_2);
    puVar2 = func_020641b8();
    iVar1 = func_020641c8(0, 3, puVar2[0], puVar2[1], puVar2[4]);
    if (iVar1 == 0) {
        iVar1 = 2;
    }
    return iVar1;
}
