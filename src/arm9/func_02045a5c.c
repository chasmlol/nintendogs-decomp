#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_02027654(s32 a, u32 *b);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, u32 b);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u32 a);
extern s32 func_020357c8(u8 *p, u32 a);
extern void func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_0204f488(u8 *p, s32 a);
extern void func_0204ec20(u8 *p, s32 a);

void func_02045a5c(u8 *p)
{
    s32 iv3;
    s32 iv4;
    s32 b;
    u16 uVar1;

    iv3 = func_02036578(p);
    if (iv3 != 0) {
        func_02027654(iv3, (u32 *)(p + 0x3b4));
    }
    if (iv3 != 0 && *(u16 *)(p + 0xfc) == 10) {
        func_020362ec(iv3, (s16)(s32)(*(s8 *)(p + 0x88)) * 1);
        func_0202707c(iv3, 0x14);
    }
    func_02035be8(p);
    iv4 = func_020289d0(p, 0, 1);
    if (iv4 != 0) {
        b = 1;
        goto tst;
    }
    iv4 = func_0203592c(p, 0);
    if (iv4 != 0) {
        b = 1;
        goto tst;
    }
    iv4 = func_020357c8(p, 0);
    if (iv4 != 0) {
        b = 1;
        goto tst;
    }
    if (iv3 == 0) {
        func_0202fcc0(p);
        func_020362f8(p);
        b = 1;
    } else {
        b = 0;
    }
tst:
    if (b != 0) {
        return;
    }
    iv3 = func_02036578(p);
    uVar1 = *(u16 *)(p + 0xfc);
    if (uVar1 > 100) {
        func_020362f8(p);
        func_0202fd7c(p);
        return;
    }
    if (iv3 != 0) {
        goto nz;
    }
    func_020362f8(p);
    func_0202fcc0(p);
    return;
nz:
    if (uVar1 == 60) {
        func_0204f488(p, iv3);
        return;
    }
    if (uVar1 == 100) {
        func_0204ec20(p, iv3);
        return;
    }
}
