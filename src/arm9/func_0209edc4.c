#include "ctx.h"

typedef struct {
    u32 w0;
    u8 pad4[8];
    s16 s0c;
    s16 s0e;
    u8 pad10[2];
    s16 arr[3];
    u16 u18;
    u16 u1a;
    u32 w1c;
    u8 pad20[6];
    s16 s26;
    s16 s28;
    u32 w2c;
} G;

extern G data_02159198;
extern u8 *data_0215919c;
extern u32 func_020708d0(u8 **p);
extern void func_02070c18(u8 **p, u32 zero);
extern void func_02070ac8(G *obj, s32 a, s32 b);

u32 func_0209edc4(u32 param)
{
    G *b;
    s16 i;
    s32 iv;
    s32 i1;
    u16 uv;
    u16 u2;
    G *p;
    u8 **pp;

    b = &data_02159198;
    pp = &data_0215919c;
    if (b->w2c == 0) goto INIT;
    if (*pp == 0) goto INIT;
    if (func_020708d0(pp) == param) {
        return 0;
    }
    func_02070c18(pp, 0);
    goto RET0;
INIT:
    if (*(vu32 *)&b->w2c != 0) {
        goto RET0;
    }
    i = 0;
    do {
        b->arr[i] = -1;
        i = (s16)(i + 1);
    } while (i < 3);
    b->s26 = (s16)param;
    b->w2c = 1;
    b->s28 = 1;
    p = &data_02159198;
    p->s0e = 40;
    iv = 60;
    if (p->w0 != 0) {
        if (p->w1c != 0) {
            u2 = p->u1a;
            uv = p->u18;
            p->u18 = 0;
            p->w1c = 0;
            iv = u2 - uv;
        }
        i1 = p->s0c * 40;
        func_02070ac8(p, i1 / 100, iv);
    }
    return 1;
RET0:
    return 0;
}
