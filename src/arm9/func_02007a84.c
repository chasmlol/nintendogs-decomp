#include "ctx.h"

typedef struct {
    u32 unk0;
    u16 state;
    s16 t;
    s16 dur;
    u16 unkA;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    s32 radius;
    s16 cx;
    s16 cy;
    s16 top;
    s16 bottom;
    s16 left[192];
    s16 right[192];
} Circle;

extern s32 func_0206782c(s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02007a84(Circle *c)
{
    s32 v;
    s32 r;
    s32 i;
    s32 d;
    s32 s;
    s32 r2;

    if (c->state == 0) {
        return;
    }
    if (c->state != 1) {
        return;
    }
    c->t++;
    if (c->t <= c->dur) {
        r = c->radius * c->t / c->dur;
        r2 = FX_Mul(r, r);
        v = c->cy - (r >> 12);
        if (v < 0) {
            v = 0;
        }
        c->top = v;
        v = c->cy + (r >> 12);
        if (v >= 192) {
            v = 191;
        }
        c->bottom = v;
        for (i = 0; i < 192; i++) {
            d = r2 - FX_Mul((i - c->cy) << 12, (i - c->cy) << 12);
            if (d > 0) {
                s = func_0206782c(d);
                c->left[i] = c->cx - (s >> 12);
                if (c->left[i] < 0) {
                    c->left[i] = 0;
                }
                c->right[i] = c->cx + (s >> 12);
                if (c->right[i] >= 256) {
                    c->right[i] = 255;
                }
            } else {
                c->right[i] = c->cx;
                c->left[i] = c->right[i];
            }
        }
        return;
    }
    c->state = 2;
    c->unk10 = 0;
    c->unk14 = 0;
    *(vu32 *)0x04001000 &= ~0xe000;
    *(vu16 *)0x04001050 = 0;
    *(vu32 *)0x04001000 &= ~0x800;
}
