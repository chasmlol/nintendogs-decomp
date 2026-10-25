#pragma avoid_byte strb
#include "ctx.h"
extern u32 func_02036510(u8 *p);
extern void func_02027668(u32 a, s32 *b);
extern void func_02067e34(u8 *a, s32 *b, u8 *c);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, u32 a);
extern void func_02035aa0(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern void func_0202fcc0(u8 *p);

void func_0204559c(u8 *p)
{
    s32 buf[3];
    u32 h = func_02036510(p);
    if (h != 0) {
        func_02027668(h, buf);
        func_02067e34(p + 0x2a0, buf, p + 0x26c);
        func_0203942c(p);
        func_02037450(p, 0x302);
    }
    func_02035aa0(p);
    if (func_020289d0(p, 0, 1) != 0) {
        *(s8 *)(p + 0x8a) = -1;
        return;
    }
    if (h == 0) {
        *(s8 *)(p + 0x8a) = -1;
        func_0202fcc0(p);
        return;
    }
    if (*(u16 *)(p + 0xfc) <= 120)
        return;
    *(s8 *)(p + 0x8a) = -1;
    func_0202fcc0(p);
}
