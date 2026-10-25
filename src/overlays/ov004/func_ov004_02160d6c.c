#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 pad00[0xc];
    u16 rows[1][32];
} Res;

typedef struct {
    u8 pad00[0xc];
    void *fc;
    u32 f10;
    void *f14;
} Res2;

typedef struct {
    u32 f0;
    u16 f4;
    u16 f6;
    u16 f8;
    u16 fa;
    u16 fc;
    u16 fe;
} Slot;

typedef struct {
    u8 x;
    u8 y;
    s16 ox;
    s16 oy;
    u16 pad06;
    s32 f8;
    u8 pad0c[0x264 - 0xc];
    u8 map[0x2000];
    u32 f2264;
    u8 pad2268[0x2274 - 0x2268];
    s8 f2274;
    u8 pad2275[0x2295 - 0x2275];
    s8 f2295;
    u8 pad2296[0x22a2 - 0x2296];
    s8 f22a2;
    u8 pad22a3[0x22a5 - 0x22a3];
    u8 f22a5;
    u8 pad22a6[0x22c4 - 0x22a6];
    s8 f22c4;
    u8 pad22c5[0x2305 - 0x22c5];
    u8 f2305;
    u8 pad2306[0x2314 - 0x2306];
    u8 f2314;
    u8 f2315;
    u8 f2316;
    u8 f2317;
    u8 f2318;
    u8 f2319;
} Save;

typedef struct {
    u8 mode;
    u8 pad01[3];
    s32 f4;
    s32 f8;
    s32 fc;
    u8 f10;
    u8 f11;
    u8 pad12[0x1c - 0x12];
    u8 f1c;
    u8 f1d;
    u8 pad1e[2];
    s32 f20;
    s32 f24;
    u8 pad28[0xbe0 - 0x28];
    u16 tbl0[29];
    u16 tbl10[10][72];
    u16 table[8][18];
    u8 pad12da[0x12ec - 0x12da];
    s32 f12ec;
    s32 f12f0;
    s32 f12f4;
    s32 f12f8;
    s32 f12fc;
    u8 pad1300[0x1384 - 0x1300];
    u16 tbl1[8];
    u8 pad1394[0x3394 - 0x1394];
    s32 f3394;
    s32 f3398;
    s32 f339c;
    u8 pad33a0[0x33ac - 0x33a0];
    s32 f33ac;
    u8 pad33b0[0x33b8 - 0x33b0];
    u8 f33b8;
    u8 f33b9;
    u8 f33ba;
    u8 f33bb[6];
    u8 pad33c1[0x33cd - 0x33c1];
    u8 f33cd;
    u8 pad33ce[2];
    s32 h0;
    s32 h1;
    s32 h2;
    s32 h3;
    s32 h4;
    s32 h5;
    s32 hk[4];
    s32 h6;
    Res2 *r33fc;
    Res2 *r3400;
    Res2 *r3404;
    Res *layers[4];
    Res *r3418;
    Slot slots[42];
    void *arc;
    u32 seed;
    Save *save;
    s32 f36c8;
    s32 f36cc;
} Game;



extern Game *data_ov004_02170320;
extern u8 data_ov004_0216fd48;

extern void *func_02069d98(void);
extern void func_020a0a98(s32 a);
extern BOOL func_ov004_02162920(u8 x, u8 y);
extern void func_ov004_0216194c(u8 x, u8 y);

#define G data_ov004_02170320

static inline u32 ScrOffset(u8 x, u8 y)
{
    u32 off;
    if (x < 32) {
        if (y < 32) off = (x + y * 32) * 2;
        else off = (x + (y - 32) * 32) * 2 + 0x1000;
    } else {
        if (y < 32) off = ((x - 32) + y * 32) * 2 + 0x800;
        else off = ((x - 32) + (y - 32) * 32) * 2 + 0x1800;
    }
    return off;
}

static inline BOOL TileFree(u8 x, u8 y, s32 cnt)
{
    s32 i;
    u16 tile = *(u16 *)((u8 *)func_02069d98() + ScrOffset(x, y));
    for (i = 0; i < cnt; i++) {
        if ((tile & 0x3ff) == (G->tbl10[0][i] & 0x3ff)) {
            return FALSE;
        }
    }
    return TRUE;
}

