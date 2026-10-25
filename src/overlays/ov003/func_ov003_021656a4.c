#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02026494(u8 *p);
void func_02025548(u8 *p);
void func_02034198(u8 *p);
void func_ov003_0216df24(u8 *p);

void func_ov003_021656a4(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x17e;
    SwapByte(7, param_1 + 147);
    SwapByte(5, param_1 + 152);
    SwapByte(1, param_1 + 151);
    func_02026494(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_ov003_0216df24(param_1);
}
