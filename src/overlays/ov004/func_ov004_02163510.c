#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 a; s32 b; } Rec;
typedef struct { u8 a; u8 b; } Pair;

typedef struct {
    u8 pad0[12];
    u16 tiles[24 * 32];
} Layer;

typedef struct {
    u8 pad0[0x2268];
    Pair main[4];
    u8 mainFlag[4];
    u8 pad2274;
    Pair sub[8];
    u8 subFlag[4][2];
    u8 subX[4][2];
    u8 pad2295;
    Pair extra[4];
    s8 extraFlag[4];
    u8 pad22a2[0x2305 - 0x22a2];
    u8 sel;
} Res;

typedef struct {
    u8 pad0[0xcaa];
    u16 blank;
    u8 padcac[0x100a - 0xcac];
    u16 vals[8];
    u8 pad101a[0x3408 - 0x101a];
    Layer *layers[4];
    u8 pad3418[0x36c0 - 0x3418];
    u32 seed;
    Res *res;
} Game;

typedef struct {
    u8 pad0[7];
    u8 n;
} Cfg;

extern Game *data_ov004_02170320;
extern Cfg data_ov004_0216fd48;
extern s16 *data_02159458;
extern u8 data_ov004_0216fd2c[4][2];
extern s8 data_ov004_0216fd54[][4];

#define G data_ov004_02170320

static inline u16 Rand(void)
{
    u32 s = G->seed * 0x10dcd + 1;
    G->seed = s;
    return (u16)s;
}

static inline u16 RandMax(u16 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

void func_ov004_02163510(void)
{
    s32 cnt[4];
    s8 used[20];
    Rec lists[4][20];
    s32 i;
    s32 k;
    s32 j;
    s32 l;
    s32 m;
    u16 *p;
    u16 v;
    u8 n;
    s32 idx;
    u16 r;
    s32 flag;
    s32 flag2;
    s32 ii;

    for (i = 0; i < 4; i++) {
        cnt[i] = 0;
    }
    n = data_ov004_0216fd48.n;
    for (k = 0; k < 4; k++) {
        for (j = 0; j < 24; j++) {
            for (m = 0; m < 32; m++) {
                p = G->layers[k]->tiles + j * 32 + m;
                v = *p;
                for (l = 0; l < n; l++) {
                    if (v == G->vals[l]) {
                        if (*data_02159458 != 0) {
                            lists[l][cnt[l]].a = m + data_ov004_0216fd2c[k][0];
                            lists[l][cnt[l]].b = j + data_ov004_0216fd2c[k][1];
                            cnt[l]++;
                        }
                        *p = G->blank;
                    }
                }
            }
        }
    }
    if (*data_02159458 == 0) {
        return;
    }
    for (k = 0; k < 4; k++) {
        for (ii = 0; ii < 20; ii++) {
            used[ii] = 0;
        }
        if (k < 4) {
            idx = RandMax(cnt[k]);
            used[idx] = 1;
            G->res->main[k].a = lists[k][idx].a;
            G->res->main[k].b = lists[k][idx].b;
            G->res->mainFlag[k] = 1;
        }
        for (j = 0; j < 2; j++) {
            flag = 0;
            while (flag == 0) {
                r = RandMax(cnt[k]);
                if (used[r] == 0) {
                    flag = 1;
                }
            }
            used[r] = 1;
            (G->res->sub + k * 2 + j)->a = lists[k][r].a;
            (G->res->sub + k * 2 + j)->b = lists[k][r].b;
            G->res->subFlag[k][j] = 1;
            G->res->subX[k][j] = 0;
        }
        if (k < 8) {
            flag2 = 0;
            while (flag2 == 0) {
                r = RandMax(cnt[k]);
                if (used[r] == 0) {
                    flag2 = 1;
                }
            }
            used[r] = 1;
            G->res->extra[k].a = lists[k][r].a;
            G->res->extra[k].b = lists[k][r].b;
            if (data_ov004_0216fd54[G->res->sel][k] >= 0) {
                G->res->extraFlag[k] = 1;
            } else {
                G->res->extraFlag[k] = -1;
            }
        }
    }
}



