#pragma avoid_byte strb
#include "ctx.h"

void func_020264f4(u8 *p);
void func_020255a4(u8 *p);
void func_02023654(u8 *p, s32 a, s32 b);
void func_0202db24(u8 *p, s32 v);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0216c224(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x18c;
    SwapByte(17, param_1 + 147);
    SwapByte(9, param_1 + 152);
    SwapByte(3, param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 8, 1);
    func_0202db24(param_1, 8);
}
