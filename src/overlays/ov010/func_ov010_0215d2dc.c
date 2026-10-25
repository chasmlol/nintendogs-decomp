#include "ctx.h"

typedef struct {
    u8 pad[8];
    s32 f08;        /* 0x08 */
    s32 f0c;        /* 0x0c */
    s32 f10;        /* 0x10 */
    u16 color;      /* 0x14 */
    u16 pad16;
    u32 pix[1];     /* 0x18 */
} Canvas;

extern Canvas *data_ov010_0215d9e0;

#define PIX_INDEX(X, Y) (((Y) & 7) + ((((Y) >> 3) << 8) + ((u32)cx << 3)))

#define PUT_PIXEL(X, Y)     {         s32 cx = (X) >> 3;         s32 dx = (X) & 7;         Canvas *cv = data_ov010_0215d9e0;         pv = cv->pix[PIX_INDEX(X, Y)];         cv->pix[PIX_INDEX(X, Y)] = (cv->color << (dx << 2)) | (pv & ~(15 << (dx << 2)));     }

void func_ov010_0215d2dc(s32 x, s32 y, BOOL fill, BOOL left, BOOL top)
{
    u32 pv;
    s32 x0, x1, y0, y1;
    s32 i, j;
    s32 h, t, w;
    Canvas *c = data_ov010_0215d9e0;

    h = c->f10;
    t = c->f08;
    w = c->f0c;
    x0 = x - ((t + w) >> 1);
    x1 = x + ((t + w) >> 1);
    y0 = y - ((t + h) >> 1);
    y1 = y + ((t + h) >> 1);
    if ((h & 1) == 0 && x1 > x0) {
        x1--;
    } else if (x1 < x0) {
        x0 = x;
        x1 = x;
    }
    if ((w & 1) == 0 && y0 < y1) {
        y1--;
    } else if (y0 > y1) {
        y1 = y;
        y0 = y;
    }
    if (x0 < 0) x0 = 0;
    if (x1 > 255) x1 = 255;
    if (y0 < 0) y0 = 0;
    if (y1 > 191) y1 = 191;
    if (fill) {
        for (i = x0; i <= x1; i++) {
            for (j = y0; j <= y1; j++) {
                PUT_PIXEL(i, j)
            }
        }
    } else {
        for (i = x0; i <= x1; i++) {
            s32 v = top ? y0 : y1;
            PUT_PIXEL(i, v)
        }
        for (; y0 <= y1; y0++) {
            s32 v = left ? x0 : x1;
            PUT_PIXEL(v, y0)
        }
    }
}
