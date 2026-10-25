#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 x;
    u8 y;
} Move;

typedef struct {
    u8 pad0[8];
    s32 n;              /* 0x008 */
    Move moves[300];    /* 0x00c */
    u16 scr[1];         /* 0x264 */
} Sub;

typedef struct {
    s8 x;
    s8 y;
    s8 kind;
} Mark;

typedef struct {
    u8 pad0[0x1c];
    u8 sx;              /* 0x01c */
    u8 sy;              /* 0x01d */
    u8 pad1e[0x28 - 0x1e];
    u16 hist[300][5];   /* 0x028 */
    u16 tiles[29];      /* 0xbe0 */
    u8 padc1a[0xf7a - 0xc1a];
    u16 kinds[5];       /* 0xf7a */
    u8 padf84[0x12da - 0xf84];
    Mark marks[5];      /* 0x12da */
    u8 pad12e9[0x36c4 - 0x12e9];
    Sub *sub;           /* 0x36c4 */
} Game;

typedef struct {
    s8 dx;
    s8 dy;
} Dir;

typedef struct {
    u8 v[4][29];
} Tbl;

extern Game *data_ov004_02170320;
extern const Dir data_ov004_0216fd3c[5];
extern const Tbl data_ov004_021700c4;

extern u8 *func_02069d98(void);
extern void func_ov004_021625b4(u8 x, u8 y, u8 v);

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

static inline s32 ScrOffsetW(u32 x, u32 y)
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

static inline u16 GetBgTile(u8 x, u8 y)
{
    return *(u16 *)(func_02069d98() + ScrOffset(x, y));
}


static inline u16 GetScr(u8 x, u8 y) { return data_ov004_02170320->sub->scr[ScrOffsetW(x, y) >> 1]; }
static inline s32 FindT(u16 t) { s32 i; for (i = 0; i < 29; i++) { if (t == data_ov004_02170320->tiles[i]) return i; } return 0; }

void func_ov004_02161cb4(u8 x, u8 y)
{
    s32 i;
    s32 nx;
    s32 ny;
    s8 found;
    Tbl loc;
    s32 xn;
    s32 yn;
    u8 x0;
    u8 y0;

    for (i = 0; i < 5; i++) {
        nx = x + data_ov004_0216fd3c[i].dx;
        ny = y + data_ov004_0216fd3c[i].dy;
        if (nx >= 0 && nx < 64 && ny >= 0 && ny < 48) {
            s32 off = ScrOffset(nx, ny);
            Game *g = data_ov004_02170320;
            g->hist[g->sub->n][i] = g->sub->scr[off >> 1];
        }
    }
    data_ov004_02170320->sub->moves[data_ov004_02170320->sub->n].x = x;
    data_ov004_02170320->sub->moves[data_ov004_02170320->sub->n].y = y;
    found = -1;
    for (i = 1; i < 5; i++) {
        if ((GetBgTile(x, y) & 0x3ff) == (data_ov004_02170320->kinds[i] & 0x3ff)) {
            found = i;
            i = 5;
        }
    }
    if (found != -1) {
        for (i = 0; i < 5; i++) {
            if (data_ov004_02170320->marks[i].kind == -1) {
                data_ov004_02170320->marks[i].x = x;
                data_ov004_02170320->marks[i].y = y;
                data_ov004_02170320->marks[i].kind = found;
                i = 5;
            }
        }
    }
    func_ov004_021625b4(x, y, 1);
    data_ov004_02170320->sub->n++;
    loc = data_ov004_021700c4;
    x0 = data_ov004_02170320->sx;
    y0 = data_ov004_02170320->sy;
    if (data_ov004_02170320->sub->n >= 2) {
        x0 = (data_ov004_02170320->sub->moves - 2)[data_ov004_02170320->sub->n].x;
        y0 = (data_ov004_02170320->sub->moves - 2)[data_ov004_02170320->sub->n].y;
    }
    xn = x - 1;
    if (x0 == xn && y0 == (yn = y - 1)) {
        func_ov004_021625b4(xn, y, loc.v[3][FindT(GetScr(xn, y))]);
        func_ov004_021625b4(x, yn, loc.v[0][FindT(GetScr(x, yn))]);
    }
    if (x0 == xn && y0 == (yn = y + 1)) {
        func_ov004_021625b4(xn, y, loc.v[1][FindT(GetScr(xn, y))]);
        func_ov004_021625b4(x, yn, loc.v[2][FindT(GetScr(x, yn))]);
    }
    xn = x + 1;
    if (x0 == xn && y0 == (yn = y - 1)) {
        func_ov004_021625b4(xn, y, loc.v[2][FindT(GetScr(xn, y))]);
        func_ov004_021625b4(x, yn, loc.v[1][FindT(GetScr(x, yn))]);
    }
    if (x0 == xn && y0 == (yn = y + 1)) {
        func_ov004_021625b4(xn, y, loc.v[0][FindT(GetScr(xn, y))]);
        func_ov004_021625b4(x, yn, loc.v[3][FindT(GetScr(x, yn))]);
    }
}

