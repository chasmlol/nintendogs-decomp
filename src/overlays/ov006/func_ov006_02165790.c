#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u32 func_02038248(void);
extern void func_02025bb0(u8 *p);
extern u8 *func_020364a8(u8 *p);
extern u8 *func_0200c498(u32 a, s32 b);

void func_ov006_02165790(u8 *p)
{
    u8 *obj;
    u8 *q;
    s32 v;
    s32 w;

    *(u16 *)(p + 0x152) = (u16)func_02038248();
    p[171] = 1;
    func_02025bb0(p);
    obj = func_020364a8(p);
    if (obj != 0) {
        q = func_0200c498(*(u32 *)(obj + 0x30), (s16)*(u32 *)(obj + 0x2c));
        if (q != 0) {
            *(T3 *)(p + 0x26c) = *(T3 *)(q + 8);
            v = *(s32 *)(p + 0x26c);
            w = *(s32 *)(p + 0x2a0);
            *(s32 *)(p + 0x26c) = v + (v - w) * 10;
            v = *(s32 *)(p + 0x274);
            w = *(s32 *)(p + 0x2a8);
            *(s32 *)(p + 0x274) = v + (v - w) * 10;
        }
    }
    p[0xb0] &= ~4;
}
