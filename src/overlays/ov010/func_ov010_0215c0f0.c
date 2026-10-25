#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;

typedef struct {
    s32 x0;                 /* 0x0000 */
    s32 x4;                 /* 0x0004 */
    u8 pad0008[4];
    s32 color0;             /* 0x000c */
    s32 color1;             /* 0x0010 */
    u16 pal;                /* 0x0014 */
    u8 pad0016[2];
    u8 screen[0x6000];      /* 0x0018 */
    u8 pad6018[0x6638 - 0x6018];
    s32 playing;            /* 0x6638 */
    s32 mode;               /* 0x663c */
    u16 *bufA[20];          /* 0x6640 */
    u16 *bufB[20];          /* 0x6690 */
    u16 *ch0;               /* 0x66e0 */
    u16 *ch1;               /* 0x66e4 */
    s32 vals[20];           /* 0x66e8 */
    s32 cur;                /* 0x6738 */
    s32 pos;                /* 0x673c */
    s32 n;                  /* 0x6740 */
    s32 step;               /* 0x6744 */
    s32 scroll;             /* 0x6748 */
    s32 showA;              /* 0x674c */
    s32 showB;              /* 0x6750 */
} Work;

typedef struct {
    u16 trg;
    u16 cont;
    u16 rel;
} Pad;

typedef struct {
    u8 pad00[4];
    s32 no;
} Seq;

extern Work *data_ov010_0215d9e0;
extern Pad data_0214efdc;
extern Seq *data_02157cc4;

extern void func_0206c3dc(u32 dma, void *dest, u32 data, u32 size);
extern void func_0208afa0(void);
extern void func_0208af94(s32 a);
extern void func_0208af88(void);
extern void func_0208af7c(void);
extern u16 *func_020e1fb0(s32 a, s32 b);
extern u16 *func_020e1f90(s32 a, s32 b);
extern s32 func_020e1f50(void);
extern BOOL func_020dd47c(s32 a);
extern void func_020e1f48(s32 a);
extern u16 *func_020e1f78(void);
extern u16 *func_020e1f60(void);
extern s32 func_020e1f58(void);
extern void func_ov010_0215d2dc(s32 x, s32 y, s32 c, s32 fx, s32 fy);
extern fx32 func_02067c30(const VecFx32 *v);
extern void func_02067af0(const VecFx32 *src, VecFx32 *dst);

#define G data_ov010_0215d9e0

static inline u16 KeyTrg(u16 key)
{
    return data_0214efdc.trg & key;
}

static inline u16 KeyCont(u16 key)
{
    return data_0214efdc.cont & key;
}

static inline u16 KeyRel(u16 key)
{
    return data_0214efdc.rel & key;
}

static inline void DrawLine(s32 x0, s32 y0, s32 x1, s32 y1)
{
    if (x0 != x1 || y0 != y1) {
        VecFx32 d;
        fx32 x;
        fx32 y;
        fx32 len;
        x = x0 << 12;
        y = y0 << 12;
        d.x = (x1 << 12) - x;
        d.y = (y1 << 12) - y;
        d.z = 0;
        len = func_02067c30(&d);
        if (len > 0x1000) {
            fx32 t = 0;
            func_02067af0(&d, &d);
            for (; t < len; t += 0x1000) {
                y += d.y;
                x += d.x;
                func_ov010_0215d2dc(x >> 12, y >> 12, 0, d.x <= 0 ? 1 : 0, d.y <= 0 ? 1 : 0);
            }
        } else if (len != 0) {
            func_ov010_0215d2dc(x1, y1, 0, d.x <= 0 ? 1 : 0, d.y <= 0 ? 1 : 0);
        }
    } else {
        func_ov010_0215d2dc(x1, y1, 0, 1, 1);
        func_ov010_0215d2dc(x1, y1, 0, 0, 0);
    }
}

