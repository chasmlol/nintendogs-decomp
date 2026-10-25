#pragma avoid_byte strb
#include "ctx.h"
typedef volatile s32 vs32;

typedef struct {
    u8 x;
    u8 y;
    u16 flags;
} TouchState;

typedef struct {
    u8 x;
    u8 y;
} Cell;

typedef struct {
    u8 x;
    u8 y;
    s16 px;
    s16 py;
    u8 pad6[2];
    s32 n;
    Cell cells[1];
} Piece;

typedef struct {
    u8 cx;
    u8 cy;
    s16 ox;
    s16 oy;
    u16 scroll[2];
} Cam;

typedef struct {
    u8 state;
    u8 pad01[7];
    s32 f08;
    u8 pad0c[4];
    Cam cam;
    u8 pad1a[2];
    u8 f1c;
    u8 f1d;
    u8 pad1e[2];
    s32 f20;
    u8 pad24[0x12ec - 0x24];
    s32 f12ec;
    s32 f12f0;
    s32 f12f4;
    s32 f12f8;
    u8 pad12fc[0x33b8 - 0x12fc];
    u8 f33b8;
    u8 f33b9;
    u8 pad33ba[0x33cd - 0x33ba];
    u8 f33cd;
    u8 pad33ce[2];
    s32 f33d0;
    u8 pad33d4[0x36c4 - 0x33d4];
    Piece *pb;
    s32 f36c8;
    u8 f36cc;
} Game;

extern TouchState data_0214f004;
extern Game *data_ov004_02170320;

extern s32 func_02044ca0(s32 a);
extern s32 func_02085d0c(s32 a, u32 b, u32 c);
extern void func_ov004_02162e74(void);
extern void func_020a0e04(s32 a);
extern void func_020a1a40(s32 a);
extern void func_ov004_02160d6c(u8 *a, u8 *b, u32 c, u32 d);
extern void func_020a09c4(s32 a, u32 b);
extern void func_ov004_02162a4c(void);
extern void func_020a0a98(s32 a);
extern s32 func_ov004_02162c9c(s32 a);
extern s32 func_ov004_02160c3c(void);

#define G data_ov004_02170320
#define TP (*tp)

static inline s32 AbsI(s32 v)
{
    if (v <= 0) {
        v = -v;
    }
    return v;
}

