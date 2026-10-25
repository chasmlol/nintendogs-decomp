#include "ctx.h"

extern u32 data_02159030;
extern u16 data_0214efdc;
extern u32 func_02090b38(u32 a, u32 b, u32 c);
extern u32 func_02090cac(u32 a, u32 b, u32 c);
extern s32 func_021073ec(u16 *a, u32 b, u32 c);
extern s32 func_02101764(u32 a, u32 b);
extern void func_02101be4(s32 a, u32 b);
extern void func_02101ed0(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u16 *g, u32 h, u32 i);
extern u16 *func_02107308(u16 *a, u32 b, u32 c, u32 d);
extern void func_021093e4(u32 a);
extern u32 func_020fc3c0;

void func_021074d4(u8 *param_1)
{
    u32 cnt;
    u32 res;
    int zero;
    u32 c7;
    u32 c6;
    u16 *pu;
    s32 m1;
    s32 iv;

    {
        u16 vTop = *(u16 *)(param_1 + 0xc);
        if (vTop >= 0x1b62) {
            *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x1c);
        } else if (vTop >= 0x1770) {
            *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x18);
        } else {
            *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x14);
        }
    }
    if ((u16)(data_0214efdc & 0x40) == 0) goto L1d0;

    cnt = *(u16 *)(param_1 + 0xc);
    zero = 0;
LA_head:
    if (cnt >= 640) goto LA_b0;
    cnt = (u16)(cnt + 1);
    res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    goto LA_chk;
LA_b0:
    if (cnt >= 0x13fb) goto LA_d0;
    cnt = 0x13fb;
    res = func_02090b38(*(u32 *)(param_1 + 8), 0x13fb, zero);
    goto LA_chk;
LA_d0:
    if (0x1446 <= cnt) goto LA_f8;
    cnt = (u16)(cnt + 1);
    res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    goto LA_chk;
LA_f8:
    if (cnt >= 0x1770) goto LA_124;
    *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x18);
    cnt = 0x1770;
    res = func_02090b38(*(u32 *)(param_1 + 8), 0x1770, zero);
    goto LA_chk;
LA_124:
    if (0x1914 <= cnt) goto LA_150;
    cnt = (u16)(cnt + 1);
    res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    goto LA_chk;
LA_150:
    if (cnt >= 0x1b62) goto LA_17c;
    cnt = 0x1b62;
    *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x1c);
    res = func_02090b38(*(u32 *)(param_1 + 8), 0x1b62, zero);
    goto LA_chk;
LA_17c:
    if (cnt < 0x1b6c) {
        cnt = (u16)(cnt + 1);
        res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    } else {
        res = zero;
        cnt = *(u16 *)(param_1 + 0xc);
    }
LA_chk:
    if (res == 0xffffffff) goto LA_head;
    *(u16 *)(param_1 + 0xc) = (u16)(s32)cnt;
    *(u16 *)(0xe + param_1) = 0;
    *(u32 *)(param_1 + 0x1c10) = 0;
    goto L338;

L1d0:
    if ((u16)(data_0214efdc & 0x80) == 0) goto L338;
    cnt = *(u16 *)(param_1 + 0xc);
    zero = 0;
LB_head:
    if (cnt <= 0x1b62) goto LB_224;
    cnt = (u16)(cnt - 1);
    res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    goto LB_chk;
LB_224:
    if (cnt != 0x1b62) goto LB_250;
    *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x18);
    cnt = 0x1914;
    res = func_02090b38(*(u32 *)(param_1 + 8), 0x1914, zero);
    goto LB_chk;
LB_250:
    if (0x1770 >= cnt) goto LB_278;
    cnt = (u16)(cnt - 1);
    res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    goto LB_chk;
LB_278:
    if (0x1770 != cnt) goto LB_2a4;
    *(u32 *)(param_1 + 8) = *(u32 *)(*(u32 *)&data_02159030 + 0x14);
    cnt = 0x1446;
    res = func_02090b38(*(u32 *)(param_1 + 8), 0x1446, zero);
    goto LB_chk;
