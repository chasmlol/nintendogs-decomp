#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159428;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0202675c(u8 *p);
void func_02025548(u8 *p);
void func_02028894(u8 *p, s32 *a, s32 *b);
s32 func_0206782c(s32 a);
s32 func_01ff8958(s32 a, s32 b);
void func_020340f4(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_021677f0(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;

    *(u16 *)(param_1 + 0x152) = 0x12;
    SwapByte(5, param_1 + 147);
    SwapByte(1, param_1 + 152);
    func_0202675c(param_1);
    func_02025548(param_1);
    func_02028894(param_1, (s32 *)(param_1 + 0x26c), (s32 *)0);
    iVar4 = *(s32 *)((u8 *)data_02159428 + 0xc);
    {
        s32 yv = *(s32 *)(param_1 + 0x274);
        s32 xv = *(s32 *)(param_1 + 0x26c);
        iVar3 = func_0206782c(FX_Mul(xv, xv) + FX_Mul(yv, yv));
    }
    iVar3 = func_01ff8958(iVar4 - 0x18000, iVar3);
    *(s32 *)(param_1 + 0x26c) = FX_Mul(iVar3, *(s32 *)(param_1 + 0x26c));
    *(s32 *)(param_1 + 0x274) = FX_Mul(iVar3, *(s32 *)(param_1 + 0x274));
    func_020340f4(param_1);
}
