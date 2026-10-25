#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;

extern void func_02022b7c(u8 *p);
extern u32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, u32 a);
extern u32 func_0202c5d8(u8 *p, u32 a);
extern u32 func_02029b7c(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_021884d4(u8 *p)
{
    s32 bVar5;
    s32 bVar1;
    u32 iv;
    u32 v;
    u32 r;

    bVar5 = 0;
    if (*(u16 *)(p + 0xfc) > 60) {
        v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        if ((u16)((((u32)(u16)v) * 30) >> 16) == 0) {
            bVar5 = 1;
        }
    }
    func_02022b7c(p);
    iv = func_02026e68(p);
    func_ov003_0218c050(p, iv);
    *(u16 *)(p + 0x11c) = 1;
    *(u16 *)(p + 0x11e) = 0;
    if (iv != 0) {
        p[0xb9] = 1;
    } else {
        p[0xb9] = 0;
    }
    r = func_0202c5d8(p, 3);
    if (r != 0) {
        bVar1 = 1;
        goto J;
    }
    r = func_02029b7c(p, 3, 31, 0);
    bVar1 = (r != 0);
J:
    if (bVar1 != 0) {
        return;
    }
    if (bVar5 == 0) {
        return;
    }
    func_0203e908(p, 0x16f);
}
