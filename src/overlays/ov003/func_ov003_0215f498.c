#pragma avoid_byte strb
#include "ctx.h"

static inline u32 SwapByte(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

extern u32 *data_0214f464;
extern int *data_0215be34;
extern u8 data_0213b7d0[];
extern u32 data_02139ee0[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

void func_ov003_0215f498(u8 *param_1)
{
    u32 *lr;
    u32 iVar2;
    int *piVar1;

    *(u16 *)(param_1 + 0x152) = 0x6a;
    lr = data_0214f464;
    iVar2 = *lr * 0x10dcd + 1;
    *lr = iVar2;
    *(u16 *)(param_1 + 0x154) = 0x51 + (u16)((u32)(iVar2 << 16) >> 31);
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x24));
    piVar1 = data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x73, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x72, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = data_0215be34;
    iVar2 = piVar1 ? *piVar1 : 0;
    func_02081198(iVar2, 0x74, data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
