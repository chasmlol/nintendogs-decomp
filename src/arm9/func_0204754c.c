#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern s32 *data_0214f464;
extern s32 func_02036578(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02027654(s32 a, u8 *b);
extern void func_020275dc(s32 a, u8 *b);
extern void func_02037450(u8 *p, s32 a);
extern s32 func_02009bd0(u8 *a, u8 *b);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern s32 func_02028130(u8 *p);
extern s32 func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_0202e304(u8 *p);
extern s32 func_02027710(u8 *p, s32 a);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);

s32 func_0204754c(u8 *param_1, s32 param_2)
{
    s32 iVar3;
    s32 iVar6;
    s32 iVar4;
    s32 sv;
    s32 r;
    s32 t;
    s32 wf;
    s16 x16;
    u32 x;

    iVar3 = func_02036578(param_1);
    iVar6 = 0;
    if (iVar3 != 0) {
        func_02039448(param_1);
        if (*(s32 *)(param_1 + 0x464) == 0) {
            func_02027654(iVar3, param_1 + 0x278);
        } else {
            func_020275dc(iVar3, param_1 + 0x278);
        }
        func_02037450(param_1, 0x300);
        iVar6 = func_02009bd0(param_1 + 0x278, param_1 + 0x2dc);
        if (*(s8 *)(param_1 + 0x93) == 5) {
            *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x278);
        }
    }
    func_02035be8(param_1);
    iVar4 = func_020289d0(param_1, 0, 1);
    if (iVar4 != 0) {
        return 1;
    }
    if (param_2 != 0 && func_0203592c(param_1, 0) != 0) {
        return 1;
    }
    if (param_2 != 0 && func_020357c8(param_1, 0) != 0) {
        return 1;
    }
    if (iVar3 == 0) goto LAB_end;
    if (param_2 == 0) goto C15c;
    x16 = *(s16 *)(iVar3 + 0xea);
    if (x16 < 0x2d9) goto WF0;
    if (x16 <= 0x2fc) {
        wf = 1;
        goto WJ;
    }
WF0:
    wf = 0;
WJ:
    if (wf == 0) goto LAB_end;
    if (iVar6 <= func_02028130(param_1) * 16) goto C15c;
LAB_end:
    return func_0202fcc0(param_1);
C15c:
    if (param_2 == 0) goto L2e4;
    iVar6 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 500) {
        func_020362f8(param_1);
        r = func_0202fd7c(param_1);
        goto L2d0;
    }
    if (iVar6 != 0) goto LCG;
    func_020362f8(param_1);
    r = func_0202fcc0(param_1);
    goto L2d0;
LCG:
    x = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = x;
    if ((u16)(((u32)(u16)x * 100) >> 16) != 0) goto P500;
    r = func_0202e304(param_1);
    if (r != 0) {
        r = 0;
        goto L2d0;
    }
    t = func_02027710(param_1, iVar6);
    switch (t) {
    case 1:
        r = 0;
        goto L2d0;
    case -1:
    case 0:
        sv = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar6, (s16)sv);
        func_0202707c(iVar6, 31);
        r = 1;
        goto L2d0;
    default:
        r = 0;
        goto L2d0;
    }
P500:
    x = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = x;
    if ((u16)(((u32)(u16)x * 500) >> 16) != 0) goto Z0;
    t = func_02027710(param_1, iVar6);
    if (t == -1) goto B2b8;
    if (t == 0) goto B2b8;
    if (t != 1) goto Z0;
B2b8:
    func_020362f8(param_1);
    r = func_0202fd7c(param_1);
    goto L2d0;
Z0:
    r = 0;
L2d0:
    if (r != 0) return 1;
L2e4:
    if (*(s16 *)(param_1 + 0xfa) == 30) {
        func_0203e908(param_1, 0x2d8);
        *(s16 *)(param_1 + 0xfa) = 0;
    }
    return 0;
}
