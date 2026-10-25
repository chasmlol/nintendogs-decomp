#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159428;

u32 func_020382d8(u8 *p);
void func_02026994(u8 *p);
void func_02025548(u8 *p);
void func_02028894(u8 *p, u32 *a, u32 *b);
s32 func_0206782c(s32 a);
s32 func_01ff8958(s32 a, s32 b);
void func_020340f4(u8 *p);

void func_ov003_02167604(u8 *param_1)
{
    s32 iVar5;
    s32 iVar4;
    u32 uVar3;
    s32 bv;
    s32 av;

    uVar3 = func_020382d8(param_1);
    *(u16 *)(param_1 + 256 + 82) = (u16)uVar3;
    param_1[147] = 5;
    param_1[152] = 1;
    func_02026994(param_1);
    func_02025548(param_1);
    func_02028894(param_1, (u32 *)(param_1 + 0x26c), (u32 *)0);
    bv = *(s32 *)(param_1 + 0x274);
    av = *(s32 *)(param_1 + 0x26c);
    iVar5 = *(s32 *)(data_02159428 + 0xc);
    iVar4 = func_0206782c((s32)(((s64)av * av + 0x800) >> 12) + (s32)(((s64)bv * bv + 0x800) >> 12));
    iVar4 = func_01ff8958(iVar5 - 0x18000, iVar4);
    *(s32 *)(param_1 + 0x26c) = (s32)(((s64)iVar4 * *(s32 *)(param_1 + 0x26c) + 0x800) >> 12);
    *(s32 *)(param_1 + 0x274) = (s32)(((s64)iVar4 * *(s32 *)(param_1 + 0x274) + 0x800) >> 12);
    func_020340f4(param_1);
}
