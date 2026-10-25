#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0214f464;
extern s32 *data_0215be34;
extern u8 *data_02139ee0[];
extern s32 data_0213b7d0[];
extern void func_02026c24(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, u8 *c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0215fd2c(u8 *param_1)
{
    s32 iVar2;
    s32 *piVar1;
    u16 t;

    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    t = (u16)(((u32)iVar2 << 16) >> 31);
    *(u16 *)(param_1 + 0x152) = (u16)(t + 0x1f0);
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_0202da00(param_1, data_0213b7d0[1]);
    piVar1 = data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x73, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x72, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = piVar1 != 0 ? *piVar1 : 0;
    func_02081198(iVar2, 0x74, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
