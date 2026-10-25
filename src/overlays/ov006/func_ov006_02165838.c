#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u16 func_02038290(void);
extern void func_02025bb0(u8 *p);
extern u8 *func_020364a8(u8 *p);
extern u8 *func_0200c498(u32 a, s32 b);

void func_ov006_02165838(u8 *p)
{
    u8 *obj;
    u8 *res;
    *(u16 *)(p + 0x152) = func_02038290();
    *(u8 *)(p + 0xab) = 1;
    func_02025bb0(p);
    obj = func_020364a8(p);
    if (obj != 0) {
        res = func_0200c498(*(u32 *)(obj + 0x30), (s16)*(u32 *)(obj + 0x2c));
        if (res != 0) {
            *(T3 *)(p + 0x26c) = *(T3 *)(res + 8);
            *(s32 *)(p + 0x26c) = (*(s32 *)(p + 0x26c) - *(s32 *)(p + 0x2a0)) * 10 + *(s32 *)(p + 0x26c);
            *(s32 *)(p + 0x274) = (*(s32 *)(p + 0x274) - *(s32 *)(p + 0x2a8)) * 10 + *(s32 *)(p + 0x274);
        }
    }
    *(u8 *)(p + 0xb0) &= ~4;
}
