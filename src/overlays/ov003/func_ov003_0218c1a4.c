#include "ctx.h"

extern u8 *data_02159444;
extern u32 *data_0214f464;
extern void func_0202802c(u8 *p, u32 a, s32 b);
extern void func_02027b38(u8 *p, s32 a);
extern void func_02027ee0(u8 *p, u32 a, s32 b);
extern void func_02022134(u8 *p, s8 a, u32 b, u32 c, u32 d);

void func_ov003_0218c1a4(u8 *p, u32 p2)
{
    u8 *o;
    s32 b;
    s32 a;
    u32 v;

    if (((s32)(*(vu16 *)0x04000304 & 0x8000)) >> 15) {
        return;
    }
    o = data_02159444;
    if ((*(u16 *)(o + 0x84) & 1) == 0) {
        return;
    }
    a = *(s32 *)(o + 0x98);
    b = *(s32 *)(o + 0x94);
    if (a <= 0) {
        a = -a;
    }
    if (b <= 0) {
        b = -b;
    }
    if (b + a > 10) {
        *(u16 *)(p + 0x124) = *(u16 *)(p + 0x124) + 1;
        if (*(u16 *)(p + 0x124) >= 600) {
            *(u16 *)(p + 0x124) = 0;
            func_0202802c(p, 0, 25);
            func_0202802c(p, 1, 25);
            func_0202802c(p, 3, -25);
            func_0202802c(p, 4, -25);
        }
        func_02027ee0(p, 1, 30);
        func_02027ee0(p, 2, -3);
        return;
    }
    *(u16 *)(p + 0x128) = *(u16 *)(p + 0x128) + 1;
    if (*(u16 *)(p + 0x128) >= 60) {
        *(u16 *)(p + 0x128) = 0;
        func_02027b38(p, -20);
    }
    *(u16 *)(p + 0x126) = *(u16 *)(p + 0x126) + 1;
    if (*(u16 *)(p + 0x126) >= 600) {
        *(u16 *)(p + 0x126) = 0;
        func_0202802c(p, 0, -25);
        func_0202802c(p, 1, -25);
        func_0202802c(p, 2, 25);
        func_0202802c(p, 3, 25);
        func_0202802c(p, 4, 25);
        v = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = v;
        func_02022134(p, *(s8 *)(p + 0x88), p2, 20, (u16)(((u32)(u16)v * 10u) >> 16) == 0);
    }
    func_02027ee0(p, 1, -10);
    func_02027ee0(p, 5, -10);
    func_02027ee0(p, 2, 1);
}
