#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0215be34;
extern u32 data_02139ee0;
extern u32 data_0213b7d0;
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 v);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 v);

void func_ov003_0215f384(u8 *param_1)
{
    u8 *V;
    u32 iVar3;
    u8 *q;
    u32 t;
    u32 bit;
    *(u16 *)(param_1 + 256 + 82) = 107;
    q = param_1 + 151;
    V = *(u8 **)&data_0214f464;
    iVar3 = *(u32 *)V * 0x10dcd + 1;
    *(u32 *)V = iVar3;
    bit = (u16)(((u32)iVar3 << 16) >> 31);
    *(u16 *)(param_1 + 256 + 84) = (u16)(85 + bit);
    *q = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)((u8 *)&data_0213b7d0 + 0x28));
    V = *(u8 **)&data_0215be34;
    t = V != 0 ? *(u32 *)V : 0;
    func_02081198(t, 115, ((u32 *)&data_02139ee0)[(s8)param_1[0x88]]);
    V = *(u8 **)&data_0215be34;
    t = V != 0 ? *(u32 *)V : 0;
    func_02081198(t, 114, ((u32 *)&data_02139ee0)[(s8)param_1[0x88]]);
    V = *(u8 **)&data_0215be34;
    t = 0 != V ? *(u32 *)V : 0;
    func_02081198(t, 116, ((u32 *)&data_02139ee0)[(s8)param_1[0x88]]);
    func_02023590(param_1);
    func_020a1a40(81);
}