LB_2a4:
    if (cnt <= 0x13fb) goto LB_2cc;
    cnt = (u16)(cnt - 1);
    res = func_02090b38(*(u32 *)(param_1 + 8), cnt, zero);
    goto LB_chk;
LB_2cc:
    if (cnt != 0x13fb) goto LB_2ec;
    cnt = 640;
    res = func_02090b38(*(u32 *)(param_1 + 8), 640, zero);
    goto LB_chk;
LB_2ec:
    if (cnt > 500) {
        cnt = (u16)(cnt - 1);
        res = func_02090b38(*(u32 *)(8 + param_1), cnt, zero);
    } else {
        cnt = *(u16 *)(param_1 + 0xc);
        res = zero;
    }
LB_chk:
    if (res == 0xffffffff) goto LB_head;
    *(u16 *)(param_1 + 0xc) = (u16)cnt;
    *(u16 *)(param_1 + 0xe) = 0;
    *(u32 *)(param_1 + 0x1c10) = 0;

L338:
    if ((u16)(data_0214efdc & 0x10) == 0) goto L3ac;
    c7 = *(u16 *)(param_1 + 0xc);
    c6 = *(u16 *)(param_1 + 0xe);
    zero = 0;
    m1 = 0xffffffff;
L360:
    if (c6 < 7) {
        c6 = (u16)(c6 + 1);
        res = func_02090b38(*(u32 *)(param_1 + 8), c7, c6);
    } else {
        c6 = *(u16 *)(param_1 + 0xe);
        res = 0;
    }
L38c:
    if (res == m1) goto L360;
    *(u16 *)(param_1 + 0xc) = (u16)c7;
    *(u16 *)(param_1 + 0xe) = (u16)c6;
    *(u32 *)(param_1 + 0x1c10) = 0;
    goto L414;
L3ac:
    if ((u16)(data_0214efdc & 0x20) == 0) goto L414;
    c7 = *(u16 *)(param_1 + 0xc);
    c6 = *(u16 *)(param_1 + 0xe);
    zero = 0;
    m1 = 0xffffffff;
L3cc:
    if (c6 != 0) {
        c6 = (u16)(c6 - 1);
        res = func_02090b38(*(u32 *)(param_1 + 8), c7, c6);
    } else {
        res = 0;
        c6 = *(u16 *)(param_1 + 0xe);
    }
L3f8:
    if (res == m1) goto L3cc;
    *(u16 *)(param_1 + 0xc) = (u16)c7;
    *(u16 *)(param_1 + 0xe) = (u16)c6;
    *(u32 *)(param_1 + 0x1c10) = 0;

L414:
    if ((u16)(data_0214efdc & 1) == 0) return;
    pu = (u16 *)func_02090cac(*(u32 *)(param_1 + 8), *(u16 *)(param_1 + 0xc), *(u16 *)(param_1 + 0xe));
    iv = func_021073ec(pu, 0, 1);
    *(s16 *)(param_1 + 0x1c14) = (s16)iv;
    if (*(u32 *)(param_1 + 0x1c10) == 0) goto L4b4;
    *(u16 *)(param_1 + 0x1c16) = (u16)(*(u16 *)(param_1 + 0x1c16) + 1);
    if (*(u16 *)(param_1 + 0x1c16) >= *(u16 *)(param_1 + 0x1c14)) {
        *(u16 *)(param_1 + 0x1c16) = 0;
    }
    if (*(u16 *)(param_1 + 0x1c16) != 0) {
        pu = func_02107308(pu, 0, 1, *(u16 *)(param_1 + 0x1c16));
    }
    goto L4d8;
L4b4:
    if (*(u16 *)(param_1 + 0x1c14) != 0) {
        *(u32 *)(param_1 + 0x1c10) = 1;
    } else {
        *(u32 *)(param_1 + 0x1c10) = 0;
    }
    *(u16 *)(param_1 + 0x1c16) = 0;
L4d8:
    func_02101be4(func_02101764(0, 4), 0);
    func_02101ed0(0, 4, 2, 2, 1, 3, pu, 1, (u32)&func_020fc3c0);
    if (*(u32 *)(param_1 + 0x1c10) != 0) {
        func_021093e4(1);
        return;
    }
    func_021093e4(0);
}
