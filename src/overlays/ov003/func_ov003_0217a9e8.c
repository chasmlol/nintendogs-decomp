#include "ctx.h"

extern u32 *data_0214f464;
extern void func_ov003_0217b43c(u8 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7);

void func_ov003_0217a9e8(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = 0;
    if (*(u16 *)(param_1 + 0xfc) >= 30) {
        uVar2 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar2;
        if ((u16)((((u32)(u16)uVar2) * 30u) >> 16) == 0) {
            iVar1 = 1;
        }
    }
    func_ov003_0217b43c(param_1, -1, -1, 0, 1, iVar1, 0x17, 0x17);
}
