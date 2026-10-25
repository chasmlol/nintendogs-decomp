#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213b7d0[];
extern s32 *data_0215be34;
extern u8 data_02139f10[];
extern u8 data_02139ea4[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern void func_02081198(s32 a, s32 b, u8 *c);
extern void func_0209eeec(s32 a, s32 b);
extern void func_02023590(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_02163a28(u8 *param_1)
{
    s32 *piVar1;
    s32 iVar2;
    s32 idx;

    *(u16 *)(param_1 + 0x152) = 0x68;
    *(u16 *)(param_1 + 0x154) = 7;
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(s32 *)(data_0213b7d0 + 0x1c));
    idx = *(s8 *)(param_1 + 0x88);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0xf, *(u8 **)(data_02139f10 + idx * 4));
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x10, *(u8 **)(data_02139ea4 + *(s8 *)(param_1 + 0x88) * 4));
    func_0209eeec(0x1e, 0x7f);
    func_02023590(param_1);
}
