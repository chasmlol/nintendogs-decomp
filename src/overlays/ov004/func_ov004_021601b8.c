#include "ctx.h"

typedef struct {
    u8 pad0[0x11ba];
    u16 table[8][18];
    u8 pad1[0x36c4 - 0x11ba - 8 * 36];
    u8 *pos;
} Game;

typedef struct { s32 v[8]; } Dirs;

extern Game *data_ov004_02170320;
extern const Dirs data_ov004_0216ff4c;
extern u8 data_ov004_0216fd34[];
extern u8 data_ov004_0216fd36[];
extern void *func_02069d98(void);

#define ABS(v) ((v) > 0 ? (v) : -(v))

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

s32 func_ov004_021601b8(void)
{
    s32 found[8];
    Dirs open;
    s32 x;
    s32 y;
    s32 tx;
    s32 ty;
    BOOL hit;
    s32 n;
    s32 m;
    s32 k;
    long i;
    u16 tile;
    u16 t2;
    u8 *p;
    u8 *c;
    open = data_ov004_0216ff4c;
    for (i = 0; i < 8; i++) {
        found[i] = 0;
    }
    for (y = -2; y <= 2; y++) {
        for (x = -2; x <= 2; x++) {
            p = data_ov004_02170320->pos;
            tx = p[0] + x;
            ty = p[1] + y;
            if (tx < 0 || tx > 63 || ty < 0 || ty > 47) continue;
            if (ABS(x) >= 2 && ABS(y) >= 2) continue;
            tile = *(u16 *)((u8 *)func_02069d98() + ScrOffset(tx, ty)) & 0x3ff;
            for (i = 2; i < 8; i++) {
                for (m = 0; m < data_ov004_0216fd34[i]; m++) {
                    if (tile == (data_ov004_02170320->table[i][m] & 0x3ff)) found[i] = 1;
                }
            }
        }
    }
    n = data_ov004_0216fd34[1];
    for (y = -2; y <= 2; y++) {
        for (x = -2; x <= 2; x++) {
            p = data_ov004_02170320->pos;
            tx = p[0] + x;
            ty = p[1] + y;
            if (tx >= 0 && tx <= 63 && ty >= 0 && ty <= 47) {
                hit = FALSE;
                tile = *(u16 *)((u8 *)func_02069d98() + ScrOffset(tx, ty)) & 0x3ff;
                for (m = 0; m < n; m++) {
                    if (tile == (data_ov004_02170320->table[1][m] & 0x3ff)) {
                        hit = TRUE;
                    }
                }
                if (!hit) {
                    if (ABS(x) <= 1 && y <= 0) open.v[0] = 0;
                    if (x >= 0 && y <= 0) open.v[1] = 0;
                    if (x >= 0 && ABS(y) <= 1) open.v[2] = 0;
                    if (x >= 0 && y >= 0) open.v[3] = 0;
                    if (ABS(x) <= 1 && y >= 0) open.v[4] = 0;
                    if (x <= 0 && y >= 0) open.v[5] = 0;
                    if (x <= 0 && ABS(y) <= 1) open.v[6] = 0;
                    if (x <= 0 && y <= 0) open.v[7] = 0;
                }
            } else {
                if (tx < 0) { open.v[5] = 0; open.v[6] = 0; open.v[7] = 0; }
                if (tx > 63) { open.v[1] = 0; open.v[3] = 0; open.v[2] = 0; }
                if (ty < 0) { open.v[0] = 0; open.v[1] = 0; open.v[7] = 0; }
                if (ty > 47) { open.v[3] = 0; open.v[4] = 0; open.v[5] = 0; }
            }
        }
    }
    if (found[3]) return 3;
    if (found[2]) return 2;
    if (found[5]) return 5;
    if (found[4]) return 4;
    if (found[6]) return 6;
    if (found[7]) return 7;
    if (open.v[0] || open.v[1] || open.v[2] || open.v[3] ||
        open.v[4] || open.v[5] || open.v[6] || open.v[7]) {
        return 1;
    }
    return 0;
}
