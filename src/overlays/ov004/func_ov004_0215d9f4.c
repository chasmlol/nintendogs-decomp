#pragma avoid_byte strb
#include "ctx.h"

typedef s32 fx32;

typedef struct {
    u8 x;
    u8 y;
} Pos;

typedef struct {
    u8 v[8];
} Msg;

typedef struct {
    s32 v[8];
} Tbl8;

typedef struct {
    u8 x;                   /* 0x0000 */
    u8 y;                   /* 0x0001 */
    s16 sx;                 /* 0x0002 */
    s16 sy;                 /* 0x0004 */
    u8 pad0006[2];
    s32 n;                  /* 0x0008 */
    Pos path[0x112c];       /* 0x000c */
    s32 cur;                /* 0x2264 */
    Pos posA[4];            /* 0x2268 */
    s8 actA[4];             /* 0x2270 */
    s8 selA;                /* 0x2274 */
    Pos posB[8];            /* 0x2275 */
    s8 actB[8];             /* 0x2285 */
    u8 pad228d[0x2295 - 0x228d];
    s8 selB;                /* 0x2295 */
    Pos posC[4];            /* 0x2296 */
    s8 actC[4];             /* 0x229e */
    s8 selC;                /* 0x22a2 */
    s8 rank;                /* 0x22a3 */
    u8 pad22a4[4];
    s32 marksA[7];          /* 0x22a8 */
    s8 markA;               /* 0x22c4 */
    u8 flags[64];           /* 0x22c5 */
    u8 table;               /* 0x2305 */
    u8 b2306;               /* 0x2306 */
    u8 pad2307;
    s32 marksB[3];          /* 0x2308 */
    s8 lvl;                 /* 0x2314 */
    u8 busy;                /* 0x2315 */
    u8 b2316;               /* 0x2316 */
    u8 pad2317[2];
    s8 b2319;               /* 0x2319 */
} Sub;

typedef struct {
    u8 pad0000[4];
    u32 frame;              /* 0x0004 */
    s32 step;               /* 0x0008 */
    u8 pad000c[0x12 - 0x0c];
    s16 fromX;              /* 0x0012 */
    s16 fromY;              /* 0x0014 */
    s16 toX;                /* 0x0016 */
    s16 toY;                /* 0x0018 */
    u8 pad001a[2];
    u8 px;                  /* 0x001c */
    u8 py;                  /* 0x001d */
    u8 pad001e[0x24 - 0x1e];
    u32 len;                /* 0x0024 */
    u8 pad0028[0xf7a - 0x28];
    u16 kinds[5];           /* 0x0f7a */
    u8 pad0f84[0x1384 - 0xf84];
    u16 pairs[8];           /* 0x1384 */
    u16 scr[0x1000];        /* 0x1394 */
    s32 camX;               /* 0x3394 */
    s32 camY;               /* 0x3398 */
    fx32 t;                 /* 0x339c */
    Msg msg;                /* 0x33a0 */
    s32 msgKind;            /* 0x33a8 */
    s32 voice;              /* 0x33ac */
    u8 pad33b0[0x36c0 - 0x33b0];
    u32 seed;               /* 0x36c0 */
    Sub *sub;               /* 0x36c4 */
    s32 result;             /* 0x36c8 */
} Game;

typedef struct {
    u8 pad00[2];
    s16 id;                 /* 0x02 */
} Save;

typedef struct {
    u8 pad00[0x76];
    u16 x76;                /* 0x76 */
} Stat;

extern Save *data_02159458;
extern Game *data_ov004_02170320;
extern Tbl8 data_ov004_0216ff2c;
extern const s8 data_ov004_0216fd54[][4];

