#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_02159428;
extern void func_02026638(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02028894(u8 *p, u8 *q, u32 r);
extern s32 func_0206782c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);
extern void func_020340f4(u8 *p);

void func_ov003_021678e4(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 x;
    s32 y;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 16;
    param_1[147] = 5;
    param_1[151] = 2;
    func_02026638(param_1);
    func_02025548(param_1);
    func_02028894(param_1, param_1 + 620, 0);
    y = *(s32 *)(param_1 + 0x274);
    x = *(s32 *)(param_1 + 0x26c);
    iVar4 = *(s32 *)(*(u8 **)&data_02159428 + 0xc);
    iVar3 = func_0206782c(FX_Mul(x, x) + FX_Mul(y, y));
    iVar3 = func_01ff8958(iVar4 - 0x18000, iVar3);
    *(s32 *)(param_1 + 0x26c) = FX_Mul(iVar3, *(s32 *)(param_1 + 0x26c));
    *(s32 *)(param_1 + 0x274) = FX_Mul(iVar3, *(s32 *)(param_1 + 0x274));
    func_020340f4(param_1);
}
