#include "ctx.h"

typedef struct {
    u8 left;
    u8 adv;
} GlyphWidth;

typedef struct {
    u8 w;
    u8 h;
} GlyphSize;

typedef struct {
    u16 *data;          /* 0x00 */
    u8 pad04[8];        /* 0x04 */
    GlyphWidth *widths; /* 0x0c */
    u8 pad10[4];        /* 0x10 */
    s16 stride;         /* 0x14 */
    GlyphSize size;     /* 0x16 */
} Font;

typedef struct Canvas Canvas;

typedef struct { u16 v; } Align;

extern s32 func_02085e98(Font *font, const u16 *str, s32 hspace);
extern s32 func_02085e6c(Font *font, const u16 *str, s32 vspace);
extern s32 func_02086688(Align a, s32 w);
extern s32 func_02086640(Align a, s32 h);
extern s32 func_02086178(Align a, s32 w);
extern void func_02085ef4(Font *font, const u16 *str, s32 *w, s32 hspace);
extern s32 func_020863e4(Font *font, u16 ch);
extern void func_020861b4(Font *font, Canvas *cv, s32 x, s32 y, u16 code, u32 color);

void func_02085fa4(Font *font, Canvas *cv, Align h, Align v, s32 hspace, s32 vspace, const u16 *str, u32 color)
{
    s32 w;
    s32 hgt;
    s32 x;
    s32 y;
    s32 baseX;
    s32 lineW;
    u16 ch;

    w = func_02085e98(font, str, hspace);
    hgt = func_02085e6c(font, str, vspace);
    x = func_02086688(h, w);
    y = func_02086640(v, hgt);
    x += func_02086178(h, w);
    baseX = x;
    func_02085ef4(font, str, &lineW, hspace);
    x -= func_02086178(h, lineW);
    for (ch = *str; ch != 0; ch = *++str) {
        if (ch == 10) {
            func_02085ef4(font, str + 1, &lineW, hspace);
            x = baseX - func_02086178(h, lineW);
            y += font->size.h + vspace;
        } else if (ch != 13) {
            u16 glyph = func_020863e4(font, ch);
            func_020861b4(font, cv, x - font->widths[glyph].left, y, glyph, color);
            x += hspace + font->widths[glyph].adv;
        }
    }
}
