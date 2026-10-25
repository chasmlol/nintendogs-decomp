#pragma avoid_byte strb
#include "ctx.h"

extern s32 data_0214f464;
extern s32 data_0213b7d0;
extern s32 data_0215be34;
extern s32 data_02139ee0;
extern s32 data_02139ec8;
extern s32 data_02139eb0;
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern void func_02081198(s32 a, s32 b, void *c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);



void func_ov003_02160b84(u8 *param_1)
{
    s32 iVar2;
    s32 *piVar1;
    s32 *P;
    s32 kk;

    P = *(s32 **)&data_0214f464;
    kk = 0x10dcd;
    iVar2 = *P;
    iVar2 = iVar2 * kk + 1;
    *P = iVar2;
    *(s16 *)(param_1 + 0x152) = 500 + (u16)(((u32)iVar2 << 16) >> 31);
    *(u8 *)(param_1 + 151) = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(s32 *)((u8 *)&data_0213b7d0 + 0x20));
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x3f, (void *)((s32 *)&data_02139ee0)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x40, (void *)((s32 *)&data_02139ee0)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x41, (void *)((s32 *)&data_02139ee0)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x42, (void *)((s32 *)&data_02139ec8)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x43, (void *)((s32 *)&data_02139ec8)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x44, (void *)((s32 *)&data_02139ec8)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x45, (void *)((s32 *)&data_02139eb0)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x46, (void *)((s32 *)&data_02139eb0)[*(s8 *)(param_1 + 0x88)]);
    piVar1 = (s32 *)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x47, (void *)((s32 *)&data_02139eb0)[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
