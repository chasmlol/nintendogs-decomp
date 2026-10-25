#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_ov003_0217fe80(u8 *p, s32 a, s32 b);
extern s32 func_02029648(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0217f9c8(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 5), 1);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_02029648(param_1);
    if (iVar1 != 0) {
        return;
    }
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    uVar2 = (u16)(((u32)(u16)uVar2 * 0x32) >> 16);
    switch (uVar2) {
    case 0:
        func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x213));
        return;
    case 1:
        func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x21e));
        return;
    }
}
