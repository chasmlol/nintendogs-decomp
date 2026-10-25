#include "ctx.h"

typedef s32 fx32;
typedef struct { fx32 x, y, z; } VecFx32;
typedef struct { fx32 m[4][3]; } MtxFx43;

typedef struct {
    u8 pad00[0x8a];
    s16 f8a;         /* 0x8a */
    u8 pad8c[4];
    s16 f90;         /* 0x90 */
    u8 pad92[6];
    s16 f98;         /* 0x98 */
    u8 pad9a[8];
    u16 fa2;         /* 0xa2 */
    u8 pada4[0x18];
    s32 fbc;         /* 0xbc */
    fx32 fc0;        /* 0xc0 */
    u8 padc4[0x16c - 0xc4];
    u32 f16c;        /* 0x16c */
} Obj;

extern void *func_01ffdb08(s32 i);
extern BOOL func_02035134(void *o);
extern BOOL func_020c8380(void *o, s32 *b, fx32 r, VecFx32 *v);
extern BOOL func_02034808(void *o);
extern BOOL func_020c81d4(void *o, s32 *b, fx32 r, VecFx32 *v);
extern BOOL func_020c6578(Obj *p, s32 a, s32 b, VecFx32 *v, MtxFx43 *m);
extern BOOL func_020c7fe4(s32 *b, fx32 r, s32 c, VecFx32 *v, VecFx32 *w);

void func_020c6300(Obj *p, fx32 r, s32 a, s32 b, s32 c, void (*onAny)(Obj *, VecFx32 *), void (*onMove)(Obj *, VecFx32 *), void (*onMtx)(Obj *, VecFx32 *, MtxFx43 *), void (*onEnd)(Obj *, VecFx32 *), void (*onEach)(Obj *, s32))
{
    VecFx32 v0 = { 0, 0, 0 };
    s16 i;
    BOOL hit;
    void *o;

    hit = FALSE;
    if (p->f90 != 0 && p->f90 != 2 && p->f90 != 6 && p->f90 != 8) {
        for (i = 0; i < 3; i++) {
            s16 skip;
            o = func_01ffdb08(i);
            skip = p->f98;
            if (o != NULL && i != skip && !func_02035134(o)) {
                if (func_020c8380(o, &p->fbc, r, &v0)) {
                    p->f16c |= 1 << (i + 3);
                    hit = TRUE;
                }
                if (func_02034808(o) && p->fa2 == 0 && (p->f16c & 7) == 0 && func_020c81d4(o, &p->fbc, r, &v0)) {
                    p->f16c |= 1 << i;
                    onEach(p, i);
                    hit = TRUE;
                }
                if (p->f90 == 4 || p->f8a == 4) {
                    v0.x = 0;
                    v0.y = 0;
                    v0.z = 0;
                }
            }
        }
        if (hit) {
            onAny(p, &v0);
        }
    }
    if (p->f90 == 1 && p->f8a != 4) {
        VecFx32 v1 = { 0, 0, 0 };
        BOOL move;
        if (onMtx != NULL) {
            MtxFx43 m;
            if (func_020c6578(p, a, b, &v1, &m)) {
                onMtx(p, &v1, &m);
            }
        } else {
            if (p->fc0 < r) {
                v1.y += r - p->fc0;
                move = TRUE;
            } else {
                move = FALSE;
            }
            if (move) {
                onMove(p, &v1);
            }
        }
    }
    if (p->f90 == 1) {
        VecFx32 v3 = { 0, 0, 0 };
        if (func_020c7fe4(&p->fbc, r, c, &v3, &v0)) {
            onEnd(p, &v3);
        }
    }
}
