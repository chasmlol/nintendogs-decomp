#include "ctx.h"

extern u8 *data_0215942c;
extern void func_020393d8(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_02022b7c(u8 *p);
extern s32 func_0202c3e0(u8 *p, s32 a);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

void func_ov003_021853fc(u8 *param_1)
{
    s32 iVar1;
    BOOL bVar2;

    func_020393d8(param_1, 0x1a9);
    iVar1 = *(s16 *)(param_1 + 0x152);
    bVar2 = FALSE;
    if (iVar1 == 0x191) {
        goto A;
    }
    if (iVar1 == 0x192) {
        goto A;
    }
    if (iVar1 != 0x193) {
        goto after;
    }
    goto B;
A:
    if (func_0203567c(param_1) != 0) {
        func_0203e8cc(param_1, 0, 0x193);
    }
    goto after;
B:
    bVar2 = (func_02035770(param_1, 1) != 0);
after:
    func_02022b7c(param_1);
    if (func_0202c3e0(param_1, 2) != 0) {
        return;
    }
    if (!bVar2) {
        return;
    }
    if (*(u16 *)data_0215942c == 1) {
        goto d0;
    }
    if (*(u16 *)data_0215942c != 4) {
        goto sw;
    }
d0:
    func_0203e908(param_1, 0x3ab);
    return;
sw:
    iVar1 = func_020385e4(param_1);
    switch (iVar1) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
    }
    return;
}
