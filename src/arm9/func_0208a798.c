#include "ctx.h"

s32 func_0208a798(u8 *param_1, u8 *param_2, u32 *param_3)
{
    u32 uVar3;
    s32 bVar1;
    u32 zr;
    u32 k16;
    u32 k17;
    u8 *pb;
    u8 *pq;

    uVar3 = param_3[0];
    if (uVar3 >= *(u32 *)(param_1 + 0x38)) {
        goto zero;
    }
    zr = 0;
loop:
    uVar3 = *(u32 *)(param_1 + uVar3 * 4 + 0x3c);
    *param_2 = (u8)uVar3;
    bVar1 = *param_2;
    if (bVar1 > 16) {
        goto hi;
    }
    if (bVar1 >= 16) {
        goto c16;
    }
    switch (bVar1) {
    case 0:
        goto def;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        goto copy5;
    default:
        goto def;
    }
hi:
    if (bVar1 != 17) {
        goto def;
    }
    goto c17;
copy5:
    {
        u32 t1, t2;
        pb = (u8 *)((u32)param_1 + (uVar3 >> 8));
        t1 = *(u16 *)(param_1 + (uVar3 >> 8));
        t2 = *(u16 *)(pb + 2);
        *(u16 *)(param_2 + 2) = t1;
        *(u16 *)(param_2 + 4) = t2;
        t2 = *(vu16 *)(pb + 4);
        t1 = *(vu16 *)(pb + 6);
        *(u16 *)(param_2 + 6) = t2;
        *(u16 *)(param_2 + 8) = t1;
        t1 = *(u16 *)(pb + 8);
        *(u16 *)(param_2 + 10) = t1;
        param_3[0] = param_3[0] + 1;
        return 1;
    }
c16:
    pb = param_1 + (uVar3 >> 8);
    goto t16;
copy16:
    {
        u32 e16, t1, t2;
        e16 = (u32)pb + k16 * 12;
        t1 = *(u16 *)(e16 + 2);
        t2 = *(u16 *)(e16 + 4);
        *(u16 *)param_2 = t1;
        *(u16 *)(param_2 + 2) = t2;
        t2 = *(vu16 *)(e16 + 6);
        t1 = *(vu16 *)(e16 + 8);
        *(u16 *)(param_2 + 4) = t2;
        *(u16 *)(param_2 + 6) = t1;
        t2 = *(vu16 *)(e16 + 10);
        t1 = *(vu16 *)(e16 + 12);
        *(u16 *)(param_2 + 8) = t2;
        *(u16 *)(param_2 + 10) = t1;
        param_3[1] = param_3[1] + 1;
        return 1;
    }
t16:
    k16 = param_3[1];
    if (k16 >= (u32)((pb[1] - pb[0]) + 1)) {
        goto def;
    }
    goto copy16;
c17:
    pq = param_1 + (uVar3 >> 8);
    goto t17;
copy17:
    if (pq[k17] == 0) {
        goto def;
    }
    {
        u32 e17, t1, t2;
        e17 = (u32)pq + k17 * 12;
        t1 = *(u16 *)(e17 + 8);
        t2 = *(u16 *)(e17 + 10);
        *(u16 *)param_2 = t1;
        *(u16 *)(param_2 + 2) = t2;
        t2 = *(vu16 *)(e17 + 12);
        t1 = *(vu16 *)(e17 + 14);
        *(u16 *)(param_2 + 4) = t2;
        *(u16 *)(param_2 + 6) = t1;
        t2 = *(vu16 *)(e17 + 16);
        t1 = *(vu16 *)(e17 + 18);
        *(u16 *)(param_2 + 8) = t2;
        *(u16 *)(param_2 + 10) = t1;
        param_3[1] = param_3[1] + 1;
        return 1;
    }
t17:
    k17 = param_3[1];
    if (k17 < 8) {
        goto copy17;
    }
def:
    param_3[0] = param_3[0] + 1;
    param_3[1] = zr;
    uVar3 = param_3[0];
    if (uVar3 < *(u32 *)(param_1 + 0x38)) {
        goto loop;
    }
zero:
    return 0;
}
