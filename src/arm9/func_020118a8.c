#include "ctx.h"

extern u32 *data_0214f464;

extern void func_02022b7c(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 a);

void func_020118a8(u8 *p)
{
    s32 b4;
    s32 b1;
    s32 t;
    s32 t2;
    u8 *iv;
    u32 u;

    func_02022b7c(p);
    b4 = (*(u8 *)(p + 0xa4) != 0);
    if (b4) {
        b4 = (func_02022dec(p, *(s16 *)(p + 0xf2), *(u8 *)(p + 0xa6)) != 0);
    }
    iv = func_0203541c(p);
    if (iv == 0) {
        goto zero;
    }
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
    t = func_ov003_02198298(p);
    goto have_t;
zero:
    t = 0;
have_t:
    if (t != 0) {
        b1 = 1;
        goto chk;
    }
    t2 = func_020289d0(p, 13, 0);
    if (t2 != 0) {
        b1 = 1;
        goto chk;
    }
    if (b4 != 0) {
        goto zero1;
    }
    if (func_0202cd10(p, 13) != 0) {
        b1 = 1;
        goto chk;
    }
zero1:
    b1 = 0;
chk:
    if (b1) {
        return;
    }
    if (*(u16 *)(p + 0xfc) <= 100) {
        return;
    }
    u = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = u;
    if ((u16)((((u32)(u16)u) * 100) >> 16) == 0) {
        func_0203e908(p, 13);
    }
}
