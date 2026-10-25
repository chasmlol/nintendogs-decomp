#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern s32 *data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_0213b7d0[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 n);
extern void func_02081198(s32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

void func_ov003_0215f04c(u8 *param_1)
{
    s32 iVar3;
    s32 *piVar2;
    u16 bit;

    iVar3 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar3;
    bit = (u16)((u32)(iVar3 << 16) >> 31);
    *(u16 *)(param_1 + 256 + 82) = 0x1f6 + bit;
    param_1[151] = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)((u8 *)data_0213b7d0 + 0x34));
    piVar2 = data_0215be34;
    func_02081198(piVar2 != 0 ? *piVar2 : 0, 0x73, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    func_02081198(piVar2 != 0 ? *piVar2 : 0, 0x72, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    func_02081198(piVar2 != 0 ? *piVar2 : 0, 0x74, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
