#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern u32 *data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern void func_02081198(s32 a, s32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov003_0215d140(u8 *param_1)
{
    u32 *piVar2;
    s32 iVar3;
    u8 *q;

    *(u16 *)(param_1 + 0x152) = 79;
    q = data_0214f464;
    iVar3 = *(s32 *)q * 0x10dcd + 1;
    *(s32 *)q = iVar3;
    *(u16 *)(param_1 + 0x154) = (u16)((u16)((u32)(iVar3 << 16) >> 31) + 73);
    SwapByte(2, param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 4);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 63, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 64, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 65, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 66, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 67, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 68, data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 69, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 70, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 71, data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(81);
}
