#include "ctx.h"

extern s32 func_02036578(u8 *);
extern void func_02027654(s32, u8 *);
extern void func_02035be8(u8 *);
extern s32 func_020289d0(u8 *, s32, s32);
extern void func_0203e908(u8 *, s32);
extern s32 func_020357c8(u8 *, s32);

u32 func_020469d0(u8 *p, s32 p2, s32 p3)
{
    s32 iVar2;
    s32 iVar3;
    s16 x;
    s32 bv;

    iVar2 = func_02036578(p);
    if (iVar2 != 0 && p3 != 0) {
        func_02027654(iVar2, p + 0x3b4);
    }
    func_02035be8(p);
    iVar3 = func_020289d0(p, 0xf, 0);
    if (iVar3 != 0) {
        func_0203e908(p, (s16)(p2 + 0x2f9));
        return 1;
    }
    iVar3 = func_020357c8(p, 0);
    if (iVar3 != 0) {
        return 1;
    }
    if (iVar2 != 0) {
        x = *(s16 *)(iVar2 + 0xea);
        if (x < 0x2cd) goto zero;
        if (x <= 0x2d7) {
            bv = 1;
            goto test;
        }
zero:
        bv = 0;
test:
        if (bv) {
            goto f4;
        }
    }
    func_0203e908(p, (s16)(p2 + 0x2f9));
    return 1;
f4:
    if (*(s16 *)(p + 0xfa) != 0x1f) {
        return 0;
    }
    func_0203e908(p, (s16)(p2 + 0x2fb));
    *(u16 *)(p + 0xfa) = 0;
    return 1;
}
