#pragma avoid_byte strb
#include "ctx.h"

extern int func_ov019_0215ccd8(int a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov019_0215fb5c(int param_1)
{
    int iVar2;


    iVar2 = func_ov019_0215ccd8(param_1);

    if (iVar2 != 0) {
        *(u32 *)(iVar2 + 0x24) = 0x503;
        *(u32 *)(iVar2 + 0x28) = 0x400;
        *(u32 *)(iVar2 + 0x2c) = 0x503;
    }
    iVar2 = func_ov019_0215ccd8(param_1);
    if (iVar2 != 0) {
        ((u16 *)iVar2)[16] = ((u16 *)iVar2)[16] & ~1;
        SwapByte(((u8 *)iVar2)[1] & ~1, (vu8 *)((u8 *)iVar2 + 1));
    }
    *(u32 *)(param_1 + 0x3c) = 0;
    *(u32 *)(param_1 + 0x40) = 0x6000;
    *(u32 *)(param_1 + 0x44) = 0xfffe159f;
    *(u32 *)(param_1 + 0x48) = 0x1000;
    *(u32 *)(param_1 + 0x4c) = 0;
    *(u32 *)(param_1 + 0x50) = 0;
    *(u32 *)(param_1 + 0x54) = 0;
    *(u32 *)(param_1 + 0x58) = 0xfffff000;
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 0x64) = 0;
    *(u32 *)(param_1 + 0x68) = 0xfffff000;
}
