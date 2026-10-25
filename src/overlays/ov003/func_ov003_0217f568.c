#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_ov003_0217fe80(u8 *p, u32 a, u32 b);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_0217f568(u8 *param_1)
{
    u32 uVar2;
    s32 iVar1;
    s32 bVar3;

    uVar2 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar2;
    bVar3 = (u16)(((u32)(u16)uVar2 * 50) >> 16) == 0;
    iVar1 = func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 7), 0);
    if (iVar1 != 0) {
        return;
    }
    if (!bVar3) {
        return;
    }
    if (*(s32 *)(param_1 + 0x484) == 0) {
        func_0203e908(param_1, 0x20d);
        return;
    }
    func_0203e908(param_1, 0x20e);
}
