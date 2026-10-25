#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;

extern void func_02022b7c(u8 *p);
extern s32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern s32 func_0202c5d8(u8 *p, s32 a);
extern s32 func_02029b7c(u8 *p, s32 a, s32 b, s32 c);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_021883cc(u8 *p)
{
    s32 fire;
    s32 r;
    s32 busy;
    u32 x;

    fire = 0;
    if (*(u16 *)(p + 0xfc) > 60) {
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        if ((u16)(((u32)(u16)x * 30) >> 16) == 0)
            fire = 1;
    }
    func_02022b7c(p);
    r = func_02026e68(p);
    func_ov003_0218c050(p, r);
    *(u16 *)(p + 0x11c) = 1;
    *(u16 *)(p + 0x11e) = 0;
    if (r != 0)
        p[185] = 1;
    else
        p[185] = 0;
    if (func_0202c5d8(p, 3) != 0) {
        busy = 1;
        goto test;
    }
    busy = func_02029b7c(p, 3, 31, 0) != 0;
test:
    if (busy)
        return;
    if (!fire)
        return;
    func_0203e908(p, 368);
}
