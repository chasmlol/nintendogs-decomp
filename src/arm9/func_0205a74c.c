#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_02025c5c(u8 *p);
extern void func_02023654(u8 *p, s32 a, s32 b);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_0205a74c(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 0x12;
    SwapByte(7, (vu8 *)(param_1 + 147));
    func_0202675c(param_1);
    func_02025c5c(param_1);
    func_02023654(param_1, 0x36, 1);
}
