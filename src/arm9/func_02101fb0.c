#include "ctx.h"

/* 12-bit signed coordinate with two 2-bit flag fields (alignment in bits 12-13) */
typedef struct {
    s16 x : 12;
    u16 align : 2;
    u16 mode : 2;
} TextPos;

typedef struct {
    u8 data[16];
} TextItem;

typedef struct {
    s32 key;
    s32 unk04;
    s32 count;
    s32 unk0c;
    s32 unk10;
    TextItem items[16];
    s32 xs[16];
    s32 ys[16];
} TextSub;

typedef struct {
    s32 id;
    s32 unk04;
    s32 unk08;
    u16 w;
    u16 h;
    u8 pad10[8];
    TextSub sub;
    u8 pad1ac[4];
    s32 dirty;
    u8 pad1b4[4];
} TextWin;

extern void *data_02159058;
extern TextWin *data_0215be4c;

extern void func_02100830(void);
extern s32 func_02062698(const u16 *str);
extern s32 func_02090308(void *font, const u16 *str, s32 space, void *cb);
extern s32 func_02085e6c(void *font, const u16 *str, s32 space);
extern void func_021026a8(void *font, TextItem *item, TextPos x, TextPos y, s32 p6, s32 p7, const u16 *str, s32 p9, s32 p10);
extern void func_02102464(void *font, TextItem *item, TextPos x, TextPos y, s32 p6, s32 p7, const u16 *str, s32 p9, s32 p11);
extern void func_0208fd90(void *buf, void *font, TextItem *item, TextPos x, TextPos y, s32 p6, s32 p7, const u16 *str, u32 p9, void *cb, ...);

void func_02101fb0(s32 id, TextWin *win, s32 key, TextPos px, TextPos py, s32 p6, s32 p7, const u16 *str, s32 p9, s32 p10, s32 p11, void *cb)
{
    void *font = data_02159058;
    s32 idx;
    TextSub *sub;
    TextPos dx = {0};
    TextPos dy = {0};
    u8 buf[20];
    s32 i;
    s32 w;

    dx.mode = px.mode;
    idx = -1;
    if (cb == NULL) {
        cb = (void *)func_02100830;
    }
    for (i = 0; i < 24; i++, win++) {
        if (win->id == id && win->unk04 != 0 && win->unk08 != 0 && key == win->sub.key) {
            idx = i;
            break;
        }
    }
    if (idx < 0) {
        return;
    }
    sub = &win->sub;
    switch (px.align) {
    case 0:
        break;
    case 1:
        if (p11 > 0) {
            w = func_02062698(str);
            w = p11 * w + (w - 1) * p6;
        } else {
            w = func_02090308(font, str, p6, cb);
        }
        px.x += (win->w - w + 1) >> 1;
        break;
    case 2:
        if (p11 > 0) {
            w = func_02062698(str);
            w = p11 * w + (w - 1) * p6;
        } else {
            w = func_02090308(font, str, p6, cb);
        }
        px.x += win->w - w;
        break;
    }
    switch (py.align) {
    case 1:
        w = func_02085e6c(font, str, p7);
        py.x += (win->h - w + 1) >> 1;
        break;
    case 2:
        w = func_02085e6c(font, str, p7);
        py.x += win->h - w;
        break;
    }
    for (i = 0; i < sub->count; i++) {
        dx.x = px.x - sub->xs[i];
        dy.x = py.x - sub->ys[i];
        if (p10 > 0) {
            func_021026a8(font, &sub->items[i], dx, dy, p6, p7, str, p9, p10);
        } else if (p11 > 0) {
            func_02102464(font, &sub->items[i], dx, dy, p6, p7, str, p9, p11);
        } else {
            func_0208fd90(buf, font, &sub->items[i], dx, dy, p6, p7, str, (u32)p9, cb);
        }
    }
    data_0215be4c[idx].dirty = 1;
}
