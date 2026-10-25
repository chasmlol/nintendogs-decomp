#include "ctx.h"
extern u8 data_0215aeb0[];
extern u32 data_0215be10;
extern u32 func_020df9bc(void);

u32 func_020e2350(void)
{
    u32 iVar1;
    u32 uVar2;
    u32 t;
    iVar1 = func_020df9bc();
    if (iVar1 == 0) {
        return 0;
    }
    uVar2 = *(u32 *)(data_0215aeb0 + 0x10);
    if (uVar2 <= 300) {
        goto reset;
    }
    t = (uVar2 * 7) / 10;
    if (*(u32 *)(data_0215aeb0 + 0x14) <= t) {
        goto reset;
    }
    t = (uVar2 * 8) / 100;
    if (*(u32 *)(data_0215aeb0 + 0x18) >= t) {
        goto reset;
    }
    if (data_0215be10 < 0xffff) {
        data_0215be10 = data_0215be10 + 1;
    }
    if (data_0215be10 != 4) {
        goto zero;
    }
    return 1;
reset:
    data_0215be10 = 0;
zero:
    return 0;
}
