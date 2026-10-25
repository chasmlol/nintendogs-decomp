#include "ctx.h"

s32 func_02006a30(s32 *param_1, s32 *param_2)
{
    s64 sum;
    s64 dres;
    s64 t;
    s64 p;
    s32 root;
    s32 a0;
    s32 a1;
    s32 a2;

    a0 = param_1[0];
    a1 = param_1[1];
    a2 = param_1[2];
    sum = (s64)a0 * a0 + (s64)a1 * a1 + (s64)a2 * a2;

    *(vu16 *)0x04000280 = 2;
    *(volatile s64 *)0x04000290 = (s64)1 << 56;
    *(volatile s64 *)0x04000298 = sum;
    *(vu16 *)0x040002b0 = 1;
    *(volatile s64 *)0x040002b8 = sum * 4;
    while ((*(vu16 *)0x040002b0 & 0x8000) != 0) {
    }
    root = *(volatile s32 *)0x040002b4;
    while ((*(vu16 *)0x04000280 & 0x8000) != 0) {
    }
    dres = *(volatile s64 *)0x040002a0;
    t = dres * (s64)root;
    p = t * (s64)param_1[0];
    param_2[0] = (s32)((p + ((s64)1 << 44)) >> 45);
    p = t * (s64)param_1[1];
    param_2[1] = (s32)((p + ((s64)1 << 44)) >> 45);
    p = t * (s64)param_1[2];
    param_2[2] = (s32)((p + ((s64)1 << 44)) >> 45);
    return (root + 1) >> 1;
}
