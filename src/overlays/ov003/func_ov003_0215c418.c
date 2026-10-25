#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapByte(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

extern u32 *data_0214f464;
extern u32 *data_0215be34;
extern u32 data_02139ee0[];

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

void func_ov003_0215c418(u8 *p)
{
    u32 v;

    *(u16 *)(p + 0x152) = 79;
    v = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = v;
    *(u16 *)(p + 0x154) = 73 + (u16)(((u32)v << 16) >> 31);
    SwapByte(2, (vu8 *)(p + 151));
    func_020264f4(p);
    func_020255a4(p);
    func_0202da00(p, 4);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x73, data_02139ee0[(s8)p[136]]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x72, data_02139ee0[(s8)p[136]]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x74, data_02139ee0[(s8)p[136]]);
    func_02023590(p);
    func_020a1a40(0x51);
}
