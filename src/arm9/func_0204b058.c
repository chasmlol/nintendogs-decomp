#include "ctx.h"

extern u8 *func_02036578(u8 *p);
extern void func_0204da64(u8 *p, u8 *q, u32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u32 a);
extern s32 func_020357c8(u8 *p, u32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204b058(u8 *p)
{
    u8 *q = p;
    u8 *r4;
    s32 b;
    s32 s1;
    s32 s2;

    r4 = func_02036578(q);
    func_0204da64(q, r4, 1);
    func_02035be8(q);
    if (func_020289d0(q, 0, 1) != 0) {
        return;
    }
    if (func_0203592c(q, 0) != 0) {
        return;
    }
    if (func_020357c8(q, 0) != 0) {
        return;
    }
    if (r4 == 0) {
        goto tail;
    }
    s1 = *(s16 *)(r4 + 0xea);
    if (s1 < 642) {
        goto z1;
    }
    if (s1 > 644) {
        goto z1;
    }
    b = 1;
    goto t1;
z1:
    b = 0;
t1:
    if (b != 0) {
        b = 1;
        goto join;
    }
    if (s1 < 601) {
        goto z3;
    }
    if (s1 > 607) {
        goto z3;
    }
    b = 1;
    goto t3;
z3:
    b = 0;
t3:
    if (b == 0) {
        goto zb;
    }
    s2 = *(s16 *)(r4 + 0xee);
    if (s2 < 642) {
        goto z2;
    }
    if (s2 > 644) {
        goto z2;
    }
    b = 1;
    goto t2;
z2:
    b = 0;
t2:
    if (b != 0) {
        b = 1;
        goto join;
    }
zb:
    b = 0;
join:
    if (b != 0) {
        return;
    }
tail:
    func_020362f8(q);
    func_0202fcc0(q);
}
