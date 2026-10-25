#pragma opt_common_subs off
#include "ctx.h"

typedef s32 fx32;
typedef struct { s32 v[3]; } T3;
typedef union {
    struct { fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22; } s;
    fx32 m[3][3];
} MtxFx33;
typedef struct { fx32 w, x, y, z; } Quat;

extern u8 data_02144a84[];
extern s32 func_0206782c(s32 a);
extern s32 func_02067898(s32 a, s32 b);

static inline s32 FXI(s32 a, s32 b)
{
    s64 t = (s64)a * (s64)b;
    return (s32)((t + 0x800) >> 12);
}

/* MtxFx33 -> quaternion {w, x, y, z} (Shoemake) */
void func_020e28dc(Quat *q, const MtxFx33 *mtx)
{
    s32 i;
    fx32 s;
    s32 j;
    s32 k;
    fx32 a;
    const fx32 *pk;
    fx32 b;
    const fx32 *pj;
    fx32 c;
    const fx32 *pi;
    s32 next[3];
    fx32 qv[3];

    *(T3 *)next = *(T3 *)data_02144a84;
    c = mtx->s._22;
    b = mtx->s._11;
    a = mtx->s._00;
    s = a + b + c;
    if (s > 0) {
        s = func_0206782c(s + 0x1000);
        q->w = s >> 1;
        s = func_02067898(0x800, s);
        { fx32 dx = mtx->s._12 - mtx->s._21; q->x = FXI(dx, s); }
        { fx32 dx = mtx->s._20 - mtx->s._02; q->y = FXI(dx, s); }
        { fx32 dx = mtx->s._01 - mtx->s._10; q->z = FXI(dx, s); }
        return;
    }
    i = 0;
    if (b > a) {
        i = 1;
    }
    if (c > mtx->m[i][i]) {
        i = 2;
    }
    j = next[i];
    k = next[j];
    pj = mtx->m[j];
    pi = mtx->m[i];
    pk = mtx->m[k];
    s = func_0206782c((pi[i] - (pj[j] + pk[k])) + 0x1000);
    qv[i] = s >> 1;
    if (s == 0) {
    } else {
        s = func_02067898(0x800, s);
    }
    { fx32 dx = pj[k] - pk[j]; q->w = FXI(dx, s); }
    qv[j] = FXI(pj[i] + pi[j], s);
    qv[k] = FXI(pk[i] + pi[k], s);
    q->x = qv[0];
    q->y = qv[1];
    q->z = qv[2];
}
