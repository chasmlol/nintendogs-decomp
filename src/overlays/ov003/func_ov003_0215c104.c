#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_0214f464;
extern u32 data_0215be34;
extern u32 data_02139ee0;
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, u32 v);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 v);

void func_ov003_0215c104(u8 *param_1)
{
    u8 *V;
    u32 iVar3;
    u32 t;
    V = *(u8 **)&data_0214f464;
    iVar3 = *(u32 *)V * 0x10dcd + 1;
    *(u32 *)V = iVar3;
    t = (((u32)(iVar3 << 16) >> 31) << 16);
    *(u16 *)(param_1 + 256 + 82) = (u16)(0x1f6 + (t >> 16));
    *(u8 *)(param_1 + 151) = 2;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 7);
    V = *(u8 **)&data_0215be34;
    t = V != 0 ? *(u32 *)V : 0;
    func_02081198(t, 115, ((u32 *)&data_02139ee0)[(s8)param_1[0x88]]);
    V = *(u8 **)&data_0215be34;
    t = V != 0 ? *(u32 *)V : 0;
    func_02081198(t, 114, ((u32 *)&data_02139ee0)[(s8)param_1[0x88]]);
    V = *(u8 **)&data_0215be34;
    t = V != 0 ? *(u32 *)V : 0;
    func_02081198(t, 116, ((u32 *)&data_02139ee0)[(s8)param_1[0x88]]);
    func_02023590(param_1);
    func_020a1a40(81);
}
