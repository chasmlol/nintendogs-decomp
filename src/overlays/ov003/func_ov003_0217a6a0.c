#include "ctx.h"

extern u32 data_0214f464;
extern void func_ov003_0217b43c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void func_ov003_0217a6a0(u8 *param_1)
{
    s32 iVar1;
    u32 *g;
    u32 n;

    iVar1 = 0;
    if (*(u16 *)(param_1 + 0xfc) < 60) goto skip;
    g = (u32 *)data_0214f464;
    n = *g * 0x10dcd + 1;
    *g = n;
    if ((u16)((((u32)(u16)n) * 60) >> 16) == 0) {
        iVar1 = 1;
    }
skip:
    func_ov003_0217b43c(param_1, -1, -1, 0, 1, iVar1, 20, 20);
}
