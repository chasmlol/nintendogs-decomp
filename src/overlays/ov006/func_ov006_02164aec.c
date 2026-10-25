#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    s16 a;
    s16 b;
} Rec;

typedef struct {
    u8 count;
    u8 xa[20][2];
    u8 gap29;
    u16 ya[20];
    u8 z[20];
    s8 w[20][2];
    s8 uu[20][2];
    Rec r[20];
    u8 t[20];
    u8 vv[20][2];
    u8 s[20];
} State;

typedef struct {
    u8 pad0[0x20];
    s32 id[2];
    s32 f28;
    s32 f2c;
    s32 type;
    s32 f34;
    s32 f38;
} Obj;

typedef struct {
    u8 pad0[4];
    u16 f4;
    u8 pad6[2];
    s32 f8;
    s32 fc;
    s32 f10;
    u8 pad14[0x10];
    s32 f24;
} Obj2;

typedef struct {
    u8 pad0[0x26];
    s16 n;
} Info;

typedef struct {
    u8 pad0[0x20];
    Info *info;
} Sys;

typedef struct {
    u8 pad0[0xc];
    s32 scale;
} Scr;

extern Sys *data_0214f45c;
extern State *data_ov006_021661c4;
extern Scr *data_02159428;
extern u8 data_ov006_02165cbc[][8];

extern void *func_0200c498(s32 a, s16 b);
extern u8 func_ov006_021649e8(s32 a);

#define ST data_ov006_021661c4

void func_ov006_02164aec(void)
{
    s32 n;
    s32 i;
    s32 j;
    s32 k;
    Obj *obj;
    s32 type;
    Obj2 *o2;
    s32 v;
    s32 sel;
    s32 added;
    s32 idx;

    n = data_0214f45c->info->n;
    ST->count = 0;
    for (i = 0; i < 20; i++) {
        ST->xa[i][0] = 0;
        ST->xa[i][1] = 0;
        ST->ya[i] = 0;
        ST->w[i][0] = -1;
        ST->w[i][1] = -1;
    }
    for (j = 0; j < n; j++) {
        obj = func_0200c498(9, j);
        for (k = 0; k < 2; k++) {
            added = 0;
            idx = 0;
            if (k == 1) {
                idx = 1;
            }
            v = obj->id[idx];
            if (v >= 0) {
                type = obj->type;
                o2 = func_0200c498(type, obj->f2c);
                sel = -1;
                ST->w[ST->count][k] = v;
                ST->vv[ST->count][k] = func_ov006_021649e8(v);
                if (k == 0) {
                    ST->uu[ST->count][k] = obj->f34;
                } else {
                    ST->uu[ST->count][k] = obj->f38;
                }
                if (type == 3 && o2->f24 == 1) {
                    ST->uu[ST->count][k] = 1 - ST->uu[ST->count][k];
                }
                ST->r[ST->count].a = o2->f8 * 132 / data_02159428->scale + 128;
                ST->r[ST->count].b = o2->f10 * 100 / data_02159428->scale + 96;
                switch (type) {
                case 0:
                    break;
                case 1:
                    sel = 0;
                    break;
                case 2:
                    sel = 1;
                    break;
                case 3:
                    sel = 2;
                    break;
                case 4:
                    sel = 3;
                    break;
                case 5:
                    sel = 4;
                    break;
                }
                ST->s[ST->count] = (u32)(u16)(o2->f4 + 0xfa5) >> 13;
                ST->t[ST->count] = data_ov006_02165cbc[sel][ST->s[ST->count]];
                added = 1;
                ST->z[ST->count] = sel;
            }
            if (added) {
                ST->count++;
            }
        }
    }
}
