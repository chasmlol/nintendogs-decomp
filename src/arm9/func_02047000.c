#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_0204754c(u8 *p, s32 v);
extern void func_0204fc38(u8 *p);

void func_02047000(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = func_0204754c(param_1, 1);
    if (iVar1 != 0) {
        return;
    }
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    if ((u16)(((u32)(u16)uVar2 * 0x32) >> 16) == 0) {
        func_0204fc38(param_1);
        return;
    }
}
