#include "ctx.h"

typedef struct { u32 f0; u16 f4; s16 f6; s16 f8; u16 fa; s32 fc; } Blk;
typedef struct { u8 pad0[2]; s16 s2; s16 s4; u8 pad1[0x2305 - 6]; u8 b2305; } YT;
typedef struct {
    u8 pad0[0xc];
    s32 f0c;
    u8 pad1[0x33b0 - 0x10];
    u8 a[2][2][2];
    u8 pad2[0x33d4 - 0x33b8];
    u32 f33d4;
    u32 f33d8;
    u8 pad3[0x36c4 - 0x33dc];
    YT *y;
} GT;

typedef struct { u8 pad[0x10]; u16 *x10; } G24;

extern GT *volatile data_ov004_02170320;
extern s8 data_ov004_0216fd6c[][2][2];
extern Blk data_ov004_0216feec;
extern G24 *data_02159424;
extern void func_0210b614(u32 a, u32 b, u16 *c, Blk *d, s32 e, s32 f);

void func_ov004_0215d3ac(void)
{
    s32 i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            GT *w = data_ov004_02170320;
            if (data_ov004_0216fd6c[w->y->b2305][i][j] != -1) {
                Blk blk = data_ov004_0216feec;
                GT *g;
                u8 b1, b2;
                s32 kind;

                kind = 5;
                if (w->f0c != 0) {
                    kind = 6;
                }
                g = data_ov004_02170320;
                b1 = g->a[i][j][0];
                b2 = g->a[i][1 - j][0];
                if (b1 < b2) {
                    kind = 7;
                    if (w->f0c != 0) {
                        kind = 8;
                    }
                }
                g = data_ov004_02170320;
                blk.f6 = b1 * 8 - g->y->s2 + 4;
                blk.f8 = g->a[i][j][1] * 8 - g->y->s4 + 4;
                func_0210b614(g->f33d8, g->f33d4, data_02159424->x10, &blk, 0, kind);
            }
        }
    }
}
