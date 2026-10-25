#include "ctx.h"

extern u32 *data_0214f464;
extern void func_ov003_0217b43c(u32 p, int a, int b, int c, int d, int e, int f, int g);

void func_ov003_0217af40(u32 param_1)
{
    int iVar1;
    u32 uVar2;
    u32 *piVar;

    iVar1 = 0;
    if (*(u16 *)(param_1 + 0xfc) >= 0x3c) {
        piVar = data_0214f464;
        uVar2 = *piVar * 0x10dcd + 1;
        *piVar = uVar2;
        if ((u16)((u32)(u16)uVar2 * 80 >> 16) == 0) {
            iVar1 = 1;
        }
    }
    func_ov003_0217b43c(param_1, -1, -1, 0, 1, iVar1, 0x13, 0x17);
}
