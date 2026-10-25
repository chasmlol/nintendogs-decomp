#include "ctx.h"

typedef struct {
    u8 w;
    u8 h;
} GlyphSize;

typedef struct {
    u16 *data;      /* 0x00 */
    u8 pad[0x10];   /* 0x04 */
    s16 stride;     /* 0x14 */
    GlyphSize size; /* 0x16 */
} Font;

typedef struct {
    u32 pad0;       /* 0x00 */
    u16 width;      /* 0x04 */
    u16 height;     /* 0x06 */
} Canvas;

static inline void GetCanvasSize(const Canvas *cv, s32 *w, s32 *h)
{
    *w = cv->width;
    *h = cv->height;
}

extern u32 *func_02086348(Canvas *cv, s32 x, s32 y);

void func_020861b4(Font *font, Canvas *cv, s32 x, s32 y, u16 code, u32 color)
{
    s32 cvw;
    s32 cvh;
    GlyphSize sz;
    u16 bits;
    u16 cnt;
    u16 *src;
    s32 lineWords;
    u32 *line;
    s32 ix;
    u32 *dst;
    u32 word;
    s32 iy;

    GetCanvasSize(cv, &cvw, &cvh);
    lineWords = cvw * 8 / 8;
    sz = font->size;
    src = font->data + font->stride * code;
    bits = 0;
    cnt = 0;
    dst = line = func_02086348(cv, x, y);
    word = *line;
    for (iy = y; iy < y + sz.h; iy++) {
        if (iy >= cvh) return;
        for (ix = x; ix < x + sz.w; ix++) {
            if (cnt == 0) bits = *src;
            if ((bits & 1) == 0 && ix >= 0 && ix < cvw && iy >= 0) {
                s32 sh = (ix & 7) * 4;
                word = (word & ~(0xf << sh)) | ((color & 0xf) << sh);
            }
            bits >>= 1;
            cnt++;
            if (cnt > 15) {
                cnt = 0;
                src++;
            }
            if ((ix & 7) == 7) {
                *dst = word;
                dst += 8;
                word = *dst;
            }
        }
        if ((iy & 7) == 7) {
            line = line + lineWords - 7;
        } else {
            line++;
        }
        *dst = word;
        dst = line;
        word = *dst;
    }
}
