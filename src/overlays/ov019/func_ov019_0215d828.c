#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_ov019_0215ccd8(u8 *p);
extern void func_ov019_0215d890(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov019_0215d828(u8 *param_1)
{
    u8 *iVar1;

    iVar1 = func_ov019_0215ccd8(param_1);
    if (iVar1 != NULL) {
        *(u32 *)(iVar1 + 0x24) = 0x100;
        *(u32 *)(iVar1 + 0x28) = 0x1000;
        *(u32 *)(iVar1 + 0x2c) = 0x40;
    }
    iVar1 = func_ov019_0215ccd8(param_1);
    if (iVar1 != NULL) {
        *(u16 *)(iVar1 + 0x20) = *(u16 *)(iVar1 + 0x20) & ~1;
        SwapByte(iVar1[1] & ~1, (vu8 *)(iVar1 + 1));
    }
    func_ov019_0215d890(param_1);
}