extern s32 func_01ffdb08(s32 a);
extern u8 *func_020280e4(s32 a, s16 b);
extern void func_0207c910(s32 a, s32 b, void *c, s32 d);
extern BOOL func_020f5220(void);
extern fx32 func_020f3b8c(void);
extern u8 *func_02069d98(void);
extern void func_02029290(s32 a, s32 b, s32 c);
extern void func_02027ee0(s32 a, s32 b, s16 c);
extern void func_02027f40(s32 a, s32 b, s32 c);
extern void func_02027bdc(s32 a, u16 b);
extern Stat *func_0202817c(s32 a);
extern void func_02028184(s32 a);
extern void func_0209fa4c(s32 a);
extern void func_02093a04(s32 a);
extern u16 func_02027c58(s32 a);
extern Msg *func_020f1314(s32 a, s32 b, s32 c);
extern void func_ov004_0216cdf8(s32 a, s32 b);
extern void func_020f3b6c(void);
extern s32 func_ov004_021606b0(s32 a, s32 b);
extern void func_0209f968(s32 a, s32 b);
extern void func_0209f59c(s32 a);
extern s32 func_ov004_021601b8(void);
extern void func_020f3c40(s32 a);
extern fx32 func_02067898(fx32 a, fx32 b);

#define G data_ov004_02170320

static inline s32 ScrOffset(u8 x, u8 y)
{
    s32 off;
    if (x < 32) {
        if (y < 32) off = (x + y * 32) * 2;
        else off = (x + (y - 32) * 32) * 2 + 0x1000;
    } else {
        if (y < 32) off = ((x - 32) + y * 32) * 2 + 0x800;
        else off = ((x - 32) + (y - 32) * 32) * 2 + 0x1800;
    }
    return off;
}

static inline s32 Abs(s32 v)
{
    if (v <= 0) {
        v = -v;
    }
    return v;
}

static inline u16 Rand(u16 max)
{
    u32 s = G->seed * 0x10dcd + 1;
    G->seed = s;
    return (u16)(((u32)max * (u16)s) >> 16);
}

