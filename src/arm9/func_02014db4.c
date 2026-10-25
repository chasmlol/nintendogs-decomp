#include "ctx.h"

extern u32 *data_0214f464;

extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0202fd8c(u8 *p, u32 a);
extern s32 func_02027f78(u8 *p, u32 a);
extern void func_02027f40(u8 *p, u32 a, u32 b);
extern void func_0203e908(u8 *p, u32 a);

void func_02014db4(u8 *p, s32 p2)
{
    u8 *iv;
    s32 r;
    s32 bv;
    u32 v;
    s32 t;

    *(u16 *)(p + 0x108) = *(u16 *)(p + 0x108) + 1;
    iv = func_0203541c(p);
    if (iv == 0) goto Jzero;
    func_0203e8cc(p, 2, 1);
    switch (*(s16 *)(iv + 0x90)) {
    case 4:
        if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
            *(u32 *)(p + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
            *(u32 *)(p + 0x948) = 8;
        }
        break;
    }
    r = func_ov003_02198298(p);
    goto J94;
Jzero:
    r = 0;
J94:
    if (r != 0) {
        bv = 1;
        goto Jd8;
    }
    r = func_020289d0(p, p2, 0);
    if (r != 0) {
        bv = 1;
        goto Jd8;
    }
    bv = (func_0202cd10(p, (s16)p2) != 0);
Jd8:
    if (bv) {
        *(u16 *)(p + 0x108) = 0;
        return;
    }
    if (*(u16 *)(p + 0xfc) > 300) {
        v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        if ((u16)((((u32)(u16)v) * 100) >> 16) == 0) {
            func_0202fd8c(p, (s16)p2);
            return;
        }
    }
    t = func_02027f78(p, 0);
    if (*(u16 *)(p + 0x108) <= ((10000 - t) >> 2)) {
        return;
    }
    *(u16 *)(p + 0x108) = 0;
    func_02027f40(p, 0, 10000);
    func_0203e908(p, (s16)(p2 + 0x4c));
}
