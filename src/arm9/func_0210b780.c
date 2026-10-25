#include "ctx.h"

/* 2-byte coordinate passed by value (see func_0210b95c) */
typedef struct { u16 v; } S2;
/* halfword with a signed 12-bit coordinate in the low bits */
typedef struct { s16 lo : 12; u16 hi : 4; } HW;
typedef struct { HW x; HW y; } HPos;

typedef struct {
    HPos pos;      /* 0 */
    u32 idx;       /* 4 */
} Cell;

typedef struct {
    u8 pad[6];
    u16 count;     /* 6 */
    Cell cells[1]; /* 8 */
} CellData;

typedef struct { s16 x, y; } V16;

typedef struct {
    s32 visible;   /* 0 */
    s16 prio;      /* 4 */
    V16 a;         /* 6 */
    V16 b;         /* 10 */
    u16 pad;
} AnimEnt;

typedef struct OamBuf OamBuf;

extern s32 func_0210b95c(u32 p1, OamBuf *buf, S2 px, S2 py, u32 idx, s32 charOfs, s32 prio, s32 h);

s32 func_0210b780(u32 p1, CellData *data, OamBuf *buf, AnimEnt *anim, s32 charOfs)
{
    s32 i;
    s32 count;
    Cell *cell;
    s32 acc = 0;

    if (data != NULL) {
        count = data->count;
        cell = &data->cells[count - 1];
        for (i = 0; i < count; i++) {
            HPos loc;
            loc.x = cell->pos.x;
            loc.y = cell->pos.y;
            if (anim != NULL) {
                AnimEnt *e = &anim[count - 1 - i];
                if (e->visible) {
                    loc.x.lo += e->a.x + e->b.x;
                    loc.y.lo += e->a.y + e->b.y;
                    acc += func_0210b95c(p1, buf, *(S2 *)&loc.x, *(S2 *)&loc.y, cell->idx, charOfs, e->prio, 1);
                }
            } else {
                acc += func_0210b95c(p1, buf, *(S2 *)&loc.x, *(S2 *)&loc.y, cell->idx, charOfs, 0, 1);
            }
            cell--;
        }
    }
    return acc;
}
