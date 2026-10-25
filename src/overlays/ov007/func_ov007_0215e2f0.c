#include "ctx.h"

typedef struct {
    u32 unk0;
    s32 off;
} Ent;

typedef struct {
    u8 pad0[0x40];
    u8 *rows[16];
    Ent *tab[34];
    u16 unk108;
    u16 id;
} Ctx;

extern Ctx *data_ov007_02160d9c;
extern u8 data_ov007_02160b2c[];
extern u8 data_ov007_02160b40[];
extern u8 data_ov007_02160b54[];
extern u8 data_ov007_02160b5c[];
extern u8 data_ov007_02160b50[];
extern u8 data_ov007_02160b58[];

extern u32 func_0206fbc8(u16 id);
extern s32 func_0206fb04(u32 a, u32 b, s32 *c, s32 *d);
extern void func_02005e78(u8 x, u8 y, const void *fmt, ...);

u8 func_ov007_0215e2f0(u8 y)
{
    s32 a;
    s32 b;
    s32 i;
    s32 j;
    s32 off;

    if (func_0206fb04(0x438, func_0206fbc8(data_ov007_02160d9c->id), &a, &b) != 0) {
        func_02005e78(1, y, data_ov007_02160b2c, a, b);
        y++;
    }
    func_02005e78(1, y + 1, data_ov007_02160b40);
    y += 2;
    for (i = 0; i < 16; i++) {
        if (data_ov007_02160d9c->rows[i] != NULL) {
            func_02005e78(1, y, data_ov007_02160b50, i);
            for (j = 0; j < 10; j++) {
                func_02005e78(j + 5, y, data_ov007_02160b54, data_ov007_02160d9c->rows[i][j]);
            }
            func_02005e78(15, y, data_ov007_02160b58);
            for (j = 0; j < 10; j++) {
                off = data_ov007_02160d9c->tab[func_0206fbc8(data_ov007_02160d9c->id)]->off;
                func_02005e78(j + 18, y, data_ov007_02160b5c, *(off + (data_ov007_02160d9c->rows[i] + j) - 10));
            }
            y++;
        }
    }
    return y;
}
