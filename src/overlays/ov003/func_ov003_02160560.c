#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0214f464[];
extern u8 data_0213b7d0[];
extern u8 data_0215be34[];
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, void *c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

void func_ov003_02160560(u8 *param_1)
{
    u32 *pc;
    u32 cnt;
    u32 *piVar1;
    u32 iVar2;

    *(u16 *)(param_1 + 256 + 82) = 0x6c;
    pc = *(u32 **)data_0214f464;
    cnt = *pc * 0x10dcd + 1;
    *pc = cnt;
    {
        u16 bit = (u16)((u32)(cnt << 16) >> 31);
        *(s16 *)(param_1 + 256 + 84) = (s16)(0x51 + bit);
    }
    param_1[151] = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(s32 *)(data_0213b7d0 + 0x2c));
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x3f, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x40, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x41, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x42, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x43, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x44, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x45, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x46, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x47, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
