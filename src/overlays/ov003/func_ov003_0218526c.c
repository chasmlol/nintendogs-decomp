#include "ctx.h"

extern u8 *data_0215942c;

extern void func_020393d8(u8 *p, u32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_02035770(u8 *p, u32 a);
extern void func_02022b7c(u8 *p);
extern s32 func_0202c3e0(u8 *p, u32 a);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_0218526c(u8 *p)
{
    s32 v;
    s32 bVar2;
    s32 iv;

    func_020393d8(p, 0xfe57);
    v = *(s16 *)(p + 0x152);
    bVar2 = 0;
    switch (v) {
    case 0x191:
    case 0x192:
        if (func_0203567c(p) != 0) {
            func_0203e8cc(p, 0, 0x193);
        }
        break;
    case 0x193:
        if (func_02035770(p, 1) != 0) {
            bVar2 = 1;
        }
        break;
    }
    func_02022b7c(p);
    if (func_0202c3e0(p, 2) != 0) {
        return;
    }
    if (!bVar2) {
        return;
    }
    if (*(u16 *)data_0215942c == 1 || *(u16 *)data_0215942c == 4) {
        func_0203e908(p, 0x3ab);
        return;
    }
    iv = func_020385e4(p);
    switch (iv) {
    case 0:
        func_0203e908(p, 0x3ab);
        return;
    case 1:
        func_0203e908(p, 0x3ad);
        return;
    case 2:
        func_0203e908(p, 0x3ae);
        return;
    case 3:
        func_0203e908(p, 0x3af);
        return;
    }
}
