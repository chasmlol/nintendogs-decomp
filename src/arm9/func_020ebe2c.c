#include "ctx.h"

extern u32 (*data_0213e770)(u32, u32, u32);
extern u32 (*data_0213e778)(u32, u32, u32);
extern u32 *data_0215be38;

void func_020ebe2c(void)
{
    int iVar6;
    u32 uVar5;
    u32 *pa;
    u32 *pb;

    iVar6 = 0;
    do {
        uVar5 = data_0213e770(0x800, 0, 0);
        pa = data_0215be38 + iVar6;
        pa[0x67] = uVar5;
        uVar5 = data_0213e778(0x400, 0, 0);
        pb = (u32 *)((u32)data_0215be38 + (u32)iVar6 * 4);
        iVar6 = iVar6 + 1;
        *(u32 *)((u8 *)pb + 0x1a8) = uVar5;
    } while (iVar6 < 3);
    data_0215be38[0x6d] = 1;
}
