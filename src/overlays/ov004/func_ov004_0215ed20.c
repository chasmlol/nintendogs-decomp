#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 w[12]; } T12;

extern u8 *data_ov004_02170320;
extern u8 *data_02159458;
extern T12 data_ov004_0216ff6c;
extern T12 data_ov004_0216ff9c;

extern s32 func_01ffdb08(s32 a);
extern s32 func_02027f78(s32 a, s32 b);
extern s32 func_020e2ac4(void);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_ov004_02160c3c(void);
extern void func_ov004_02160b0c(void);
extern void func_ov004_021607c0(void);
extern void func_ov004_02161a7c(void);
extern void func_0209f59c(s32 a);
extern void func_0207c910(s32 a, s32 b, u8 *c, s32 d);

/* old value goes to r0 */

/* old value stays in the value register */

#define G (data_ov004_02170320)
#define DP (*(u8 **)(data_ov004_02170320 + 0x3000 + 0x6c4))
#define DPP(q) (*(u8 **)((q) + 0x3000 + 0x6c4))


void func_ov004_0215ed20(void)
{
    u32 mode;
    u32 b10;
    u32 b11;
    s32 iVar10;
    s32 iVar8;
    u32 uVar12;
    T12 local_78;
    T12 local_48;
    s16 h12;
    s32 h14;
    s16 h16;
    s32 h18;
    s32 xv;
    s32 yv;
    u8 *cc;
    u8 *pb;
    u8 *ph;
    u8 *pp;
    u32 zero;
    u32 one;
    s32 kd;

    mode = *(u8 *)(G + 0x3000 + 0x6cc);
    if (mode != 1) goto L310;

    *(s32 *)(G + 0x3000 + 0x6c8) = -1;
    *(s32 *)(G + 0x3000 + 0x394) = (s16)((DP[0] * 8) - *(s16 *)(DP + 2));
    *(s32 *)(G + 0x3000 + 0x398) = (s16)((DP[1] * 8) - *(s16 *)(DP + 4));
    *(u8 *)((G + 0x10)) = (u8)(1);
    *(u8 *)((G + 0x11)) = (u8)(1);
    cc = G;
    b10 = cc[0x10];
    ph = cc + 0x16;
    pb = cc + 0x10;
    if (b10 == 0) goto Z1;
    if (b10 == 1) goto O1;
    if (b10 == 2) *(u16 *)ph = 240;
    goto J1;
Z1:
    *(u16 *)ph = 0;
    goto J1;
O1:
    *(u16 *)ph = 120;
J1:
    b11 = pb[1];
    if (b11 == 0) goto Z2;
    if (b11 == 1) goto O2;
    if (b11 == 2) *(u16 *)(ph + 2) = 192;
    goto J2;
Z2:
    *(u16 *)(ph + 2) = 0;
    goto J2;
O2:
    *(u16 *)(ph + 2) = 96;
J2:
    *(u16 *)(G + 0x12) = *(s16 *)(DP + 2);
    *(u16 *)(G + 0x14) = *(s16 *)(DP + 4);
    pp = G;
    if (*(s16 *)(DPP(pp) + 2) != *(s16 *)(pp + 0x16)) goto L170;
    if (*(s16 *)(DPP(pp) + 4) != *(s16 *)(pp + 0x18)) goto L170;
    *(u8 *)(pp) = (u8)(4);
    goto L188;
L170:
    *(s32 *)(pp + 8) = 0;
    *(u8 *)(G) = (u8)(3);
L188:
    iVar10 = func_01ffdb08(*(s16 *)(data_02159458 + 2));
    local_78 = data_ov004_0216ff6c;
    local_48 = data_ov004_0216ff9c;
    iVar10 = func_02027f78(iVar10, 4);
    iVar10 = iVar10 / 300;
    if (iVar10 > 5) iVar10 = 5;
    iVar8 = func_020e2ac4();
    if (iVar8 == 0) goto L284;
    uVar12 = *(u32 *)(G + 0x3000 + 0x6c0) * 0x10dcd + 1;
    *(u32 *)(G + 0x3000 + 0x6c0) = uVar12;
    {
        s32 hi;
        s32 lo;
        lo = *(s32 *)((u8 *)&local_78 +  iVar10 * 8);
        hi = *(s32 *)((u8 *)&local_78 + 4 + iVar10 * 8);
        hi = hi - lo;
        *(u8 *)(((u8 *)((u32)DP + 0x2000) + 0x2a4)) = (u8)((u32)(lo + (u16)((u32)(u16)(hi + 1) * (u16)uVar12 >> 16)));
    }
    goto L2f4;
L284:
    uVar12 = *(u32 *)(G + 0x3000 + 0x6c0) * 0x10dcd + 1;
    *(u32 *)(G + 0x3000 + 0x6c0) = uVar12;
    {
        s32 hi;
        s32 lo;
        lo = *(s32 *)((u8 *)&local_48 +  iVar10 * 8);
        hi = *(s32 *)((u8 *)&local_48 + 4 + iVar10 * 8);
        hi = hi - lo;
        *(u8 *)(((u8 *)((u32)DP + 0x2000) + 0x2a4)) = (u8)((u32)(lo + (u16)((u32)(u16)(hi + 1) * (u16)uVar12 >> 16)));
    }
L2f4:
    func_ov004_02160b0c();
    func_ov004_021607c0();
    func_0209f59c(1);
    return;

L310:
    if (mode != 2) goto L4e4;
    func_ov004_02161a7c();
    zero = 0;
    one = 1;
    *(u8 *)(DP) = (u8)(*(u8 *)(DP + 2 * *(u32 *)(DP + 8) + 10));
    *(u8 *)((DP + 1)) = (u8)(*(u8 *)(DP + 2 * *(u32 *)(DP + 8) + 11));
    *(s32 *)(G + 0x20) = zero;
    *(u8 *)((G + 0x1a)) = (u8)(*(u8 *)DP);
    *(u8 *)((G + 0x1b)) = (u8)(*(u8 *)(DP + 1));
    *(u8 *)((G + 0x10)) = (u8)(one);
    *(u8 *)((G + 0x11)) = (u8)(one);
    cc = G;
    b10 = cc[0x10];
    ph = cc + 0x16;
    pb = cc + 0x10;
    if (b10 == 0) goto Z3;
    if (b10 == 1) goto O3;
    if (b10 == 2) *(u16 *)ph = 240;
    goto J3;
Z3:
    *(u16 *)ph = zero;
    goto J3;
O3:
    *(u16 *)ph = 120;
J3:
    b11 = pb[1];
    if (b11 == 0) goto Z4;
    if (b11 == 1) goto O4;
    if (b11 == 2) *(u16 *)(ph + 2) = 192;
    goto J4;
Z4:
    *(u16 *)(ph + 2) = zero;
    goto J4;
O4:
    *(u16 *)(ph + 2) = 96;
J4:
    *(u16 *)(G + 0x12) = *(s16 *)(DP + 2);
    *(u16 *)(G + 0x14) = *(s16 *)(DP + 4);
    pp = G;
    if (*(s16 *)(DPP(pp) + 2) != *(s16 *)(pp + 0x16)) goto L48c;
    if (*(s16 *)(DPP(pp) + 4) != *(s16 *)(pp + 0x18)) goto L48c;
    *(u8 *)(pp) = (u8)(zero);
    goto L4a4;
L48c:
    *(s32 *)(pp + 8) = 0;
    *(u8 *)(G) = (u8)(one);
L4a4:
    *(s32 *)(G + 0x3000 + 0x6c8) = -1;
    func_0207c910(25, 0, DP + 0x264, 0x2000);
    return;

L4e4:
    if (*(u32 *)(G + 0x1000 + 0x2f0) != 0) goto L5dc;
    iVar10 = func_ov004_02160c3c();
    if (iVar10 == 0) return;
    cc = G;
    b10 = cc[0x10];
    ph = cc + 0x16;
    pb = cc + 0x10;
    if (b10 == 0) goto Z5;
    if (b10 == 1) goto O5;
    if (b10 == 2) *(u16 *)ph = 240;
    goto J5;
Z5:
    *(u16 *)ph = 0;
    goto J5;
O5:
    *(u16 *)ph = 120;
J5:
    b11 = pb[1];
    if (b11 == 0) goto Z6;
    if (b11 == 1) goto O6;
    if (b11 == 2) *(u16 *)(ph + 2) = 192;
    goto J6;
Z6:
    *(u16 *)(ph + 2) = 0;
    goto J6;
O6:
    *(u16 *)(ph + 2) = 96;
J6:
    *(u16 *)(G + 0x12) = *(s16 *)(DP + 2);
    *(u16 *)(G + 0x14) = *(s16 *)(DP + 4);
    *(s32 *)(G + 8) = 0;
    *(u32 *)(G + 0x1000 + 0x2f0) = 1;
    return;

L5dc:
    *(s32 *)(G + 8) = *(s32 *)(G + 8) + 1;
    if (*(s32 *)(G + 8) < 30) goto L624;
    *(s16 *)(DP + 2) = *(s16 *)(G + 0x16);
    iVar8 = 1;
    *(s16 *)(DP + 4) = *(s16 *)(G + 0x18);
    goto L6bc;
L624:
    iVar10 = func_02067898(*(s32 *)(G + 8) << 12, 0x1e000);
    h14 = *(s16 *)(G + 0x14);
    h18 = *(s16 *)(G + 0x18);
    h12 = *(s16 *)(G + 0x12);
    h16 = *(s16 *)(G + 0x16);
    iVar8 = 0;
    xv = (s32)(((s64)iVar10 * ((h18 - h14) * 0x1000) + 0x800) >> 12) + h14 * 0x1000; yv = (s32)(((s64)iVar10 * ((h16 - h12) * 0x1000) + 0x800) >> 12) + h12 * 0x1000;
    *(s16 *)(DP + 2) = (s16)((yv + 0x800) >> 12); *(s16 *)(DP + 4) = (s16)((xv + 0x800) >> 12);
L6bc:
    if (iVar8 != 0) *(u32 *)(G + 0x1000 + 0x2f0) = 0;
    return;
}
