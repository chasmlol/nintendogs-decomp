#include "ctx.h"

s32 func_0207a41c(s32 p0, u32 p1, s32 p3, u32 p4)
{
    s32 i1;
    s32 i3;
    s32 v1;
    s32 v2;
    u32 u2;
    u32 msk;

    if ((p1 & 0x20000000) != 0) {
        return p3;
    }
    i1 = p0 + p3;
    if ((p1 & 0xc0000000) == 0) {
        goto final;
    }
    msk = p1 & 0x0000ffff;
    if ((p1 & 0x40000000) == 0) {
        goto bit30clear;
    }
    if ((p4 & 1) != 0) {
        if (p4 > msk) {
            p4 = (msk >> 1) + 1;
            goto final;
        }
        p4 = p4 >> 1;
        goto two_load;
    }
    p4 = p4 >> 1;
    goto final;
bit30clear:
    if ((p4 & 3) == 0) {
        goto zero4;
    }
    if (p4 > msk) {
        p4 = (p4 & 3) + (msk >> 2);
        goto final;
    }
    if ((p4 & 1) == 0) {
        goto ev;
    }
    if ((p4 & 2) != 0) {
        p4 = p4 >> 2;
        u2 = p4 + 1;
    } else {
        u2 = p4 >> 2;
        p4 = u2 + 1;
    }
    if ((p1 & 0x10000000) != 0) {
        i3 = *(s16 *)(i1 + u2 * 2);
        i1 = *(s16 *)(i1 + p4 * 2);
    } else {
        i3 = *(s32 *)(i1 + u2 * 4);
        i1 = *(s32 *)(i1 + p4 * 4);
    }
    return (i3 * 3 + i1) >> 2;
ev:
    p4 = p4 >> 2;
    goto two_load;
zero4:
    p4 = p4 >> 2;
final:
    if ((p1 & 0x10000000) != 0) {
        i1 = *(s16 *)(i1 + p4 * 2);
    } else {
        i1 = *(s32 *)(i1 + p4 * 4);
    }
    return i1;
two_load:
    if ((p1 & 0x10000000) != 0) {
        u2 = p4 << 1;
        v1 = *(s16 *)(i1 + u2);
        v2 = *(s16 *)(i1 + p4 * 2 + 2);
    } else {
        v1 = *(s32 *)(i1 + p4 * 4);
        v2 = *(s32 *)(i1 + p4 * 4 + 4);
    }
    return (v1 + v2) >> 1;
}
