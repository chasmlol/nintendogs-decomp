#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u32 *data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern u32 data_0213b7d0;

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}


void func_ov003_02161bd0(u8 *p)
{
    u32 *q;
    u32 x;
    u32 *piv;
    u32 v;

    q = data_0214f464;
    x = *q * 0x10dcd + 1;
    *q = x;
    *(u16 *)(p + 0x152) = (u16)(494 + (u16)((x << 16) >> 31));
    SwapByte(4, (vu8 *)(p + 151));
    func_02026c24(p);
    func_02025548(p);
    func_0202da00(p, data_0213b7d0);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 63, data_02139ee0[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 64, data_02139ee0[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 65, data_02139ee0[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 66, data_02139ec8[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 67, data_02139ec8[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 68, data_02139ec8[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 69, data_02139eb0[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 70, data_02139eb0[*(s8 *)(p + 136)]);
    piv = data_0215be34;
    v = piv != 0 ? *piv : 0;
    func_02081198(v, 71, data_02139eb0[*(s8 *)(p + 136)]);
    func_02023590(p);
    func_020a1a40(81);
}
