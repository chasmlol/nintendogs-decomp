#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 v[4][29]; } Tbl;

typedef struct {
    u8 pad[0x264];
    u16 screen[1];
} Scr;

typedef struct {
    u8 pad0[0xbe0];
    u16 pal[29];
    u16 list[10][72];
    u8 pad1[0x36c4 - 0x11ba];
    Scr *scr;
} Work;

extern Tbl data_ov004_02170050;
extern u8 data_ov004_0216fd48[];
extern Work *data_ov004_02170320;
extern u8 *func_02069d98(void);

static inline s32 TileIdx(u32 x, u32 y)
{
    if (x < 32) {
        if (y < 32) {
            return (x + y * 32) * 2;
        }
        return (x + (y - 32) * 32) * 2 + 0x1000;
    }
    if (y < 32) {
        return ((x - 32) + y * 32) * 2 + 0x800;
    }
    return ((x - 32) + (y - 32) * 32) * 2 + 0x1800;
}

static inline BOOL NotInList0(u16 tile)
{
    s32 i;
    for (i = 0; i < data_ov004_0216fd48[0]; i++) {
        if ((tile & 0x3ff) == (data_ov004_02170320->list[0][i] & 0x3ff)) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 func_ov004_021625b4(u32 x, u32 y, s32 n)
{
    Tbl t = data_ov004_02170050;
    s32 idx;
    s32 result;
    s32 k, j;
    u16 tile;

    idx = TileIdx(x, y);
    tile = *(u16 *)(func_02069d98() + idx);
    result = 10;
    if (!NotInList0(tile)) {
        return 0;
    }
    for (k = 1; k < 10; k++) {
        u8 cnt = data_ov004_0216fd48[k];
        for (j = 0; j < cnt; j++) {
            if (((k == 1 || k == 6) && (tile & 0x3ff) == (data_ov004_02170320->list[k][j] & 0x3ff)) ||
                tile == data_ov004_02170320->list[k][j]) {
                result = k;
                j = 72;
            }
        }
        if (result != 10) {
            k = 10;
        }
    }
    if (result == 1) {
        idx = TileIdx(x, y);
        data_ov004_02170320->scr->screen[idx >> 1] = data_ov004_02170320->pal[n];
    } else if (result == 6) {
        idx = TileIdx(x, y);
        data_ov004_02170320->scr->screen[idx >> 1] = data_ov004_02170320->pal[28];
    } else {
        idx = TileIdx(x, y);
        data_ov004_02170320->scr->screen[idx >> 1] = data_ov004_02170320->pal[(t.v - 2)[result][n]];
    }
    return 1;
}
