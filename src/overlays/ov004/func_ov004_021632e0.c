#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 x;
    u8 y;
} Pos;

typedef struct {
    u8 header[12];
    u16 tiles[24 * 32];
} Map;

typedef struct {
    u8 pad0[0xcaa];
    u16 fillTile;           /* 0x0caa */
    u8 pad1[0x112a - 0xcac];
    u16 emptyTile;          /* 0x112a */
    u8 pad2[0x1300 - 0x112c];
    s32 count;              /* 0x1300 */
    Pos pos[64];            /* 0x1304 */
    u16 colors[8];          /* 0x1384 */
    u16 screen[4096];       /* 0x1394 */
    u8 pad3[0x3408 - 0x3394];
    Map *maps[4];           /* 0x3408 */
} Work;

typedef struct {
    u8 pad[2];
    s16 id;
} Save;

extern Work *data_ov004_02170320;
extern Pos data_ov004_0216fd2c[4];
extern s8 data_ov004_0216fd24[];
extern Save *data_02159458;
extern u32 func_01ffdb08(s32 a);
extern u8 *func_020280e4(u32 a, s16 b);
extern void func_0207c910(u32 a, u32 b, void *c, u32 d);

void func_ov004_021632e0(void)
{
    s32 i, x, y;
    u32 h;
    s32 k;

    data_ov004_02170320->count = 0;
    for (i = 0; i < 4; i++) {
        for (y = 0; y < 24; y++) {
            for (x = 0; x < 32; x++) {
                u16 *cell = data_ov004_02170320->maps[i]->tiles + y * 32 + x;
                if (data_ov004_02170320->emptyTile == *cell) {
                    data_ov004_02170320->pos[data_ov004_02170320->count].x = x + data_ov004_0216fd2c[i].x;
                    data_ov004_02170320->pos[data_ov004_02170320->count].y = y + data_ov004_0216fd2c[i].y;
                    data_ov004_02170320->count++;
                    *cell = data_ov004_02170320->fillTile;
                }
            }
        }
    }
    for (i = 0; i < 4096; i++) {
        data_ov004_02170320->screen[i] = data_ov004_02170320->colors[0];
    }
    h = func_01ffdb08(data_02159458->id);
    for (k = 0; k < 64; k++) {
        u8 *p = func_020280e4(h, (s16)k);
        u32 px = p[1];
        u32 py = p[2];
        s32 off;
        if (px < 32) {
            if (py < 32) {
                off = (px + py * 32) * 2;
            } else {
                off = (px + (py - 32) * 32) * 2 + 0x1000;
            }
        } else if (py < 32) {
            off = ((px - 32) + py * 32) * 2 + 0x800;
        } else {
            off = ((px - 32) + (py - 32) * 32) * 2 + 0x1800;
        }
        data_ov004_02170320->screen[off >> 1] = data_ov004_02170320->colors[data_ov004_0216fd24[p[3]]];
    }
    func_0207c910(27, 0, data_ov004_02170320->screen, 0x2000);
}
