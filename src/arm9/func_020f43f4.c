#pragma avoid_byte strb
#include "ctx.h"


typedef struct Node {
    u8 b0;
    u8 b1;
    u8 pad02[0x2e];
    s32 w30;
    u8 pad34[4];
    s32 w38;
} Node;

typedef struct Obj {
    u8 pad00[0xc];
    s32 wc;
    s16 h10;
    s8 sel;
    u8 pad13;
    s32 w14;
    s32 w18;
    u8 pad1c[0x34];
    Node *cell[3][8][5];
    u8 pad230[0x24];
    u32 seed;
} Obj;

extern Obj *data_0215be44;
extern const s32 data_021330f0[2];
extern const u8 data_021330cc[3];
extern const s32 data_021330e4[2];
extern const s8 data_02133124[][24];
extern const s32 data_021330d8[3];
extern const s8 data_02133114[][24];

extern s32 func_02067898(s32 a, s32 b);
extern void func_0208f840(Node *n, u8 v);
extern void func_020f4a10(s32 a, s32 b, s32 *c, s32 *d);
extern void func_020a092c(s32 a);

#define FX_MUL(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020f43f4(void)
{
    s32 off3;
    s32 v, thr;
    Node *pb;
    Node *pa;
    s8 c;
    Node *n;
    s32 cnt;
    s32 j;
    s32 m;
    s32 best;
    s32 w;
    long k;
    s32 i;
    s32 koff;
    s32 joff;
    const u8 *cp;
    u8 *base;
    u8 *row;
    s32 px;
    s32 py;
    s32 d[2];

    for (k = 0; k <= 1; k++) {
        d[k] = FX_MUL(data_0215be44->wc, data_021330f0[k]);
    }
    for (k = 0; k <= 1; k++) {
        for (j = 0; j < 8; j++) {
            for (m = 0; m < data_021330cc[k]; m++) {
                n = data_0215be44->cell[k][j][m];
                if (n != NULL && (n->b1 & 1) == 0) {
                    n->w30 -= d[k];
                    if (n->w30 < -data_021330e4[k]) {
                        n->b1 |= 1;
                    }
                }
            }
        }
    }
    if (data_0215be44->w14 != data_0215be44->w18) {
        c = data_02133124[data_0215be44->w18][0];
        if (data_0215be44->sel != -1) {
            if (data_0215be44->sel == c) {
                data_0215be44->h10++;
            } else {
                data_0215be44->h10 -= 2;
                if (data_0215be44->h10 <= 0) {
                    data_0215be44->h10 = 0;
                    for (k = 0; k < data_021330cc[2]; k++) {
                        data_0215be44->cell[2][data_0215be44->sel][k]->b1 |= 1;
                    }
                    data_0215be44->sel = -1;
                }
            }
        }
        if (c != data_02133124[data_0215be44->w14][0]) {
            data_0215be44->sel = c;
        }
        if (data_0215be44->sel != -1) {
            if (data_0215be44->h10 <= 127) {
                v = func_02067898((data_0215be44->h10 * 15) << 12, 0x7f000);
                thr = 0xf000 - v;
                for (k = 0; k < data_021330cc[2]; k++) {
                    pb = data_0215be44->cell[2][data_02133114[data_0215be44->w14][16]][k];
                    pa = data_0215be44->cell[2][data_0215be44->sel][k];
                    pa->b1 &= ~1;
                    func_0208f840(pb, 31 - (data_0215be44->h10 >> 2));
                    func_0208f840(pa, data_0215be44->h10 >> 2);
                    pa->w30 = data_021330d8[2] * (k - ((s32)data_021330cc[2] >> 1));
                    pb->w38 = -(0xf000 - thr);
                    pa->w38 = thr + 0x1000;
                }
            } else {
                cnt = data_021330cc[2];
                for (i = 0; i < cnt; i++) {
                    pb = data_0215be44->cell[2][data_02133114[data_0215be44->w14][16]][i];
                    pa = data_0215be44->cell[2][data_0215be44->sel][i];
                    pb->b1 |= 1;
                    pa->w38 = 0;
                }
                data_0215be44->h10 = 0;
                data_0215be44->w14 = data_0215be44->w18;
                data_0215be44->sel = -1;
                func_020a092c(data_0215be44->w14);
            }
        }
    }
    for (i = 0, cp = data_021330cc, off3 = 0; i <= 1; i++) {
        func_020f4a10(data_0215be44->w14, i, &px, &py);
        if (px >= 0 && py >= 0) {
            best = -0x64000;
            base = (u8 *)data_0215be44 + off3;
            row = base;
            j = 0;
            do {
                for (m = 0; m < *cp; m++) {
                    n = ((Node **)(row + 0x50))[m];
                    if (n != NULL && (n->b1 & 1) == 0 && n->w30 > best) {
                        best = n->w30;
                    }
                }
                row += 20;
                j++;
            } while (j < 8);
            if (i == 0) {
                w = data_021330d8[i];
                if (best <= w + (w >> 1)) {
                    n = *(Node **)(base + px * 20 + py * 4 + 0x50);
                    n->b1 &= ~1;
                    {
                        Obj *o = data_0215be44;
                        u32 sd = o->seed * 0x10dcd + 1;
                        o->seed = sd;
                        n->w30 = (w >> 1) + w * 2 + FX_MUL((s16)(u16)(sd & 0xfff), w >> 1);
                    }
                }
            } else {
                w = data_021330d8[i];
                if (best <= (w >> 1)) {
                    n = *(Node **)(base + px * 20 + py * 4 + 0x50);
                    n->b1 &= ~1;
                    {
                        Obj *o = data_0215be44;
                        u32 sd = o->seed * 0x10dcd + 1;
                        o->seed = sd;
                        n->w30 = FX_MUL((s16)(u16)(sd & 0xfff), w >> 1) + w * 2;
                    }
                }
            }
        }
        off3 += 160;
        cp++;
    }
}
