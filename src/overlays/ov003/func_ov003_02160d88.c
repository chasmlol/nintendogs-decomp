#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u8 data_0213b7d0[];
extern u8 *data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_02026c24(u8 *);
extern void func_02025548(u8 *);
extern void func_0202da00(u8 *, u32);
extern void func_02081198(s32, s32, void *);
extern void func_02023590(u8 *);
extern void func_020a1a40(s32);

void func_ov003_02160d88(u8 *param_1)
{
    s32 iVar3;
    s32 *piVar2;
    s16 sVar1;

    iVar3 = *data_0214f464 * 0x10dcd + 1;
    {
        u16 t = (u16)(((u32)iVar3 << 16) >> 31);
        sVar1 = (s16)(0x1f2 + t);
    }
    *data_0214f464 = iVar3;
    *(s16 *)(param_1 + 0x152) = sVar1;
    *(u8 *)(param_1 + 151) = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x1c));
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x3f, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x40, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x41, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x42, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x43, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x44, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x45, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x46, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = (s32 *)data_0215be34;
    iVar3 = piVar2 != 0 ? *piVar2 : 0;
    func_02081198(iVar3, 0x47, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