void func_ov004_02160d6c(u8 *px, u8 *py, u8 tx, u8 ty)
{
    s32 dx;
    s32 dy;
    s32 sx;
    s32 sy;
    s32 err;
    s32 step;
    s32 cnt;
    u8 ox;
    u8 oy;

    dx = tx - *px;
    sx = 0;
    dy = ty - *py;
    sy = 0;
    err = 0;
    if (dx > 0) {
        sx = 1;
    }
    if (dx < 0) {
        dx = -dx;
        sx = -1;
    }
    if (dy > 0) {
        sy = 1;
    }
    if (dy < 0) {
        dy = -dy;
        sy = -1;
    }
    if (dx == 0 && dy == 0) {
        return;
    }
    if (dx > dy) {
        step = (dy << 12) / dx;
    } else {
        step = (dx << 12) / dy;
    }
    cnt = data_ov004_0216fd48;
    for (;;) {
        ox = *px;
        oy = *py;
        if (G->save->f8 >= G->f24) {
            func_020a0a98(3);
            return;
        }
        if (tx - ox >= -1 && tx - ox <= 1 && ty - oy >= -1 && ty - oy <= 1) {
            if (!TileFree(tx, ty, cnt)) {
                return;
            }
            if (!func_ov004_02162920(tx, ty)) {
                return;
            }
            func_ov004_0216194c(tx, ty);
            *px = tx;
            *py = ty;
            return;
        }
        if (dx > dy) {
            *px += sx;
            err += step;
            if (err > 2048) {
                err -= 4096;
                *py += sy;
            }
        } else {
            err += step;
            *py += sy;
            if (err > 2048) {
                err -= 4096;
                *px += sx;
            }
        }
        if ((TileFree(*px, *py, cnt) && func_ov004_02162920(*px, *py))) {
            func_ov004_0216194c(*px, *py);
            continue;
        }
        if (*px != ox && *py != oy) {
            if (dx > dy) {
                if ((TileFree(*px, oy, cnt) && func_ov004_02162920(*px, oy))) {
                    *py = oy;
                    func_ov004_0216194c(*px, *py);
                    return;
                }
                if ((TileFree(ox, *py, cnt) && func_ov004_02162920(ox, *py))) {
                    *px = ox;
                    func_ov004_0216194c(*px, *py);
                    return;
                }
                *px = ox;
                *py = oy;
                return;
            } else {
                if ((TileFree(ox, *py, cnt) && func_ov004_02162920(ox, *py))) {
                    *px = ox;
                    func_ov004_0216194c(*px, *py);
                    return;
                }
                if ((TileFree(*px, oy, cnt) && func_ov004_02162920(*px, oy))) {
                    *py = oy;
                    func_ov004_0216194c(*px, *py);
                    return;
                }
                *px = ox;
                *py = oy;
                return;
            }
        }
        if (*px != ox) {
            if (sy != 0) {
                if ((TileFree(*px, *py + sy, cnt) && func_ov004_02162920(*px, *py + sy))) {
                    *py += sy;
                    func_ov004_0216194c(*px, *py);
                    return;
                }
                if ((TileFree(ox, *py + sy, cnt) && func_ov004_02162920(ox, *py + sy))) {
                    *px = ox;
                    *py += sy;
                    func_ov004_0216194c(*px, *py);
                    return;
                }
            }
            *px = ox;
            return;
        }
        if (*py == oy) {
            continue;
        }
        if (sx != 0) {
            if ((TileFree(*px + sx, *py, cnt) && func_ov004_02162920(*px + sx, *py))) {
                *px += sx;
                func_ov004_0216194c(*px, *py);
                return;
            }
            if ((TileFree(*px + sx, oy, cnt) && func_ov004_02162920(*px + sx, oy))) {
                *px += sx;
                *py = oy;
                func_ov004_0216194c(*px, *py);
                return;
            }
        }
        *py = oy;
        return;
    }
}
