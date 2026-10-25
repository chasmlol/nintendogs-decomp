#include "ctx.h"

extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern s32 func_020365c8(u8 *p, u8 *q);
extern s32 func_02039588(u8 *p);
extern u32 func_ov003_0219a510(u8 *p, u8 *q, u32 r);
extern s32 func_02027ec8(u8 *p, s32 a);
extern s32 func_020388a8(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_020383b4(u8 *p);

s32 func_ov003_0219a368(u8 *param_1)
{
    u32 iv;
    u8 *iVar3;
    s32 v;
    s16 sv;
    s32 r;
    s32 u;
    s32 bz;
    s32 x90;

    iVar3 = func_020364cc(param_1);
    if (iVar3 == NULL) {
        goto zero;
    }
    x90 = *(s16 *)(iVar3 + 0x90);
    if (x90 == 0) {
        goto Ltrue;
    }
    if (x90 != 2) {
        goto L34;
    }
Ltrue:
    bz = 1;
    goto join;
L34:
    if (*(s16 *)(iVar3 + 0x94) != 0x35) {
        goto Lfalse;
    }
    if (func_020c1f34(iVar3) == 0) {
        bz = 1;
        goto join;
    }
Lfalse:
    bz = 0;
join:
    if (bz != 0) {
        goto zero;
    }
    r = func_020365c8(param_1, iVar3);
    if (r == 0) {
        goto L140;
    }
    if (r != 1 && r != 2) {
        goto zero;
    }
    if (func_02039588(param_1) != 0) {
        return 1;
    }
    u = func_ov003_0219a510(param_1, iVar3, *(u32 *)(param_1 + 0x488));
    if (u == 0) {
        goto L104;
    }
    iv = func_02027ec8(param_1, 0);
    sv = func_020388a8(param_1, iv);
    v = sv;
    if (v > 2) {
        v = 2;
    }
    func_0203e908(param_1, (s16)(v + 0x3c7));
    return 1;
L104:
    iv = func_02027ec8(param_1, 1);
    v = func_020388a8(param_1, iv);
    func_0203e908(param_1, (s16)(v + 0x3c0));
    return 1;
L140:
    if (func_02039588(param_1) != 0) {
        return 1;
    }
    v = func_020383b4(param_1);
    func_0203e908(param_1, (s16)(0x3cd + v));
    return 1;
zero:
    return 0;
}
