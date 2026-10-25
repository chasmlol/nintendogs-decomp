#include "ctx.h"

typedef struct {
    u32 f0;
    u16 map[0x680];
    s32 w;
    s32 h;
} Field;

extern Field *data_ov016_0215d1c0;
extern void func_ov016_0215c388(void);

void func_ov016_0215c450(void)
{
    s32 i;
    s32 j;
    s32 hw = (data_ov016_0215d1c0->w + 1) / 2;
    s32 hh = (data_ov016_0215d1c0->h + 1) / 2;

    for (i = 0; i < 24; i++) {
        for (j = 0; j < 32; j++) {
            data_ov016_0215d1c0->map[i * 32 + j] = 0;
        }
    }
    for (i = 0; i < hh; i++) {
        for (j = 0; j < data_ov016_0215d1c0->w; j++) {
            data_ov016_0215d1c0->map[(i - hh + 8) * 32 + j + 8] = 8;
        }
    }
    for (i = 0; i < data_ov016_0215d1c0->h; i++) {
        for (j = 0; j < hw; j++) {
            data_ov016_0215d1c0->map[(i + 8) * 32 + j - hw + 8] = 8;
        }
    }
    for (i = 0; i < data_ov016_0215d1c0->h; i++) {
        for (j = 0; j < data_ov016_0215d1c0->w; j++) {
            data_ov016_0215d1c0->map[(i + 8) * 32 + j + 8] = 1;
        }
    }
    func_ov016_0215c388();
}
