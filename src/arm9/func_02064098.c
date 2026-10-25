#include "ctx.h"

extern s32 func_0206419c(void);
extern void func_020800d4(u32 a, s32 b);
extern u8 *data_0214f9b4;

s32 func_02064098(u32 param_1, ...)
{
    u32 *puVar3;
    u16 uVar1;
    s32 iVar2;
    s32 iVar4;

    iVar2 = func_0206419c();
    if (iVar2 != 0) {
        return iVar2;
    }
    func_020800d4(*(u32 *)(data_0214f9b4 + 4), 2);
    uVar1 = **(u16 **)(data_0214f9b4 + 4);
    puVar3 = (u32 *)((u32)&param_1 & ~3) + 1;
    iVar2 = 3;
    if (param_1 == 0) {
        return iVar2;
    }
    do {
        puVar3 = puVar3 + 1;
        if (puVar3[-1] == uVar1) {
            iVar2 = 0;
        }
        iVar4 = param_1;
        param_1 = iVar4 - 1;
    } while (iVar4 - 1 != 0);
    return iVar2;
}
