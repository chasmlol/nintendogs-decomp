#pragma avoid_byte strb
#include "ctx.h"

extern void *func_ov019_0215ccd8(u8 *p);
extern void func_02066b80(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov019_02160994(u8 *param_1)
{
    u8 *iVar2;

    iVar2 = (u8 *)func_ov019_0215ccd8(param_1);
    if (iVar2 != NULL) {
        *(u32 *)(iVar2 + 0x24) = 0xb36;
        *(u32 *)(iVar2 + 0x28) = 0xb36;
        *(u32 *)(iVar2 + 0x2c) = 0xb36;
    }
    iVar2 = (u8 *)func_ov019_0215ccd8(param_1);
    if (iVar2 != NULL) {
        *(u16 *)(iVar2 + 0x20) = *(u16 *)(iVar2 + 0x20) & ~1;
        SwapByte(*(iVar2 + 1) & ~1, iVar2 + 1);
    }
    func_02066b80(param_1 + 0x48);
    **(u32 **)(param_1 + 0xac) = 0;
    *(*(u32 **)(param_1 + 0xac) + 1) = 0;
}
