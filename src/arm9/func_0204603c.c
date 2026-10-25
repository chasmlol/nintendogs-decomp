#include "ctx.h"

extern u32 *data_0214f464;
extern void func_020460c4(int a, int b, int c, void *d, int e, s16 f);

void func_0204603c(int param_1)
{
    u32 uVar1;
    u32 *piVar;

    *(u16 *)(param_1 + 0x12e) = 0x8000;
    piVar = data_0214f464;
    uVar1 = *piVar * 0x10dcd + 1;
    *piVar = uVar1;
    func_020460c4(param_1, 1, 0xc, (void *)(param_1 + 0x330),
                  (u16)(((u32)(u16)uVar1 * 50) >> 16) == 0, (s16)0x2e7);
}
