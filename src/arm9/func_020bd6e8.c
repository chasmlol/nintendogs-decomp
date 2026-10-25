#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0209c710(u8 *p);

void func_020bd6e8(u8 *param_1)
{
    void (*cb)(u8 *);
    u8 *iVar1;

    if (param_1 == 0) {
        return;
    }
    cb = *(void (**)(u8 *))(param_1 + 0x1f0);
    if (cb != 0) {
        cb(param_1);
    }
    *(s16 *)(param_1 + 0x94) = -1;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 1;
    SwapByte(*(u8 *)(param_1 + 1) | 1, param_1 + 1);
    iVar1 = *(u8 **)(param_1 + 0x18c);
    if (iVar1 != 0) {
        *(u16 *)(iVar1 + 0x20) = *(u16 *)(iVar1 + 0x20) | 1;
        SwapByte(*(u8 *)(*(u8 **)(param_1 + 0x18c) + 1) | 1, *(u8 **)(param_1 + 0x18c) + 1);
    }
    *(s16 *)(param_1 + 0x90) = 0;
    *(s16 *)(param_1 + 0x8a) = 0;
    *(s16 *)(param_1 + 0x98) = -1;
    *(s16 *)(param_1 + 0x8c) = -1;
    *(s16 *)(param_1 + 0x9a) = -1;
    *(s16 *)(param_1 + 0x8e) = -1;
    *(s16 *)(param_1 + 0x9c) = -1;
    *(s16 *)(param_1 + 0x9e) = 0;
    *(u32 *)(param_1 + 0x1f4) = 0;
    *(u32 *)(param_1 + 0x1f8) = 0;
    *(u32 *)(param_1 + 0x1fc) = 0;
    *(u32 *)(param_1 + 0x1f0) = 0;
    *(u32 *)(param_1 + 0x208) = 0;
    *(u32 *)(param_1 + 0x20c) = 0;
    *(u32 *)(param_1 + 0x214) = 0;
    func_0209c710(param_1 + 400);
    iVar1 = *(u8 **)(param_1 + 0x1e0);
    if (iVar1 != 0) {
        *(u32 *)(iVar1 + 0x1c) = (*(u32 *)(iVar1 + 0x1c) & ~1) | 1;
        *(u32 *)(param_1 + 0x1e0) = 0;
    }
}
