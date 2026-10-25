#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_common_subs off

extern u8 data_0212eaf4[];
extern u8 data_0213eac4[];
extern u8 data_0213eac8[];
extern u8 data_0213eac0[];
extern u8 data_0213eadc[];
extern u8 data_0213eae8[];
extern u8 data_0213eaf8[];

static inline void SwapByte(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

extern void func_0205f050(u8 *d, u32 n, u8 *s, u32 a, ...);
extern u32 func_0208c720(u8 *p1, u8 *a, u8 *b);
extern u32 func_0207df48(u8 *s);
extern u32 func_02006b78(u32 a);
extern void func_0207df9c(u32 a);

void func_0208b604(u8 *p1, u32 p2, u32 p3, u32 *p4)
{
    u8 b1[6];
    u8 b2[64];
    u32 r6;
    u8 *ptr;
    u32 off;
    u8 *pb2;

    off = p2 * 12;
    ptr = data_0213eac0;
    func_0205f050(b1, 6, data_0213eac4, *(u32 *)(data_0212eaf4 + off));
    pb2 = b2;
    {
        u32 t;
        t = b1[4];
        SwapByte(t + p3, (vu8 *)&b1[4]);
    }
    func_0205f050(pb2, 64, data_0213eac8, (u32)b1);
    p4[0] = 0;
    p4[1] = 0;
    p4[2] = 0;
    r6 = func_0208c720(p1, ptr, b2);
    func_0205f050(b2, 64, data_0213eadc, (u32)ptr, (u32)b1);
    p4[0] = func_0207df48(b2);
    func_0205f050(b2, 64, data_0213eae8, (u32)ptr, (u32)b1);
    p4[1] = func_0207df48(b2);
    func_0205f050(b2, 64, data_0213eaf8, (u32)ptr, (u32)b1);
    p4[2] = func_02006b78(func_0207df48(b2));
    func_0207df9c(r6);
}
