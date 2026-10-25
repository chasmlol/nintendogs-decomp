#include "ctx.h"

extern u8 data_02152cd8[];
extern u32 *data_0214f464;
extern s32 func_02067df0(u8 *, u32 *);

u32 func_0202aaf4(u8 *p)
{
    u32 loc[3];
    u32 uVar2;
    u32 x;
    s32 iVar3;
    s32 iVar1;

    loc[0] = *(u32 *)(data_02152cd8 + 0x4c);
    loc[1] = *(u32 *)(data_02152cd8 + 0x58);
    loc[2] = *(u32 *)(data_02152cd8 + 0x64);
    uVar2 = func_02067df0(p + 0x2a0, loc);
    if ((s32)uVar2 > 0) {
        uVar2 = func_02067df0(p + 0x2a0, loc);
    } else {
        uVar2 = func_02067df0(p + 0x2a0, loc);
        uVar2 = -uVar2;
    }
    if ((s32)uVar2 <= 0x8000) {
        goto fc;
    }
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    uVar2 = (u16)(((u32)(u16)uVar2 * 3u) >> 16);
    if (uVar2 == 0) {
        goto c0;
    }
    if (uVar2 == 1) {
        goto c1;
    }
    if (uVar2 != 2) {
        goto fc;
    }
    goto c2;
c0:
    *(u16 *)(p + 0xea) = 0x42e;
    return 1;
c1:
    *(u16 *)(p + 0xea) = 0x42f;
    return 1;
c2:
    *(u16 *)(p + 0xea) = 0x430;
    return 1;
fc:
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    iVar1 = iVar3 * 0x10000;
    *data_0214f464 = iVar3;
    x = (u16)((u32)iVar1 >> 31);
    if (x == 0) {
        goto d0;
    }
    if (x != 1) {
        goto ret0;
    }
    goto d1;
d0:
    *(u16 *)(p + 0xea) = 0x42c;
    return 1;
d1:
    *(u16 *)(p + 0xea) = 0x42d;
    return 1;
ret0:
    return 0;
}
