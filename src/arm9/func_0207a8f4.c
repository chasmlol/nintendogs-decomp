#include "ctx.h"
#pragma opt_propagation off

typedef struct {
    u32 fp;
    u32 l54;
    u32 l50;
    u32 l4c;
    u32 l48;
    u32 l44;
    u32 l40;
    u32 l3c;
    u32 l38;
    u32 l34;
    u32 l30;
    u32 l2c;
    u32 l28;
    u32 l24;
    u32 l20;
    u32 l1c;
    u32 l18;
    u32 l14;
    u32 l10;
} Loc;

extern u32 data_0213e710[];
extern void func_020776d4(u32 fp, u32 *arr, u32 n);

void func_0207a8f4(u32 *p)
{
    Loc s;
    u32 k3 = 3;
    u32 k2 = 2;
    u32 z = 0;
    u32 pv;

    pv = p[0];
    if ((pv & 8) != 0) {
        s.fp = 0x00101610;
    } else {
        s.fp = 0x00101810;
    }
    *(vu32 *)&s.l14 = 0x1000;
    s.l54 = k3;
    s.l10 = k2;
    s.l18 = z;
    s.l24 = z;
    s.l28 = z;
    s.l2c = z;
    s.l30 = z;
    s.l34 = z;
    s.l38 = z;
    s.l44 = z;
    s.l48 = z;
    ((void (*)(u32 *, u32 *))data_0213e710[p[0] & 7])(&s.l50, p);
    if (p[0xc] != 0x1000) {
        s.l50 = (u32)(((s64)(s32)p[0xc] * (s32)s.l50) >> 12);
        s.l4c = (u32)(((s64)(s32)p[0xc] * (s32)s.l4c) >> 12);
        s.l20 = (u32)(((s64)(s32)p[0xc] * (s32)s.l20) >> 12);
    }
    if (p[0xd] != 0x1000) {
        s.l40 = (u32)(((s64)(s32)p[0xd] * (s32)s.l40) >> 12);
        s.l3c = (u32)(((s64)(s32)p[0xd] * (s32)s.l3c) >> 12);
        s.l1c = (u32)(((s64)(s32)p[0xd] * (s32)s.l1c) >> 12);
    }
    func_020776d4(s.fp, (u32 *)((u8 *)&s + 4), 0x12);
}
