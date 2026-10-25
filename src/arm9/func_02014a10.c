#include "ctx.h"

extern u32 data_0213b40c[];
extern void func_0201d1f0(u32 p);
extern void func_02035c98(u32 p, int q);

void func_02014a10(u32 param_1)
{
    int iVar1;

    func_0201d1f0(param_1);
    iVar1 = 1;
    if ((*(u8 *)(param_1 + 0x93) <= 0x18) &&
        ((1 << *(u8 *)(param_1 + 0x93)) & 0x01800003) != 0) {
        iVar1 = 0;
    }
    func_02035c98(param_1, iVar1);
    ((void (*)(u32, int))data_0213b40c[*(s8 *)(param_1 + 0x8c)])(param_1, 2);
}
