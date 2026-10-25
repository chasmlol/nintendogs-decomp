#include "ctx.h"

typedef struct { s8 x, y; } Off;
typedef struct { s16 x, y; } Pos;

typedef struct {
    u8 count;            /* 0x000 */
    u8 pad0[41];
    s16 cnt[20];         /* 0x02a */
    s8 t2[20];           /* 0x052 */
    s8 m[20][2];         /* 0x066 */
    s8 n[20][2];         /* 0x08e */
    Pos pos[20];         /* 0x0b6 */
    u8 w[20];            /* 0x106 */
    u8 p11a[20][2];      /* 0x11a */
    u8 rr[20];           /* 0x142 */
    u8 pad1[2];
    u32 c158;            /* 0x158 */
    u32 c15c;            /* 0x15c */
    u8 pad2[36];
    u32 f184;            /* 0x184 */
} Work;

typedef struct { u8 pad[0x66]; s16 r; u8 pad68[2]; s16 flag; } ObjB;
typedef struct { u8 pad[0xc]; s32 v; } ObjX;
typedef struct { u8 pad[0x1de8]; u32 v; } ObjG;

typedef struct {
    u32 f0;
    u16 a4;
    s16 x6;
    s16 y8;
    u16 z10;
    u16 z12;
} Blk;

extern Work *data_ov006_021661c4;
extern s16 *data_02159424;
extern ObjB *data_02159444;
extern ObjX *data_02159428;
extern ObjG *data_0215be48;
extern Off data_ov006_02165ce4[][8][2];

extern void *func_01ffdb08(s16 i);
extern void func_02027668(void *e, s32 *out);
extern void func_0210b614(u32 a, u32 b, u32 c, Blk *d, s32 e, s32 f);

void func_ov006_02164fb0(void)
{
    s32 selI;
    s32 selJ;
    s32 i;
    s32 j;
    s32 none;
    Blk blk;
    s32 out[3];

    selI = -1;
    selJ = -1;
    if (data_ov006_021661c4->f184 == 0) {
        return;
    }
    if (*data_02159424 != 0) {
        for (i = 0; i < data_ov006_021661c4->count; i++) {
            none = 1;
            for (j = 0; j < 2; j++) {
                s32 m;
                if (data_02159444->flag == 1) continue;
                m = data_ov006_021661c4->m[i][j];
                if (m != data_02159444->r) continue;
                selI = i;
                selJ = j;
                data_ov006_021661c4->cnt[i]++;
                none = 0;
            }
            if (none) {
                data_ov006_021661c4->cnt[i] = 0;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        void *e = func_01ffdb08(i);
        if (e == NULL) {
            continue;
        }
        func_02027668(e, out);
        blk.x6 = out[0] * 132 / data_02159428->v + 128;
        blk.y8 = out[2] * 100 / data_02159428->v + 96;
        blk.f0 = 1;
        blk.z10 = 0;
        blk.z12 = 0;
        blk.a4 = 1;
        func_0210b614(data_ov006_021661c4->c15c, data_ov006_021661c4->c158, data_0215be48->v, &blk, 0, 40);
    }
    if (*data_02159424 != 0) {
        for (i = data_ov006_021661c4->count - 1; i >= 0; i--) {
            for (j = 0; j < 2; j++) {
                if (data_ov006_021661c4->m[i][j] < 0) {
                    continue;
                }
                if (i == selI && j == selJ) {
                    blk.f0 = ((data_ov006_021661c4->cnt[i] >> 4) & 1) ? 0 : 1;
                } else {
                    blk.f0 = 1;
                }
                blk.x6 = data_ov006_021661c4->pos[i].x +
                         data_ov006_02165ce4[data_ov006_021661c4->t2[i]][data_ov006_021661c4->rr[i]][data_ov006_021661c4->n[i][j]].x;
                blk.y8 = data_ov006_021661c4->pos[i].y +
                         data_ov006_02165ce4[data_ov006_021661c4->t2[i]][data_ov006_021661c4->rr[i]][data_ov006_021661c4->n[i][j]].y;
                blk.z10 = 0;
                blk.z12 = 0;
                blk.a4 = 1;
                func_0210b614(data_ov006_021661c4->c15c, data_ov006_021661c4->c158, data_0215be48->v, &blk, 0,
                              data_ov006_021661c4->p11a[i][j]);
            }
        }
    }
    for (i = data_ov006_021661c4->count - 1; i >= 0; i--) {
        if (i == selI) {
            blk.f0 = ((data_ov006_021661c4->cnt[i] >> 4) & 1) ? 0 : 1;
        } else {
            blk.f0 = 1;
        }
        blk.x6 = data_ov006_021661c4->pos[i].x;
        blk.y8 = data_ov006_021661c4->pos[i].y;
        blk.z10 = 0;
        blk.z12 = 0;
        blk.a4 = 1;
        func_0210b614(data_ov006_021661c4->c15c, data_ov006_021661c4->c158, data_0215be48->v, &blk, 0,
                      data_ov006_021661c4->w[i]);
    }
}
