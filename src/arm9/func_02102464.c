#include "ctx.h"
#pragma optimization_level 3

typedef struct { u16 a; } S2;

extern s32 func_02090308(s32 a, s16 *b, s32 c, s32 d);
extern s32 func_02062698(s16 *a);
extern u32 func_02085e6c(s32 a, s16 *b, s32 c);
extern s32 func_02086688(S2 a, s32 b);
extern u32 func_02086640(S2 a, u32 b);
extern s32 func_020861b4(s32 a, s32 *b, s32 c, u32 d, u16 e, u32 f);
extern s32 func_02100830(void);

void func_02102464(s32 *param_1, s32 *param_2, u16 param_3, u16 param_4, s32 param_5,
                   s32 param_6, u16 *param_7, u32 param_8, s32 param_9)
{
    u32 glyph;
    u32 mid;
    u32 v;
    int i;
    int ranges;
    u16 c;
    int x0;
    int base;
    u32 off;
    int x;
    u32 first;
    s32 *canvas;
    int yoff;
    int map;
    int lo;
    u32 y;
    int adv;
    int hi;
    int w;
    u32 h;

    canvas = param_2;
    if (param_9 > 0) {
        w = func_02062698((s16 *)param_7);
        w = w * param_9 + (w - 1) * param_6;
    } else {
        w = func_02090308((s32)param_1, (s16 *)param_7, param_6, (s32)func_02100830);
    }
    h = func_02085e6c((s32)param_1, (s16 *)param_7, param_6);
    x = func_02086688(*(S2 *)&param_3, w);
    y = func_02086640(*(S2 *)&param_4, h);
    yoff = ((*(u8 *)((u8 *)param_1 + 0x16) - param_9) + 1) / 2;
    x0 = x;
    c = *param_7;
    if (0 == c) {
        return;
    }
    adv = param_9 + param_5;
    do {
        if (c == 10) {
            y = y + ((u32)*(u8 *)((u8 *)param_1 + 0x17) + param_6);
            x = x0;
        } else if (c != 0xd) {
            base = 0;
            i = 0;
            if ((s32)*(u16 *)((u8 *)param_1 + 0x1a) > 0) {
                ranges = param_1[2];
                do {
                    first = *(u16 *)(ranges + (u32)4 * i);
                    if (first <= c && c <= *(u16 *)(ranges + (u32)i * 4 + 2)) {
                        glyph = (base + c) - first;
                        goto draw;
                    }
                    off = (u32)i * 4;
                    base = base + (((*(u16 *)(off + ranges + 2) - *(u16 *)(ranges + off))) + 1);
                    i = i + 1;
                } while (i < *(u16 *)((u8 *)param_1 + 0x1a));
            }
            base = (u16)base;
            glyph = *(u16 *)((u8 *)param_1 + 0x12);
            map = param_1[1];
            hi = *(u16 *)((u8 *)param_1 + 0x18) - 1;
            lo = 0;
            if (hi >= 0) {
                do {
                    mid = lo + ((hi - lo) >> 1);
                    v = *(u16 *)(map + mid * 2);
                    if (v > c) {
                        hi = mid - 1;
                    } else {
                        if (v < c) {
                            lo = 1 + mid;
                        } else {
                            glyph = base + mid;
                            break;
                        }
                    }
                } while (lo <= hi);
            }
draw:
            func_020861b4((s32)param_1, canvas, x - yoff, y, glyph, param_8);
            x = adv + x;
        }
        param_7 = param_7 + 1;
        c = *param_7;
    } while (0 != c);
}
