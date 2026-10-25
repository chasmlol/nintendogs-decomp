#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u8 data_0213b7d0[];
extern u32 data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_02026c24(s32 a);
extern void func_02025548(s32 a);
extern void func_0202da00(s32 a, u32 b);
extern void func_02081198(s32 a, s32 b, u32 c);
extern void func_02023590(s32 a);
extern void func_020a1a40(s32 a);

void func_ov003_0216076c(s32 param_1)
{
    s32 *piVar1;
    u16 bit;
    u8 *pBase;
    u32 iVar2;

    *(u16 *)((u8 *)param_1 + 0x152) = 0x6b;
    piVar1 = (s32 *)data_0214f464;
    iVar2 = *piVar1 * 0x10dcd + 1;
    *piVar1 = iVar2;
    pBase = (u8 *)param_1 + 0x100;
    bit = ((iVar2 << 16) >> 31);
    *(s16 *)(0x54 + pBase) = bit + 0x55;
    *(vu8 *)(param_1 + 0x97) = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(0x28 + data_0213b7d0));
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x3f, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = 0 != piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x40, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x41, data_02139ee0[*(s8 *)(0x88 + param_1)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x42, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x43, data_02139ec8[*(s8 *)(0x88 + param_1)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x44, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x45, data_02139eb0[*(s8 *)(0x88 + param_1)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x46, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = 0 != piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x47, data_02139eb0[*(s8 *)(0x88 + param_1)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
