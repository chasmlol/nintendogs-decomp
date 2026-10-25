#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0215be34;
extern u32 data_02139ee0;
extern u32 data_0213b7d0;

void func_02026c24(u8 *p);
void func_02025548(u8 *p);
void func_0202da00(u8 *p, s32 a);
void func_02081198(s32 a, s32 b, u32 c);
void func_02023590(u8 *p);
void func_020a1a40(s32 a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_ov003_0215fe38(u8 *param_1)
{
    s32 iVar2;
    s32 a0;
    u16 t16;

    iVar2 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar2;
    t16 = (u16)((u32)(iVar2 * 0x10000) >> 31);
    *(u16 *)(param_1 + 0x152) = t16 + 0x1ee;
    SwapByte(4, param_1 + 151);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, data_0213b7d0);
    a0 = data_0215be34 ? *(s32 *)data_0215be34 : 0;
    func_02081198(a0, 0x73, ((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 0x88)]);
    a0 = data_0215be34 ? *(s32 *)data_0215be34 : 0;
    func_02081198(a0, 0x72, ((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 0x88)]);
    a0 = data_0215be34 ? *(s32 *)data_0215be34 : 0;
    func_02081198(a0, 0x74, ((u32 *)&data_02139ee0)[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
