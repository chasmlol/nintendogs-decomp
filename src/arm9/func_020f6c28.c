#include "ctx.h"

typedef struct { s32 x, y; } Pos;
typedef struct {
    u8 pad0[0x14];
    Pos p14;
    Pos pos[4];
    s32 f3c;
    s32 f40;
    s32 f44;
} Work;

void func_02112798(s32 a, s32 id, s32 c);
void func_02112a50(s32 a, s32 id, s16 x, s16 y);
void *func_01ffdb08(s16 i);
BOOL func_02028100(void *p);

extern u8 data_021331e4[4];
extern u8 data_021331fc[4][6];
extern u8 data_021331f0[11];
extern u8 data_021331e0[3];
extern u8 data_021331e8[3][2];
extern u8 data_021331d8[1];
extern u8 data_021331d4[1];
extern u8 data_021331dc[2];

void func_020f6c28(Work *w)
{
    s32 i, k, j;
    void *res;

    for (i = 0; i < 4; i++) {
        for (k = 0; k < data_021331e4[i]; k++) {
            func_02112798(2, data_021331fc[i][k], 1);
            func_02112a50(2, data_021331fc[i][k], w->pos[i].x >> 12, w->pos[i].y >> 12);
        }
    }
    for (i = 0; i < 11; i++) {
        func_02112798(2, data_021331f0[i], 1);
        func_02112a50(2, data_021331f0[i], 0, w->f3c >> 12);
    }
    j = 0;
    for (i = 0; i < 3; i++) {
        u8 a, b;
        func_02112798(2, data_021331e0[i], 0);
        a = data_021331e8[i][0];
        func_02112798(2, a, 0);
        b = data_021331e8[i][1];
        func_02112798(2, b, 0);
        func_02112a50(2, a, 0, w->f3c >> 12);
        func_02112a50(2, b, 0, w->f3c >> 12);
    }
    for (i = 0; i < 3; i++) {
        res = func_01ffdb08(i);
        if (res != NULL) {
            func_02112798(2, data_021331e0[j], 1);
            func_02112a50(2, data_021331e0[j], 0, w->f3c >> 12);
            if (func_02028100(res) == 0) {
                func_02112798(2, data_021331e8[j][0], 1);
                func_02112798(2, data_021331e8[j][1], 0);
            } else {
                func_02112798(2, data_021331e8[j][0], 0);
                func_02112798(2, data_021331e8[j][1], 1);
            }
            j++;
        }
    }
    for (i = 0; i < 1; i++) {
        func_02112798(2, data_021331d8[i], 1);
        func_02112a50(2, data_021331d8[i], w->p14.x >> 12, w->p14.y >> 12);
    }
    for (i = 0; i < 1; i++) {
        func_02112798(2, data_021331d4[i], 1);
        func_02112a50(2, data_021331d4[i], w->f40 >> 12, 0);
    }
    for (i = 0; i < 2; i++) {
        func_02112798(2, data_021331dc[i], 1);
        func_02112a50(2, data_021331dc[i], w->f44 >> 12, 0);
    }
}
