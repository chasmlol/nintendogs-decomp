#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline u32 SwapRet(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
    return v;
}

void func_ov003_02166168(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x113;
    SwapByte(1, param_1 + 0x97);
    func_02026bac(param_1);
    func_02025548(param_1);
    SwapRet(1, param_1 + 0xb2); return;
}
