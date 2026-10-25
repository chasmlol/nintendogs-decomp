#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_0204d8f4(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u32 a);
extern s32 func_020357c8(u8 *p, u32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204b340(u8 *param_1)
{
    u8 *obj;
    s32 iVar2;
    s32 iVar3;
    s32 t;
    s32 bres;

    obj = param_1;
    iVar2 = func_02036578(obj);
    func_0204d8f4(obj, iVar2);
    func_02035be8(obj);
    iVar3 = func_020289d0(obj, 0, 1);
    if (iVar3 != 0) {
        return;
    }
    if (func_0203592c(obj, 0) != 0) {
        return;
    }
    if (func_020357c8(obj, 0) != 0) {
        return;
    }
    if (iVar2 == 0) {
        goto tail;
    }
    iVar3 = *(s16 *)(iVar2 + 0xea);
    if (iVar3 < 0x282) {
        goto z1;
    }
    if (iVar3 <= 644) {
        t = 1;
        goto j1;
    }
z1:
    t = 0;
j1:
    if (t != 0) {
        bres = 1;
        goto done;
    }
    if (iVar3 < 0x259) {
        goto z2;
    }
    if (iVar3 <= 0x25f) {
        t = 1;
        goto j2;
    }
z2:
    t = 0;
j2:
    if (t == 0) {
        goto l108;
    }
    iVar3 = *(s16 *)(iVar2 + 0xee);
    if (iVar3 < 0x282) {
        goto z3;
    }
    if (iVar3 <= 644) {
        t = 1;
        goto j3;
    }
z3:
    t = 0;
j3:
    if (t != 0) {
        bres = 1;
        goto done;
    }
l108:
    bres = 0;
done:
    if (bres) {
        return;
    }
tail:
    func_020362f8(obj);
    func_0202fcc0(obj);
}
