#pragma avoid_byte strb
#include "ctx.h"

extern u32 *func_02066b80(u32 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020bfe80(u8 *param_1)
{
    u32 *puVar2;
    u8 *iv;
    if ((u32)param_1 == 0) {
        puVar2 = (u32 *)param_1;
    } else {
        *(u32 *)(param_1 + 0x30) = 0;
        *(u32 *)(param_1 + 0x34) = 0;
        *(u32 *)(param_1 + 0x38) = 0;
        puVar2 = func_02066b80((u32 *)(param_1 + 0x3c));
    }
    iv = *(u8 **)(param_1 + 0x18c);
    if (iv == NULL) {
        return;
    }
    *(vu16 *)(iv + 0x20) = *(vu16 *)(iv + 0x20) | 1;
    iv = *(u8 **)(param_1 + 0x18c);
    (u32 *)(u32)SwapByte((u32)(iv[1] | 1), (vu8 *)(iv + 1)); return;
}
