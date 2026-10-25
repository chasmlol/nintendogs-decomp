#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0213b7d0;
extern u32 data_0215be34;
extern u32 data_02139ee0;
extern u32 data_02139ec8;
extern u32 data_02139eb0;

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

#define CALLX(N, TBL) \
    { \
        u32 pv_ = *(u32 *)&data_0215be34; \
        u32 v_ = (pv_ != 0) ? *(u32 *)pv_ : 0; \
        func_02081198(v_, N, ((u32 *)&TBL)[*(s8 *)(param_1 + 0x88)]); \
    }

void func_ov003_0215ff48(u8 *param_1)
{
    u32 v;
    u16 b;

    v = *(u32 *)(*(u32 *)&data_0214f464);
    v = v * 0x10dcd + 1;
    *(u32 *)(*(u32 *)&data_0214f464) = v;
    b = (u16)((v << 16) >> 31);
    *(u16 *)(param_1 + 0x152) = (u16)(b + 504);
    SwapByte(4, param_1 + 0x97);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)((u8 *)&data_0213b7d0 + 0x38));
    CALLX(0x3f, data_02139ee0);
    CALLX(0x40, data_02139ee0);
    CALLX(0x41, data_02139ee0);
    CALLX(0x42, data_02139ec8);
    CALLX(0x43, data_02139ec8);
    CALLX(0x44, data_02139ec8);
    CALLX(0x45, data_02139eb0);
    CALLX(0x46, data_02139eb0);
    CALLX(0x47, data_02139eb0);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
