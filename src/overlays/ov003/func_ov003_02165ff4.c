#pragma avoid_byte strb
#include "ctx.h"

void func_02026bac(u8 *p);
u32 func_02025548(u8 *p);
void func_02034198(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov003_02165ff4(u8 *param_1)
{
    *(vu16 *)(param_1 + 0x152) = 0;
    SwapByte(5, (vu8 *)(param_1 + 147));
    SwapByte(2, (vu8 *)(param_1 + 151));
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    *(u32 *)(param_1 + 0x464) = 1;
}
