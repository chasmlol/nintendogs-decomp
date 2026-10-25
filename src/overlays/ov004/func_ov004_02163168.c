#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 x;
    u8 y;
} BytePos;

typedef struct {
    u8 hdr[12];
    u16 cells[24 * 32];
} Screen;

typedef struct {
    u8 pad0[0xc1a];
    u16 fill;
    u8 pad1[0x109a - 0xc1c];
    u16 keys[8];
    u8 pad2[0x33b0 - 0x10aa];
    BytePos pos[8][2];
    u8 pad3[0x3408 - 0x33d0];
    Screen *maps[4];
} Game;

typedef struct {
    u8 pad[8];
    u8 n;
} Info;

extern Game *data_ov004_02170320;
extern BytePos data_ov004_0216fd2c[4];
extern Info data_ov004_0216fd48;

void func_ov004_02163168(void)
{
    s32 cnt[2];
    s32 m;
    s32 i;
    s32 x;
    s32 y;
    u8 n;
    u16 *cell;
    u16 key;

    for (m = 0; m < 2; m++) {
        cnt[m] = 0;
    }
    n = data_ov004_0216fd48.n;
    for (i = 0; i < 4; i++) {
        for (y = 0; y < 24; y++) {
            for (x = 0; x < 32; x++) {
                cell = &data_ov004_02170320->maps[i]->cells[y * 32] + x;
                key = *cell;
                for (m = 0; m < n; m++) {
                    if (key == data_ov004_02170320->keys[m]) {
                        data_ov004_02170320->pos[m][cnt[m]].x = x + data_ov004_0216fd2c[i].x;
                        data_ov004_02170320->pos[m][cnt[m]].y = y + data_ov004_0216fd2c[i].y;
                        cnt[m]++;
                        *cell = data_ov004_02170320->fill;
                    }
                }
            }
        }
    }
}