void func_ov004_0215f5a0(void)
{
    TouchState *tp = &data_0214f004;
    s32 tx;
    s32 ty;
    s32 gx;
    s32 gy;
    s32 res;
    s32 moved;
    s16 i;

    tx = TP.x;
    ty = TP.y;
    gx = -1;
    gy = -1;
    res = -1;
    moved = 0;
    for (i = 0; i < 1; i++) {
        if (func_02044ca0(i) != 0) {
            i = 1;
        }
    }
    if (G->f36c8 == 0) {
        if (G->f33b8 == 0) {
            G->f33cd = 1;
        }
        return;
    }
    if (G->f33b9 != 0) {
        return;
    }
    if (TP.flags & 1) {
        res = func_02085d0c(G->f33d0, tx, ty);
    }
    if ((TP.flags & 2) && res == 0) {
        func_ov004_02162e74();
        G->f33b9 = 20;
        func_020a0e04(2);
        return;
    }
    if ((TP.flags & 2) && res == 1) {
        G->f36c8 = 0;
        G->f33b8 = 20;
        func_020a1a40(4);
        return;
    }
    if (TP.flags & 1) {
        Piece *pb = G->pb;
        gx = (tx + pb->px) >> 3;
        gy = (ty + pb->py) >> 3;
        if (!(TP.flags & 2)) {
            if ((tx & 7) <= 1 && gx == pb->x + 1) {
                gx = pb->x;
            }
            if ((tx & 7) >= 6 && gx == pb->x - 1) {
                gx = pb->x;
            }
            if ((ty & 7) <= 1 && gy == pb->y + 1) {
                gy = pb->y;
            }
            if ((ty & 7) >= 6 && gy == pb->y - 1) {
                gy = pb->y;
            }
        }
    }
    {
        Piece *pb = G->pb;
        if (gx - (pb->px >> 3) < 2) {
            gx = (pb->px >> 3) + 2;
        }
        if (TP.flags & 2) {
            s32 dx = gx - pb->x;
            s32 dy;
            if (dx <= 0) {
                dx = -dx;
            }
            dy = gy - pb->y;
            if (dy <= 0) {
                dy = -dy;
            }
            if (dx <= 1 && dy <= 1) {
                G->f20 = 1;
            }
        }
    }
    if (!(TP.flags & 1)) {
        if (G->f20 != 0) {
            G->f12ec = 0;
        }
        G->f20 = 0;
    }
    if (gx != -1 && gy != -1 && G->f20 != 0) {
        s32 dx = gx - G->pb->x;
        s32 dy;
        if (dx <= 0) {
            dx = -dx;
        }
        dy = gy - G->pb->y;
        if (dy <= 0) {
            dy = -dy;
        }
        if (dx != 0 || dy != 0) {
            s32 old = G->pb->n;
            s32 now;
            func_ov004_02160d6c(&G->pb->x, &G->pb->y, gx & 0xff, gy & 0xff);
            now = G->pb->n;
            if (now > old) {
                func_020a09c4(now - old, tx);
            }
        }
    }
    if (G->f12f8 > 0) {
        G->f12f8--;
    }
    if (!(TP.flags & 1)) {
        G->f12f8 = 0;
    }
    if (gx != -1 && gy != -1 && G->f20 == 0) {
        if (((TP.flags & 2) || G->f12f4 != 0) && G->f12f8 == 0) {
            s32 n = G->pb->n;
            if (n > 0) {
                s32 dx;
                s32 dy;
                s32 k;
                s32 near = -1;
                u32 hit0 = 0;
                u32 hit1 = 0;
                for (k = 0; k < G->pb->n; k++) {
                    s32 d;
                    dx = gx - G->pb->cells[k].x;
                    if (dx <= 0) {
                        dx = -dx;
                    }
                    dy = gy - G->pb->cells[k].y;
                    if (dy <= 0) {
                        dy = -dy;
                    }
                    d = dx + dy;
                    if (d == 0) {
                        near = k;
                        hit0 = 1;
                    } else if (d == 1 && !hit0) {
                        near = k;
                        hit1 = 1;
                    } else if (d == 2 && !hit0 && !hit1) {
                        near = k;
                    }
                }
                if (near != -1 && (near != n - 1 || near == 0)) {
                    func_ov004_02162a4c();
                    G->f12f4 = 1;
                    if (G->pb->n == 0) {
                        G->f20 = 1;
                        G->f12f4 = 0;
                    }
                    func_020a0a98(1);
                    return;
                }
                G->f12f4 = 0;
                if (near == G->pb->n - 1) {
                    G->f20 = 1;
                    G->f12f4 = 0;
                }
            }
        }
        if ((TP.flags & 1) && G->f12f4 != 0) {
            return;
        }
        if (G->f12f4 != 0) {
            G->f12ec = 0;
        }
        G->f12f4 = 0;
    } else {
        if (G->f12f4 != 0) {
            G->f12ec = 0;
        }
        G->f12f4 = 0;
    }
    if (!(TP.flags & 1) && G->f12ec == 0) {
        moved = func_ov004_02162c9c(1);
        if (moved != 0) {
            G->f12ec = 0;
        }
    }
    if (moved == 0 && G->f20 == 0 && G->f12f4 == 0 && (TP.flags & 2)) {
        s32 bx = tx >> 3;
        s32 by = ty >> 3;
        u32 edge = 0;
        if (bx < 5) {
            if (G->cam.cx != 0) {
                G->cam.cx--;
                moved = 1;
            } else {
                edge = 1;
            }
        }
        if (bx >= 29) {
            if (G->cam.cx < 2) {
                G->cam.cx++;
                moved = 1;
            } else {
                edge = 1;
            }
        }
        if (by < 3) {
            if (G->cam.cy != 0) {
                G->cam.cy--;
                moved = 1;
            } else {
                edge = 1;
            }
        }
        if (by >= 21) {
            if (G->cam.cy < 2) {
                G->cam.cy++;
                moved = 1;
            } else {
                edge = 1;
            }
        }
        if (moved != 0 || edge != 0) {
            G->f12ec = 1;
        } else if (func_ov004_02162c9c(0) != 0) {
            func_ov004_02162c9c(1);
            G->f12ec = 0;
            moved = 1;
        }
    }
    if (G->f20 == 0 && G->f12f4 == 0 && moved == 0) {
        moved = func_ov004_02160c3c();
        if (moved != 0) {
            G->f12ec = 1;
        }
    }
    if (moved != 0) {
        Game *g = G;
        u16 *scroll = g->cam.scroll;
        Cam *cam = &g->cam;
        switch (cam->cx) {
        case 0:
            scroll[0] = 0;
            break;
        case 1:
            scroll[0] = 120;
            break;
        case 2:
            scroll[0] = 240;
            break;
        }
        switch (cam->cy) {
        case 0:
            scroll[1] = 0;
            break;
        case 1:
            scroll[1] = 96;
            break;
        case 2:
            scroll[1] = 192;
            break;
        }
        G->cam.ox = G->pb->px;
        G->cam.oy = G->pb->py;
        G->f08 = 0;
        G->state = 1;
        G->f20 = 0;
        return;
    }
    {
        Game *g = G;
        Piece *pb = g->pb;
        if (pb->n > 1 && pb->x == g->f1c && pb->y == g->f1d) {
            g->f12f0 = 0;
            G->state = 2;
            G->f36cc = 0;
        } else {
            return;
        }
    }
}
