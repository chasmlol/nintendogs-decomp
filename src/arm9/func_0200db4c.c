#include "ctx.h"

extern s32 func_02036484(u8 *p);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 v);
extern BOOL func_02032aac(u8 *p, s32 v);
extern s32 func_01ffdb08(s32 v);
extern void func_02027668(s32 a, s32 *b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern BOOL func_02009f38(s32 *a, s32 *b);
extern BOOL func_020289d0(u8 *p, s32 a, s32 b);
extern BOOL func_02022e14(u8 *p, s32 a);
extern u8 func_02029504(u8 *p);
extern BOOL func_0203592c(u8 *p, s32 a);
extern void func_020362ec(u8 *p, s32 a);
extern u32 func_020557dc(u8 *p, s32 a);
extern u32 func_0202fd7c(u8 *p);
extern u64 func_0202fa08(u8 *p);

struct T12 { s32 a, b, c; };

u32 func_0200db4c(u8 *p)
{
    s32 uVar9;
    int iv8;
    s32 iv;
    s8 r7;
    s32 buf[3];
    u32 t;

    iv = func_02036484(p);
    uVar9 = -1;
    iv8 = 0;
    if (iv != 0) {
        *(struct T12 *)(p + 0x26c) = *(struct T12 *)(iv + 8);
        func_0203942c(p);
        func_02037450(p, 0x302);
    }
    r7 = 0;
    do {
        if (func_02032aac(p, r7)) {
            iv8 = func_01ffdb08(r7);
            if (0 != iv8) {
                func_02027668(iv8, buf);
                func_02067e34(buf, (s32 *)(p + 0x2a0), buf);
                if (func_02009f38(buf, (s32 *)(p + 0x1a4))) {
                    uVar9 = r7;
                    break;
                }
            }
        }
        r7 = r7 + 1;
    } while (r7 < 3);
    t = func_020289d0(p, 0, 1);
    if (t != 0) {
        if (!func_02022e14(p, 0x28)) {
            if (!(t = func_02022e14(p, 0x29))) {
                return t;
            }
        }
        return func_02029504(p);
    }
    if (func_0203592c(p, 0)) {
        if (!func_02022e14(p, 0x28)) {
            if (!(t = func_02022e14(p, 0x29))) {
                return t;
            }
        }
        return func_02029504(p);
    }
    if (-1 != uVar9) {
        if (func_02022e14(p, 0x28) || func_02022e14(p, 0x29)) {
            func_02029504(p);
        }
        func_020362ec(p, (s16)uVar9);
        return func_020557dc(p, iv8);
    }
    if (0 == iv) {
        if (func_02022e14(p, 0x28) || func_02022e14(p, 0x29)) {
            func_02029504(p);
        }
        return func_0202fd7c(p);
    }
    if (*(s8 *)(160 + p) == 0) {
        return func_0202fa08(p);
    }
    if (*(u16 *)(252 + p) <= 400) {
        return *(u16 *)(252 + p);
    }
    if (func_02022e14(p, 0x28) || func_02022e14(p, 0x29)) {
        func_02029504(p);
    }
    return func_0202fd7c(p);
}
