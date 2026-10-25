#include "ctx.h"

extern s32 func_02064098(u32 a, u32 b, u32 c, u32 d);
extern void func_0206431c(u32 a, u32 b);
extern u32 *func_020641b8(void);
extern s32 func_020641c8(u32 a, u32 b, u32 c, u32 d, u32 e);

s32 func_02065130(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar1;
    u32 *puVar2;

    iVar1 = func_02064098(1, 0, param_3, param_4);
    if (iVar1 == 0) {
        func_0206431c(3, param_1);
        puVar2 = func_020641b8();
        iVar1 = func_020641c8(3, 3, puVar2[0], puVar2[1], puVar2[4]);
        if (iVar1 == 0) {
            iVar1 = 2;
        }
        return iVar1;
    }
    return iVar1;
}
