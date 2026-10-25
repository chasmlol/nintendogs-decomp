#include "ctx.h"

extern u32 func_0206fd3c(void);
extern u32 func_0206fd4c(void);
extern u32 func_0206f0a0(u16 *p2, u32 a, u32 b, u32 c, u32 d);
extern u32 func_0206e820(s32 *p);
extern s32 func_0206ecc0(u16 *p2, u32 a, u32 b, s32 c);
extern s32 func_0206ef64(u16 *p2, u32 a, u32 b, s32 c, u32 d);
extern s32 func_0206ee08(u16 *p2, u32 a, u32 b, s32 c, u32 d);
extern u32 func_0206eba8(u16 *p2, u32 a, u32 b, u16 *c, u32 d);

u32 func_0206da60(s32 *p1, u16 *p2)
{
    s32 iv3;
    s32 uVar5;
    s32 *piVar4;
    u32 bit;
    u32 uVar2;
    u32 t;
    u32 fl;

    iv3 = 0;
    switch (*p1) {
    case 2:
        iv3 = func_0206fd3c();
        t = func_0206fd4c();
        return func_0206f0a0(p2, *(u16 *)(p1 + 2), *(u8 *)(p1 + 3), iv3, t);
    case 4:
    case 6:
        uVar5 = iv3;
        piVar4 = p1 + 0x7e;
        do {
            bit = 1 << uVar5;
            if ((*(u16 *)(p1 + 2) & (u16)bit) != 0) {
                uVar2 = func_0206e820(piVar4);
                if (uVar2 == ~0u) {
                    iv3 = func_0206ecc0(p2, (u16)bit, *(u8 *)(p1 + 3), p1[5]);
                } else {
                    fl = *(u16 *)(p1 + 2);
                    if (*p1 == 4) {
                        iv3 = func_0206ef64(p2, fl, *(u8 *)(p1 + 3), p1[5], uVar2);
                    } else {
                        iv3 = func_0206ee08(p2, fl, *(u8 *)(p1 + 3), p1[5], uVar2);
                    }
                }
                if (iv3 != 0) {
                    return iv3;
                }
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 0x1a;
        } while (uVar5 < 16);
        break;
    case 10:
        return func_0206eba8(p2, *(u16 *)(p1 + 2), *(u8 *)(p1 + 3), (u16 *)(p1 + 5), *((u8 *)p1 + 0x1d));
    default:
        break;
    }
    return iv3;
}
