#include "ctx.h"

typedef struct {
    s16 a;
    s16 b;
} Hdr;

typedef struct {
    u8 x;
    u8 y;
} Pos;

typedef struct {
    u8 pad0[8];
    s32 num;
    Pos pos[0x117e];
    s32 sel[3];
} Field;

typedef struct {
    u8 pad0[0xf7a];
    u16 tiles[5];
    u8 pad1[0x1300 - 0xf84];
    s32 count;
    Pos list[0x11de];
    u32 seed;
    Field *field;
} Game;

extern Hdr *data_02159458;
extern Game *data_ov004_02170320;
extern s32 func_01ffdb08(s32 v);
extern s32 func_02027f78(s32 a, s32 b);
extern u8 *func_02069d98(void);

static inline u16 Rand(u16 max)
{
    u32 s = data_ov004_02170320->seed * 0x10dcd + 1;
    data_ov004_02170320->seed = s;
    return (u16)(((u32)max * (u16)s) >> 16);
}

void func_ov004_021607c0(void)
{
    s32 v;
    u16 r;
    s32 n;
    s32 k;
    s32 fails;
    s32 i;
    s32 m;
    BOOL ok;
    u16 idx;
    u32 x;
    u32 y;
    u32 off;
    u32 tile;
    u32 lx;
    u32 ly;
    s32 j;

    v = func_01ffdb08(data_02159458->b);
    r = Rand(100);
    n = 0;
    k = 0;
    fails = 0;
    v = func_02027f78(v, 3);
    for (i = 0; i < 3; i++) {
        data_ov004_02170320->field->sel[i] = -1;
    }
    if (v <= 300) {
        if (r < 10) n = 0;
        else if (r < 60) n = 1;
        else if (r < 90) n = 2;
        else if (r < 100) n = 3;
    } else if (v <= 1800) {
        if (r < 20) n = 0;
        else if (r < 80) n = 1;
        else if (r < 100) n = 2;
    } else if (v <= 9999) {
        if (r < 30) n = 0;
        else if (r < 90) n = 1;
        else if (r < 100) n = 2;
    } else {
        if (r < 40) n = 0;
        else if (r < 100) n = 1;
    }
    m = data_ov004_02170320->field->num;
    if (m < 10) n = 0;
    if (n > m / 100 + 1) n = m / 100 + 1;
    while (k < n) {
        ok = TRUE;
        idx = Rand(data_ov004_02170320->field->num);
        x = data_ov004_02170320->field->pos[idx].x;
        y = data_ov004_02170320->field->pos[idx].y;
        if (x < 32) {
            if (y < 32) off = (x + y * 32) * 2;
            else off = (x + (y - 32) * 32) * 2 + 0x1000;
        } else {
            if (y < 32) off = ((x - 32) + y * 32) * 2 + 0x800;
            else off = ((x - 32) + (y - 32) * 32) * 2 + 0x1800;
        }
        tile = *(u16 *)(func_02069d98() + off) & 0x3ff;
        for (j = 0; j < 5; j++) {
            if (tile == (data_ov004_02170320->tiles[j] & 0x3ff)) ok = FALSE;
        }
        for (j = 0; j < data_ov004_02170320->count; j++) {
            ly = data_ov004_02170320->list[j].y;
            lx = data_ov004_02170320->list[j].x;
            if (x == lx && y == ly) ok = FALSE;
        }
        if (ok) {
            data_ov004_02170320->field->sel[k] = idx;
            k++;
            fails = 0;
        }
        if (++fails > 100) return;
    }
}
