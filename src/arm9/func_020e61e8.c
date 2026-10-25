#include "ctx.h"

typedef struct { s32 w[3]; } T3;

extern u16 data_0214efdc[];

extern s32 func_02067898(s32 a, s32 b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_020e6ddc(u8 *p, s32 a);
extern s32 func_0206782c(s32 a);
extern void func_0209cef4(s32 *p, s32 a, s32 b);
extern s32 func_020c8164(u32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, s32 b, s32 c, s32 d, void *e, void *f, s32 g, void *h, void *i);
extern void func_020e69ec(void);
extern void func_020e69e0(void);
extern void func_020e6834(void);
extern void func_020e6830(void);

#define FXM(x, k) ((s32)(((s64)(s32)(x) * (k) + 0x800) >> 12))

void func_020e61e8(u8 *param_1)
{
    s32 *iVar7;
    s32 loc[3];
    s32 t;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 acc;
    s32 c1;
    u16 fl;

    iVar7 = *(s32 **)(param_1 + 0x214);
    {
        s32 t2 = *(s32 *)(param_1 + 0xe8);
        s32 t1 = *(s32 *)(param_1 + 0xe4);
        s32 t0 = *(s32 *)(param_1 + 0xe0);
        loc[0] = t0;
        loc[1] = t1;
        loc[2] = t2;
    }
    iVar7[0x38 / 4] = -1;
    acc = 0;
    c1 = iVar7[1];
    if (c1 > 0) {
        iVar7[1] = c1 - 1;
        func_020e6ddc(param_1, iVar7[0x24 / 4]);
        iVar6 = iVar7[2];
        if (iVar6 > 0) {
            iVar7[2] = iVar6 - iVar7[0x14 / 4] * 2;
        } else {
            iVar7[2] = iVar6 + iVar7[0x14 / 4] * 2;
        }
    } else {
        if (((u16)(((vu16 *)data_0214efdc)[1] & 1)) != 0 && iVar7[0x34 / 4] == 0) {
            iVar3 = iVar7[2];
            if (iVar3 < 0) {
                iVar7[2] = iVar3 + iVar7[0x14 / 4] * 4;
            } else {
                iVar7[2] = iVar3 + iVar7[0x14 / 4];
            }
            if (iVar7[2] > iVar7[3]) {
                iVar7[2] = iVar7[3];
            }
            iVar7[0x38 / 4] = 4;
        }
        if (((u16)(((vu16 *)data_0214efdc)[1] & 2)) != 0 && iVar7[0x34 / 4] == 0) {
            iVar3 = iVar7[2];
            if (iVar3 > 0) {
                iVar7[2] = iVar3 - iVar7[0x18 / 4] * 4;
            } else {
                iVar7[2] = iVar3 - iVar7[0x18 / 4];
            }
            if (iVar7[2] < -iVar7[3]) {
                iVar7[2] = -iVar7[3];
            }
            iVar7[0x38 / 4] = 5;
        }
        if (((u16)(((vu16 *)data_0214efdc)[1] & 0x10)) != 0) {
            t = func_02067898(iVar7[2], iVar7[3]);
            if (t > 0) {
                t = func_02067898(iVar7[2], iVar7[3]);
            } else {
                t = func_02067898(iVar7[2], iVar7[3]);
                t = -t;
            }
            iVar4 = iVar7[2];
            if (iVar4 > 0) {
                iVar3 = iVar4;
            } else {
                iVar3 = -iVar4;
            }
            if (iVar3 > 0x52) {
                acc = acc - (iVar7[8] + FXM(iVar7[7], 0x1000 - t));
            } else {
                acc = acc - ((iVar7[8] + FXM(iVar7[7], t >> 2)) >> 1);
            }
            if (iVar4 > 0) {
                iVar3 = iVar4;
            } else {
                iVar3 = -iVar4;
            }
            if (iVar3 >= 0x266) {
                fl = ((vu16 *)data_0214efdc)[1];
                if (((u16)(fl & 1)) == 0 && ((u16)(fl & 2)) == 0 && iVar7[0x34 / 4] == 0) {
                    *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + FXM(iVar4, loc[0]);
                    *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + FXM(iVar7[2], loc[2]);
                    iVar7[0x34 / 4] = 1;
                }
            }
        }
        if (((u16)(((vu16 *)data_0214efdc)[1] & 0x20)) != 0) {
            t = func_02067898(iVar7[2], iVar7[3]);
            if (t > 0) {
                t = func_02067898(iVar7[2], iVar7[3]);
            } else {
                t = func_02067898(iVar7[2], iVar7[3]);
                t = -t;
            }
            iVar5 = iVar7[2];
            if (iVar5 > 0) {
                iVar4 = iVar5;
            } else {
                iVar4 = -iVar5;
            }
            if (iVar4 > 0x52) {
                acc = acc + (iVar7[8] + FXM(iVar7[7], 0x1000 - t));
            } else {
                acc = acc + ((iVar7[8] + FXM(iVar7[7], t >> 2)) >> 1);
            }
            if (iVar5 > 0) {
                iVar3 = iVar5;
            } else {
                iVar3 = -iVar5;
            }
            if (iVar3 >= 0x266) {
                fl = ((vu16 *)data_0214efdc)[1];
                if (((u16)(fl & 1)) == 0 && ((u16)(fl & 2)) == 0 && iVar7[0x34 / 4] == 0) {
                    *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) + FXM(iVar5, loc[0]);
                    *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) + FXM(iVar7[2], loc[2]);
                    iVar7[0x34 / 4] = 1;
                }
            }
        }
        fl = ((vu16 *)data_0214efdc)[1];
        if (((u16)(fl & 1)) != 0 || ((u16)(fl & 2)) != 0) {
            iVar3 = iVar7[2];
            if (iVar3 <= 0) {
                iVar3 = -iVar3;
            }
            if (iVar3 <= 0x399) {
                iVar7[0x34 / 4] = 0;
            }
        }
        fl = ((vu16 *)data_0214efdc)[1];
        if ((((u16)(fl & 1)) == 0 && ((u16)(fl & 2)) == 0) || iVar7[0x34 / 4] != 0) {
            iVar3 = iVar7[2];
            if (iVar3 > 0) {
                iVar7[2] = iVar3 - iVar7[0x14 / 4] * 2;
                if (iVar7[2] < 0) {
                    iVar7[2] = 0;
                }
            } else {
                iVar7[2] = iVar3 + iVar7[0x14 / 4] * 2;
                if (iVar7[2] > 0) {
                    iVar7[2] = 0;
                }
            }
        }
        if (iVar7[0x34 / 4] == 0) {
            func_01ff832c(iVar7[2], loc, (s32 *)(param_1 + 0xbc), (s32 *)(param_1 + 0xbc));
        }
        if (iVar7[2] < 0) {
            acc = -acc;
        } else if (iVar7[2] == 0) {
            acc = 0;
        }
        func_020e6ddc(param_1, acc);
    }
    if (iVar7[0x34 / 4] != 0) {
        iVar6 = func_0206782c(FXM(*(s32 *)(param_1 + 0xb0), *(s32 *)(param_1 + 0xb0)) + FXM(*(s32 *)(param_1 + 0xb8), *(s32 *)(param_1 + 0xb8)));
        func_0209cef4((s32 *)(param_1 + 400), 0xb, iVar6);
        iVar7[0x38 / 4] = 0xb;
    }
    *(s32 *)(param_1 + 0xb0) = *(s32 *)(param_1 + 0xb0) - (*(s32 *)(param_1 + 0xb0) >> 4);
    *(s32 *)(param_1 + 0xb8) = *(s32 *)(param_1 + 0xb8) - (*(s32 *)(param_1 + 0xb8) >> 4);
    iVar6 = *(s32 *)(param_1 + 0xb0);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 < 0x29) {
        *(s32 *)(param_1 + 0xb0) = 0;
    }
    iVar6 = *(s32 *)(param_1 + 0xb8);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 < 0x29) {
        *(s32 *)(param_1 + 0xb8) = 0;
    }
    func_02067e68((s32 *)(param_1 + 0xb0), (s32 *)(param_1 + 0xbc), (s32 *)(param_1 + 0xbc));
    if (iVar7[0x38 / 4] - 4U <= 1) {
        iVar6 = iVar7[2];
        if (iVar6 <= 0) {
            iVar6 = -iVar6;
        }
        func_0209cef4((s32 *)(param_1 + 400), iVar7[0x38 / 4], iVar6);
    }
    iVar6 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), 0, 0, iVar6, (void *)func_020e69ec, (void *)func_020e69e0,
                  0, (void *)func_020e6834, (void *)func_020e6830);
}
