#include "ctx.h"

extern u32 data_0214f464[];
extern s32 func_02036578(u8 *p);
extern s32 func_0202de0c(u8 *p);
extern s32 func_0202e304(u8 *p);
extern s32 func_02027894(u8 *p, s32 a);
extern s32 func_02027708(s32 a);
extern void func_0203e908(u8 *p, u32 a);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, u32 b);

s32 func_02053da0(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 x;
    s32 y;
    s32 g;
    s32 f;
    u32 *rng;
    u32 seed;

    iVar2 = func_02036578(param_1);
    if (iVar2 == 0) {
        return 0;
    }
    iVar3 = func_0202de0c(param_1);
    if (iVar3 >= 13) {
        return 0;
    }
    if (func_0202e304(param_1) != 0) {
        func_0203e908(param_1, 0x286);
        return 1;
    }
    iVar3 = func_02027894(param_1, iVar2);
    switch (iVar3) {
    case 2:
        func_0203e908(param_1, 0x287);
        return 1;
    case 1:
        iVar2 = func_02027708(iVar2);
        x = *(s16 *)(param_1 + 0xea);
        if (x < 620) {
            goto E0;
        }
        if (x > 623) {
            goto E0;
        }
        if (*(s16 *)(param_1 + 0x13e) == iVar2) {
            f = 1;
            goto E4;
        }
E0:
        f = 0;
E4:
        if (f != 0) {
            g = 1;
            goto L158;
        }
        if (x < 601) {
            goto M10c;
        }
        if (x > 607) {
            goto M10c;
        }
        f = 1;
        goto M110;
M10c:
        f = 0;
M110:
        if (f == 0) {
            goto L154;
        }
        y = *(s16 *)(param_1 + 0xee);
        if (y < 620) {
            goto L144;
        }
        if (y > 623) {
            goto L144;
        }
        if (*(s16 *)(param_1 + 0x13e) == iVar2) {
            g = 1;
            goto L148;
        }
L144:
        g = 0;
L148:
        if (g != 0) {
            g = 1;
            goto L158;
        }
L154:
        g = 0;
L158:
        if (g == 0) {
            goto Lnot;
        }
        func_0203e908(param_1, 0x285);
        return 1;
Lnot:
        rng = *(u32 **)data_0214f464;
        seed = *rng * 0x10dcd + 1;
        *rng = seed;
        if ((u16)(((u32)seed << 16) >> 31) == 0) {
            return 0;
        }
        func_0203e908(param_1, 0x286);
        return 1;
    case 0:
        iVar3 = func_02027894(param_1, iVar2);
        if (iVar3 == 0) {
            goto L21c;
        }
        if (iVar3 != 1 && iVar3 != 2) {
            goto L23c;
        }
        iVar3 = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar2, (s16)iVar3);
        func_0202707c(iVar2, 28);
        goto L23c;
L21c:
        iVar3 = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar2, (s16)iVar3);
        func_0202707c(iVar2, 29);
L23c:
        func_0203e908(param_1, 648);
        return 1;
    default:
        return 0;
    }
}
