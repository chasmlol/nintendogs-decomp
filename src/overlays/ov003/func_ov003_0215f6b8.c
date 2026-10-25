#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u8 data_0213b7d0[];
extern u32 *data_0215be34;
extern u32 data_02139ee0[];
extern void func_02026c24(u32 p);
extern void func_02025548(u32 p);
extern void func_0202da00(u32 p, u32 q);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u32 p);
extern void func_020a1a40(u32 v);

void func_ov003_0215f6b8(u32 param_1)
{
    s32 iVar3;
    s32 sVar1;
    u32 *piVar2;

    sVar1 = 0x1f2;
    iVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar3;
    *(u16 *)((u8 *)param_1 + 256 + 82) = (u16)(sVar1 + (u16)(((u32)iVar3 << 16) >> 31));
    *(u8 *)(param_1 + 151) = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x1c));
    piVar2 = data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x73, data_02139ee0[*(s8 *)(param_1 + 136)]);
    piVar2 = data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x72, data_02139ee0[*(s8 *)(param_1 + 136)]);
    piVar2 = data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x74, data_02139ee0[*(s8 *)(param_1 + 136)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