void func_ov010_0215c0f0(void)
{
    s32 i;
    s32 k;

    func_0206c3dc(3, G->screen, 0x11111111, 0x6000);
    if (KeyCont(0x400)) {
        if (KeyTrg(0x100)) {
            if (G->playing == 0) {
                func_0208afa0();
                G->playing = 1;
                G->mode = 1;
            }
        } else if (KeyRel(0x100) && G->playing != 0) {
            func_0208af94(G->cur);
            G->bufA[G->cur] = func_020e1fb0(G->cur, 0);
            G->bufB[G->cur] = func_020e1f90(G->cur, 0);
            G->playing = 0;
            G->mode = 0;
        }
    } else {
        if (KeyTrg(0x100)) {
            if (G->playing == 0) {
                func_0208af88();
                G->playing = 1;
                G->mode = 2;
            } else {
                func_0208af7c();
                G->playing = 0;
                G->mode = 0;
            }
        }
        if (G->mode == 2) {
            s32 no = (data_02157cc4 != NULL) ? data_02157cc4->no : -1;
            if (no >= 0 && no < 20) {
                G->cur = no;
            }
        }
    }
    if (KeyTrg(0x40)) {
        G->cur = (G->cur + 1) % 20;
        G->pos = 0;
    }
    if (KeyTrg(0x80)) {
        G->cur--;
        if (G->cur < 0) {
            G->cur += 20;
        }
        G->pos = 0;
    }
    if (KeyTrg(0x200)) {
        G->pos = (G->pos + 1) % func_020e1f50();
        G->bufA[G->cur] = func_020e1fb0(G->cur, G->pos);
        G->bufB[G->cur] = func_020e1f90(G->cur, G->pos);
    }
    if (KeyTrg(0x10)) {
        if (G->scroll < G->n) {
            G->scroll++;
        }
    }
    if (KeyTrg(0x20)) {
        if (G->scroll > -G->n) {
            G->scroll--;
        }
    }
    if (KeyTrg(0x800)) {
        G->scroll = 0;
        if (KeyCont(0x200) && func_020dd47c(G->cur)) {
            G->pos = 0;
            G->bufA[G->cur] = func_020e1fb0(G->cur, 0);
            G->bufB[G->cur] = func_020e1f90(G->cur, 0);
        }
    }
    if (KeyTrg(1)) {
        G->showA = (G->showA == 0);
    }
    if (KeyTrg(2)) {
        G->showB = (G->showB == 0);
    }
    if (KeyTrg(4)) {
        func_020e1f48(G->cur);
    }
    G->ch0 = func_020e1f78();
    G->ch1 = func_020e1f60();
    for (i = 0; i < 20; i++) {
        G->vals[i] = func_020e1f58();
    }
    G->x0 = 0;
    G->x4 = 95;
    G->pal = 3;
    for (k = 0; k < 256; k++) {
        func_ov010_0215d2dc(k, 95, 0, 0, 0);
    }
    G->pal = 2;
    if (G->showA) {
        G->color0 = 2;
        G->color1 = 2;
        {
            u16 *buf;
            s32 n;
            s32 step;
            s32 j;
            s32 px;
            s32 py;
            j = 0;
            n = G->n;
            buf = G->bufA[G->cur];
            step = G->step;
            px = 0;
            py = (-buf[0] >> 9) + 97;
            for (; j < n; j++) {
                s32 x = j * step;
                s32 y = (-buf[j] >> 9) + 97;
                DrawLine(px, py, x, y);
                py = y;
                px = x;
            }
        }
        {
            u16 *buf;
            s32 n;
            s32 step;
            s32 j;
            s32 px;
            s32 py;
            j = 0;
            n = G->n;
            buf = G->bufB[G->cur];
            step = G->step;
            px = 0;
            py = (buf[0] >> 9) + 97;
            for (; j < n; j++) {
                s32 x = j * step;
                s32 y = (buf[j] >> 9) + 97;
                DrawLine(px, py, x, y);
                py = y;
                px = x;
            }
        }
    }
    G->color0 = 1;
    G->color1 = 1;
    if (G->showB) {
        G->pal = 5;
        {
            i = G->scroll;
            if (i >= 0) {
                u16 *buf;
                s32 step;
                s32 n;
                s32 j;
                s32 px;
                s32 py;
                step = G->step;
                n = G->n;
                j = 0;
                buf = G->ch0;
                px = (i < 0) ? 0 : i * step;
                py = (-buf[0] >> 9) + 97;
                if (n + i > 0) {
                    do {
                        s32 x = step * (j + i);
                        s32 y = (-buf[j] >> 9) + 97;
                        DrawLine(px, py, x, y);
                        j++;
                        px = x;
                        py = y;
                    } while (j < n + i);
                }
            } else {
                u16 *buf;
                s32 j;
                s32 step;
                s32 n;
                s32 px;
                s32 py;
                j = -i;
                step = G->step;
                n = G->n;
                buf = G->ch0;
                px = (i < 0) ? 0 : i * step;
                py = (-buf[j] >> 9) + 97;
                for (; j < n + i; j++) {
                    s32 x = step * (j + i);
                    s32 y = (-buf[j] >> 9) + 97;
                    DrawLine(px, py, x, y);
                    px = x;
                    py = y;
                }
            }
        }
        {
            k = G->scroll;
            if (k >= 0) {
                u16 *buf;
                s32 step;
                s32 n;
                s32 j;
                s32 px;
                s32 py;
                step = G->step;
                n = G->n;
                j = 0;
                buf = G->ch1;
                px = (k < 0) ? 0 : k * step;
                py = (buf[0] >> 9) + 97;
                if (n + k > 0) {
                    do {
                        s32 x = step * (j + k);
                        s32 y = (buf[j] >> 9) + 97;
                        DrawLine(px, py, x, y);
                        j++;
                        px = x;
                        py = y;
                    } while (j < n + k);
                }
            } else {
                u16 *buf;
                s32 j;
                s32 step;
                s32 n;
                s32 px;
                s32 py;
                j = -k;
                step = G->step;
                n = G->n;
                buf = G->ch1;
                px = (k < 0) ? 0 : k * step;
                py = (buf[j] >> 9) + 97;
                for (; j < n + k; j++) {
                    s32 x = step * (j + k);
                    s32 y = (buf[j] >> 9) + 97;
                    DrawLine(px, py, x, y);
                    px = x;
                    py = y;
                }
            }
        }
    }
    G->pal = 2;
}

