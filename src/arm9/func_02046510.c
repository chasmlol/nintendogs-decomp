#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_020469d0(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);

void func_02046510(u8 *p)
{
    s32 iVar1;
    u32 *ptr;
    u32 uVar2;
    u16 t;

    *(u16 *)(p + 0x12e) = 0xb000;
    iVar1 = func_020469d0(p, 1, 1);
    if (iVar1 != 0) {
        return;
    }
    ptr = *(u32 **)&data_0214f464;
    uVar2 = *ptr * 0x10dcd + 1;
    *ptr = uVar2;
    t = (u16)(((u32)(u16)uVar2 * 100u) >> 16);
    switch (t) {
    case 0:
        func_0203e908(p, 0x2ed);
        return;
    case 1:
        func_0203e908(p, 0x2f6);
        return;
    case 2:
        func_0203e908(p, 0x2f8);
        return;
    }
    return;
}
