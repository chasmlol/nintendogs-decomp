#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern s32 func_ov004_0216e508(s32 a);
extern u32 func_02028130(s32 a);

#define FX_Mul(a, b) ((u32)((((s64)(a) * (b)) + 0x800) >> 12))

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov004_0216f620(u8 *param_1)
{
    s32 iVar2;
    T3 loc;
    s32 uVar3;
    u8 *q;
    u32 zero;

    iVar2 = func_ov004_0216e508(*(s16 *)(param_1 + 0xdc));
    if (iVar2 != 0) {
        uVar3 = func_02028130(iVar2);
        loc.w[0] = FX_Mul(uVar3, -24576);
        uVar3 = func_02028130(iVar2);
        loc.w[1] = FX_Mul(uVar3, 24576);
        loc.w[2] = 0x1000;
    } else {
        loc.w[0] = 0xffffa000;
        loc.w[1] = 0x6000;
        loc.w[2] = 0x1000;
    }
    zero = 0;
    q = param_1 + 0xa4;
    *(u32 *)(param_1 + 0xe0) = zero;
    SwapByte(zero, q);
    *(T3 *)(param_1 + 0xa8) = loc;
}
