#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_ov019_0215ccd8(u8 *p);
extern void func_ov019_0215d470(u8 *p);

static inline void SwapByte(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

void func_ov019_0215d408(u8 *param_1)
{
    u8 *r0;

    r0 = func_ov019_0215ccd8(param_1);
    if (r0 != 0) {
        *(u32 *)(r0 + 0x24) = 512;
        *(u32 *)(r0 + 0x28) = 4096;
        *(u32 *)(r0 + 0x2c) = 128;
    }
    r0 = func_ov019_0215ccd8(param_1);
    if (r0 != 0) {
        *(u16 *)(r0 + 0x20) = *(u16 *)(r0 + 0x20) & ~1;
        SwapByte(*(r0 + 1) & ~1, r0 + 1);
    }
    func_ov019_0215d470(param_1);
}
