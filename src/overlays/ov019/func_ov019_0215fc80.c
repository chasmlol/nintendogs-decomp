#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_ov019_0215ccd8(u8 *p);

static inline void SwapByte(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

void func_ov019_0215fc80(u8 *param_1)
{
    u8 *iVar2;

    iVar2 = func_ov019_0215ccd8(param_1);
    if (iVar2 != NULL) {
        *(u32 *)(iVar2 + 0x24) = 0xe07;
        *(u32 *)(iVar2 + 0x28) = 41;
        *(u32 *)(iVar2 + 0x2c) = 0xe07;
    }
    iVar2 = func_ov019_0215ccd8(param_1);
    if (iVar2 != NULL) {
        *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) & ~1;
        SwapByte(*(u8 *)(iVar2 + 1) & ~1, iVar2 + 1);
    }
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0x6e07;
    *(u32 *)(param_1 + 0x44) = 0xfffe0000;
    *(u32 *)(param_1 + 0x48) = 0x1000;
    *(u32 *)(param_1 + 0x4c) = 0;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    *(u32 *)(param_1 + 0x58) = 0;
    *(u32 *)(param_1 + 0x5c) = 0x1000;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 0x64) = 0xfffff000;
    *(u32 *)(param_1 + 0x68) = 0;
}
