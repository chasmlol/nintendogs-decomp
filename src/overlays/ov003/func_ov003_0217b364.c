#include "ctx.h"

extern u32 *data_0214f464;
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void func_ov003_0217b364(u8 *p)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = 0;
    if (*(u16 *)(p + 0xfc) >= 0x3c) {
        uVar2 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar2;
        if ((u16)(((u32)(u16)uVar2 * 0x50u) >> 16) == 0) {
            iVar1 = 1;
        }
    }
    func_ov003_0217b43c(p, -1, -1, 0, 1, iVar1, 0x17, 0x17);
}