void func_ov004_0215d9f4(void)
{
    BOOL found = FALSE;
    s32 sel;
    s32 i;

    sel = func_01ffdb08(data_02159458->id);
    if ((G->frame & 0x1f) == 0) {
        for (i = 0; i < 64; i++) {
            if (G->sub->flags[i] == 1) {
                s32 idx = -1;
                u8 *e = func_020280e4(sel, i);
                s32 off = ScrOffset(e[1], e[2]);
                s32 j;
                for (j = 0; j < 8; j++) {
                    if (G->scr[off >> 1] == G->pairs[j]) {
                        idx = j;
                    }
                }
                if (idx < 4) {
                    G->scr[off >> 1] = (&G->pairs[idx])[4];
                } else {
                    G->scr[off >> 1] = (&G->pairs[idx])[-4];
                }
                func_0207c910(27, off, &G->scr[off >> 1], 2);
            }
        }
    }
    if (G->result != -1) {
        return;
    }
    if (func_020f5220()) {
        G->t = func_020f3b8c();
    }
    {
        Sub *q = G->sub;
        if (q->cur < q->n) {
            u8 nx = q->path[q->cur].x;
            s32 by = q->y << 3;
            s32 ny = q->path[q->cur].y << 3;
            G->camX = (s16)((((q->x << 3) * (0x1000 - G->t) + (nx << 3) * G->t) >> 12) - q->sx);
            G->camY = (s16)(((by * (0x1000 - G->t) + ny * G->t) >> 12) - G->sub->sy);
        }
    }
    if (G->t == 0x1000 && G->sub->busy == 0) {
        u8 x = G->sub->path[G->sub->cur].x;
        u8 y = G->sub->path[G->sub->cur].y;
        s32 id;
        u32 tile;
        G->sub->x = x;
        G->sub->y = y;
        tile = *(u16 *)(func_02069d98() + ScrOffset(x, y)) & 0x3ff;
        for (i = 0; i < 5; i++) {
            if (tile == (G->kinds[i] & 0x3ff)) {
                switch (i) {
                case 0: {
                    s32 j;
                    s32 v;
                    func_02029290(sel, 84, 1);
                    G->result = 1;
                    id = func_01ffdb08(data_02159458->id);
                    for (j = 0; j < 64; j++) {
                        u8 *e = func_020280e4(id, j);
                        if (e[3] != 0) {
                            e[3]--;
                        }
                    }
                    func_02028184(id);
                    if (G->sub->lvl < 1) {
                        G->sub->lvl = 1;
                    }
                    if (G->sub->lvl > 15) {
                        G->sub->lvl = 15;
                    }
                    func_02027ee0(sel, 0, -(G->sub->cur * 10000 / (s32)G->len));
                    func_02027f40(sel, 2, 2000);
                    func_02027ee0(sel, 3, 100);
                    func_02027ee0(sel, 4, 500);
                    func_02027f40(sel, 1, 10000);
                    func_02027f40(sel, 5, 0);
                    func_02027f40(sel, 6, 0);
                    func_02027ee0(sel, 7, -G->sub->cur * 2);
                    func_02027bdc(sel, G->sub->cur / 2);
                    if (G->sub->b2319 < 0) {
                        func_02093a04(-10);
                    }
                    v = G->sub->lvl + func_0202817c(sel)->x76;
                    if (v >= 300) {
                        v = 300;
                    }
                    func_0202817c(sel)->x76 = v;
                    func_02028184(sel);
                    func_0209fa4c(180);
                    found = TRUE;
                    break;
                }
                case 1:
                    func_02029290(sel, 84, 1);
                    found = TRUE;
                    G->result = 4;
                    break;
                case 2:
                    func_02029290(sel, 84, 2);
                    found = TRUE;
                    G->result = 3;
                    break;
                case 3:
                    G->sub->b2306 = 0;
                case 4:
                    if (i == 4) {
                        G->sub->b2306 = 1;
                    }
                    func_02029290(sel, 84, 2);
                    found = TRUE;
                    G->result = 2;
                    break;
                }
            }
        }
        if (!found) {
            for (i = 0; i < 4; i++) {
                if (G->sub->actA[i] == 1) {
                    s32 dy;
                    s32 dx;
                    dx = G->sub->posA[i].x - x;
                    dy = G->sub->posA[i].y - y;
                    if (dx <= 0) dx = -dx;
                    if (dx <= 1) {
                        if (dy <= 0) dy = -dy;
                        if (dy <= 1) {
                            G->sub->selA = i;
                            G->msgKind = 0;
                            G->sub->busy = 1;
                            func_020f3b6c();
                            if (Abs(G->px - G->sub->posA[i].x) < 13 && Abs(G->py - G->sub->posA[i].y) < 13) {
                                G->msg = *func_020f1314(0, 0, 0);
                            } else {
                                G->msg = *func_020f1314(func_02027c58(sel), 0, 0);
                            }
                            func_02029290(sel, 83, 1);
                            func_0209f968(0, 150);
                            found = TRUE;
                            i = 4;
                        }
                    }
                }
            }
        }
        if (!found) {
            for (i = 0; i < 8; i++) {
                if (G->sub->actB[i] == 1) {
                    s32 dy;
                    s32 dx;
                    dx = G->sub->posB[i].x - x;
                    dy = G->sub->posB[i].y - y;
                    if (dx <= 0) dx = -dx;
                    if (dx <= 1) {
                        if (dy <= 0) dy = -dy;
                        if (dy <= 1) {
                            G->sub->selB = i;
                            G->msgKind = 1;
                            G->sub->busy = 1;
                            func_020f3b6c();
                            found = TRUE;
                            i = 8;
                            if (Rand(2) == 0) {
                                Game *g = G;
                                Sub *q = g->sub;
                                if (Abs(g->px - q->posB[i].x) < 13 && Abs(g->py - q->posB[i].y) < 13) {
                                    g->msg = *func_020f1314(0, 0, 2);
                                } else {
                                    g->msg = *func_020f1314(func_02027c58(sel), 0, 2);
                                }
                                g->voice = 112;
                            } else {
                                G->voice = Rand(3) + 114;
                            }
                        }
                    }
                }
            }
        }
        if (!found) {
            for (i = 0; i < 4; i++) {
                if (G->sub->actC[i] == 1) {
                    s32 dy;
                    s32 dx;
                    dx = G->sub->posC[i].x - x;
                    dy = G->sub->posC[i].y - y;
                    if (dx <= 0) dx = -dx;
                    if (dx <= 1) {
                        if (dy <= 0) dy = -dy;
                        if (dy <= 1) {
                            s32 r;
                            s32 tbl[8];
                            G->sub->selC = i;
                            r = func_ov004_021606b0(G->sub->posC[i].x, G->sub->posC[i].y);
                            *(Tbl8 *)tbl = data_ov004_0216ff2c;
                            {
                                s32 t = tbl[data_ov004_0216fd54[G->sub->table][i]];
                                G->sub->rank = t + r;
                            }
                            if (G->sub->rank >= 3) {
                                G->sub->rank = 2;
                            }
                            switch (G->sub->rank) {
                            case 0:
                                func_02029290(sel, 84, 3);
                                break;
                            case 1:
                                func_02029290(sel, 84, 1);
                                break;
                            case 2:
                                func_02029290(sel, 84, 2);
                                break;
                            }
                            G->result = 5;
                            G->sub->busy = 1;
                            func_020f3b6c();
                            found = TRUE;
                            G->sub->b2316 = 1;
                            i = 4;
                        }
                    }
                }
            }
        }
        if (!found) {
            for (i = 0; i < 7; i++) {
                if (G->sub->cur == G->sub->marksA[i]) {
                    func_ov004_0216cdf8(sel, 2);
                    G->sub->markA = i;
                    G->sub->busy = 1;
                    func_020f3b6c();
                    found = TRUE;
                    func_0209f59c(4);
                    i = 7;
                }
            }
        }
        if (!found) {
            for (i = 0; i < 3; i++) {
                if (G->sub->cur == G->sub->marksB[i]) {
                    func_ov004_0216cdf8(sel, 3);
                    G->sub->busy = 1;
                    func_020f3b6c();
                    found = TRUE;
                    func_0209f59c(3);
                    i = 7;
                }
            }
        }
        if (!found) {
            u16 t = G->scr[ScrOffset(x, y) >> 1];
            for (i = 1; i < 4; i++) {
                if (t == G->pairs[i]) {
                    func_ov004_0216cdf8(sel, 1);
                    G->sub->busy = 1;
                    func_020f3b6c();
                    i = 4;
                }
            }
        }
        func_020f3c40(func_ov004_021601b8());
        G->sub->cur++;
    }
    G->fromX = G->sub->sx;
    G->fromY = G->sub->sy;
    G->toX = G->sub->sx;
    G->toY = G->sub->sy;
    if (G->camX <= 56) {
        G->toX = G->camX - 56 + G->sub->sx;
    }
    if (G->camX >= 192) {
        G->toX = G->camX - 192 + G->sub->sx;
    }
    if (G->camY <= 40) {
        G->toY = G->camY - 40 + G->sub->sy;
    }
    if (G->camY >= 144) {
        G->toY = G->camY - 144 + G->sub->sy;
    }
    if (G->toX < 0) {
        G->toX = 0;
    }
    if (G->toX > 256) {
        G->toX = 256;
    }
    if (G->toY < 0) {
        G->toY = 0;
    }
    if (G->toY > 192) {
        G->toY = 192;
    }
    G->step = 0;
    G->step++;
    if (G->step >= 8) {
        G->sub->sx = G->toX;
        G->sub->sy = G->toY;
        return;
    }
    {
        fx32 t = func_02067898(G->step << 12, 0x8000);
        s16 fy = G->fromY;
        fx32 my = (fx32)(((s64)t * ((G->toY - fy) << 12) + 0x800) >> 12);
        fx32 mx = (fx32)(((s64)t * ((G->toX - G->fromX) << 12) + 0x800) >> 12);
        G->sub->sx = (mx + (G->fromX << 12) + 0x800) >> 12;
        G->sub->sy = (my + (fy << 12) + 0x800) >> 12;
    }
}

