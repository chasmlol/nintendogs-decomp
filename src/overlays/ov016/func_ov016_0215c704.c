#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 x;
    u8 y;
    u16 flags;
} TouchInfo;

typedef struct {
    u16 trg;
    u16 cont;
} PadInfo;

typedef struct {
    u32 unk0;
    u16 map[0x600];
    u8 cells[16][16];
    s32 w;
    s32 h;
    u8 unkd0c[0x100];
    s32 mode;
} Editor;

extern TouchInfo data_0214f004;
extern Editor *data_ov016_0215d1c0;
extern PadInfo data_0214efdc;

void func_ov016_0215c388(void);
void func_ov016_0215c000(void);

void func_ov016_0215c704(void)
{
    s32 x;
    s32 y;
    s16 tx;
    s16 ty;
    TouchInfo *tp = &data_0214f004;

    if (tp->flags & 1) {
        tx = tp->x;
        ty = tp->y;
        x = tx / 8 - 8;
        y = ty / 8 - 8;
        if (x >= 0 && x < data_ov016_0215d1c0->w && y >= 0 && y < data_ov016_0215d1c0->h) {
            if (tp->flags & 2) {
                if (data_ov016_0215d1c0->cells[y][x] == 0) {
                    data_ov016_0215d1c0->mode = 1;
                } else {
                    data_ov016_0215d1c0->mode = 0;
                }
            }
            if (data_ov016_0215d1c0->mode != 0) {
                data_ov016_0215d1c0->cells[y][x] = 1;
                data_ov016_0215d1c0->map[(y + 8) * 32 + x + 8] = 2;
            } else {
                data_ov016_0215d1c0->cells[y][x] = 0;
                data_ov016_0215d1c0->map[(y + 8) * 32 + x + 8] = 1;
            }
        }
    }
    if ((u16)(data_0214efdc.cont & 0x200) && (u16)(data_0214efdc.trg & 2)) {
        func_ov016_0215c388();
    }
    if ((u16)(data_0214efdc.trg & 0x20)) {
        if (data_ov016_0215d1c0->w > 1) {
            s32 n;
            n = (data_ov016_0215d1c0->h + 1) / 2;
            for (y = 0; y < data_ov016_0215d1c0->h + n; y++) {
                data_ov016_0215d1c0->map[(y + 8 - n) * 32 + data_ov016_0215d1c0->w + 7] = 0;
            }
            if (data_ov016_0215d1c0->w % 2 == 1) {
                s32 m;
                m = (data_ov016_0215d1c0->w + 1) / 2;
                for (y = 0; y < data_ov016_0215d1c0->h; y++) {
                    data_ov016_0215d1c0->map[(y + 8) * 32 + 8 - m] = 0;
                }
            }
            data_ov016_0215d1c0->w--;
        }
    }
    if ((u16)(data_0214efdc.trg & 0x10)) {
        if (data_ov016_0215d1c0->w < 16) {
            for (y = 0; y < data_ov016_0215d1c0->h; y++) {
                data_ov016_0215d1c0->map[(y + 8) * 32 + data_ov016_0215d1c0->w + 8] = data_ov016_0215d1c0->cells[y][data_ov016_0215d1c0->w] + 1;
            }
            data_ov016_0215d1c0->w++;
        }
    }
    if ((u16)(data_0214efdc.trg & 0x40)) {
        if (data_ov016_0215d1c0->h > 1) {
            s32 n;
            n = (data_ov016_0215d1c0->w + 1) / 2;
            for (x = 0; x < data_ov016_0215d1c0->w + n; x++) {
                data_ov016_0215d1c0->map[(data_ov016_0215d1c0->h + 7) * 32 + x + 8 - n] = 0;
            }
            if (data_ov016_0215d1c0->h % 2 == 1) {
                n = (data_ov016_0215d1c0->h + 1) / 2;
                for (x = 0; x < data_ov016_0215d1c0->w; x++) {
                    data_ov016_0215d1c0->map[(8 - n) * 32 + x + 8] = 0;
                }
            }
            data_ov016_0215d1c0->h--;
        }
    }
    if ((u16)(data_0214efdc.trg & 0x80)) {
        if (data_ov016_0215d1c0->h < 16) {
            for (x = 0; x < data_ov016_0215d1c0->w; x++) {
                data_ov016_0215d1c0->map[(data_ov016_0215d1c0->h + 8) * 32 + x + 8] = data_ov016_0215d1c0->cells[data_ov016_0215d1c0->h][x] + 1;
            }
            data_ov016_0215d1c0->h++;
        }
    }
    func_ov016_0215c000();
}
