#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0213b7d0;
extern u32 data_0215be34;
extern u32 data_02139ee0;
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(s32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0215f270(u8 *param_1)
{
    s32 *piVar1;
    s32 iVar2;
    u32 *P;

    *(u16 *)(param_1 + 0x152) = 108;
    P = *(u32 **)&data_0214f464;
    iVar2 = *(s32 *)P * 0x10dcd + 1;
    *P = iVar2;
    *(u16 *)(param_1 + 0x154) = (u16)((u16)(((u32)iVar2 << 16) >> 31) + 81);
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)((u8 *)&data_0213b7d0 + 0x2c));
    piVar1 = *(s32 **)&data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 115, ((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 136)]);
    piVar1 = *(s32 **)&data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 114, ((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 136)]);
    piVar1 = *(s32 **)&data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 116, ((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 136)]);
    func_02023590(param_1);
    func_020a1a40(81);
}
