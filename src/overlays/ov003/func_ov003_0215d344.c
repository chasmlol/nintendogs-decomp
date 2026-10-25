#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern s32 data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, int a);
extern void func_02081198(s32 a, int b, void *c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(int v);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0215d344(u8 *param_1)
{
    s32 iVar2;
    s32 *piVar1;
    u32 v;
    u32 nv;
    u16 bit;
    u8 *P;

    P = data_0214f464;
    v = *(u32 *)P;
    nv = v * 0x10dcd + 1;
    *(u32 *)P = nv;
    bit = (u16)(((u32)(nv << 16)) >> 31);
    *(u16 *)(param_1 + 0x152) = (u16)(0x1f0 + bit);
    SwapByte(2, (vu8 *)(param_1 + 151));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 3);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x3f, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x40, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x41, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x42, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x43, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x44, (void *)data_02139ec8[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x45, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x46, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x47, (void *)data_02139eb0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
