#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159428;
extern void func_02026aac(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02028894(u8 *p, u32 *a, u32 *b);
extern s32 func_0206782c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);
extern void func_020340f4(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_021676fc(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 t0, t1;

    *(u16 *)(param_1 + 0x152) = 0x13;
    SwapByte(5, param_1 + 0x93);
    SwapByte(1, param_1 + 0x98);
    func_02026aac(param_1);
    func_02025548(param_1);
    func_02028894(param_1, (u32 *)(param_1 + 0x26c), 0);
    t1 = *(s32 *)(param_1 + 0x274);
    t0 = *(s32 *)(param_1 + 0x26c);
    iVar4 = *(s32 *)(data_02159428 + 0xc);
    iVar3 = func_0206782c(FX_Mul(t0, t0) + FX_Mul(t1, t1));
    iVar3 = func_01ff8958(iVar4 - 0x18000, iVar3);
    *(s32 *)(param_1 + 0x26c) = FX_Mul(iVar3, *(s32 *)(param_1 + 0x26c));
    *(s32 *)(param_1 + 0x274) = FX_Mul(iVar3, *(s32 *)(param_1 + 0x274));
    func_020340f4(param_1);
}
