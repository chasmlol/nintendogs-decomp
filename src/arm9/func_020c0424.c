#include "ctx.h"

extern s32 func_02044ca0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_020beec0(u8 *p, s32 a, s32 *b);
extern void func_020c0b34(u8 *p, s32 *a, s32 *b);
extern void func_020c0948(u8 *p);
extern void func_020c0778(u8 *p);
extern void func_020d345c(u8 *p, u32 i, s32 *out);
extern s32 func_020aaec4(s32 g, s32 *p, s32 v);
extern u32 func_020c5e30(u8 *p, u32 a);
extern u32 func_020341d8(s32 a);
extern u32 func_020c5fbc(u8 *p);

u32 func_020c0424(u8 *p)
{
    u8 *iv;
    s32 A[3];
    s32 B[3];
    s32 C[3];
    s32 r6;
    s32 bv;
    s32 g;
    s32 r;

    iv = *(u8 **)(p + 0x214);
    func_02044ca0(*(s16 *)(p + 156));
    r6 = func_01ffdb08(*(s16 *)(p + 152));
    if (r6 != 0) {
        func_020beec0(p, r6, A);
    }
    if (*(s32 *)(iv + 0x1c) == 0) {
        func_020c0b34(p, 0, A);
    } else {
        func_020c0b34(p, A, 0);
    }
    func_020c0948(p);
    func_020c0778(p);
    iv = *(u8 **)(p + 0x214);
    g = func_02044ca0(*(s16 *)(p + 156));
    func_020d345c(iv, 1, B);
    func_020d345c(iv, 2, C);
    r = func_020aaec4(g, B, 0xe66);
    if (r != 0) {
        bv = 1;
    } else {
        r = func_020aaec4(g, C, 0xe66);
        bv = (r != 0);
    }
    if (bv) {
        return func_020c5e30(p, 0x2ccc);
    }
    r = func_020341d8(r6);
    if (r != 0) {
        return r;
    }
    return func_020c5fbc(p);
}
