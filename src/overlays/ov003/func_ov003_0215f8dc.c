#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u32 *data_0215be34;
extern u32 data_02139ee0[];
extern u8 data_0213b7d0[];

void func_02026c24(u8 *p);
void func_02025548(u8 *p);
void func_0202da00(u8 *p, u32 a);
void func_02081198(u32 a, u32 b, u32 c);
void func_02023590(u8 *p);
void func_020a1a40(u32 a);

void func_ov003_0215f8dc(u8 *param_1)
{
    u32 t;
    u32 iVar2;
    u8 old;
    u8 v;
    vu8 *ap;

    *(u16 *)(param_1 + 0x152) = 77;
    t = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = t;
    *(u16 *)(param_1 + 0x154) = (u16)((u16)((u32)(t << 16) >> 31) + 73);
    v = 4;
    ap = (vu8 *)(param_1 + 151);
    *(u8 *)(ap) = (u8)(v);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x14));
    iVar2 = (data_0215be34 != 0) ? *data_0215be34 : 0;
    func_02081198(iVar2, 0x73, data_02139ee0[(s8)param_1[0x88]]);
    iVar2 = (data_0215be34 != 0) ? *data_0215be34 : 0;
    func_02081198(iVar2, 0x72, data_02139ee0[(s8)param_1[0x88]]);
    iVar2 = (data_0215be34 != 0) ? *data_0215be34 : 0;
    func_02081198(iVar2, 0x74, data_02139ee0[(s8)param_1[0x88]]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
