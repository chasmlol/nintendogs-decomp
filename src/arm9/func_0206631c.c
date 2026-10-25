#include "ctx.h"

typedef struct { s32 _00, _01, _10, _11; } MtxFx22;

void func_0206631c(const MtxFx22 *a, const MtxFx22 *b, MtxFx22 *ab)
{
    MtxFx22 tmp;
    MtxFx22 *p;
    s32 x;
    s32 y;

    if (ab == b) {
        p = &tmp;
    } else {
        p = ab;
    }
    x = a->_00;
    y = a->_01;
    p->_00 = (s32)(((s64)x * b->_00 + (s64)y * b->_10) >> 12);
    p->_01 = (s32)(((s64)x * b->_01 + (s64)y * b->_11) >> 12);
    x = a->_10;
    y = a->_11;
    p->_10 = (s32)(((s64)x * b->_00 + (s64)y * b->_10) >> 12);
    p->_11 = (s32)(((s64)x * b->_01 + (s64)y * b->_11) >> 12);
    if (p == &tmp) {
        *ab = tmp;
    }
}
