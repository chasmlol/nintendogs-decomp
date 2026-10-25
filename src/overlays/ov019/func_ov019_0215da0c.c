#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_ov019_0215ccd8(u8 *p);
extern void func_ov019_0215da68(u8 *p);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov019_0215da0c(u8 *param_1)
{
    u8 *iVar1;
    iVar1 = func_ov019_0215ccd8(param_1);
    if (iVar1 != 0) {
        *(u32 *)(iVar1 + 0x24) = 0x1000;
        *(u32 *)(iVar1 + 0x28) = 0x1000;
        *(u32 *)(iVar1 + 0x2c) = 0x1000;
    }
    iVar1 = func_ov019_0215ccd8(param_1);
    if (iVar1 != 0) {
        *(u16 *)(iVar1 + 0x20) = *(u16 *)(iVar1 + 0x20) & ~1;
        SwapByte(*(iVar1 + 1) & ~1, iVar1 + 1);
    }
    func_ov019_0215da68(param_1);
}
