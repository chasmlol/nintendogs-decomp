#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *func_020364cc(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern s32 func_0203567c(u8 *p);
extern s32 func_0203592c(u8 *p, u8 *b);
extern s32 func_02036a88(u8 *p, u8 *b, s32 *c, s32 *d, s16 *e);
extern void func_ov003_02198ba0(u8 *p, s32 a, s32 b, u8 *c);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *b);

typedef struct { s32 a, b, c; } Vec3;

void func_ov003_0219350c(u8 *param_1)
{
    u8 *iVar3;
    s32 iVar4;
    s32 iVar7;
    BOOL bVar2;
    s16 asStack_24[2];
    Vec3 iStack_20;

    iVar3 = func_020364cc(param_1);
    if (iVar3 != NULL) {
        if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
            bVar2 = TRUE;
        } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
            bVar2 = TRUE;
        } else {
            bVar2 = FALSE;
        }
        if (!bVar2) {
            *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(iVar3 + 0xbc);
        }
    }
    iVar4 = func_0203567c(param_1);
    if (iVar4 == 0) {
        return;
    }
    bVar2 = func_0203592c(param_1, iVar3);
    if (bVar2 != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)data_0215942c == 0x8003) {
        bVar2 = FALSE;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = FALSE;
    } else {
        if (iVar3 != NULL) {
            if (*(s16 *)(iVar3 + 0x90) == 0 || *(s16 *)(iVar3 + 0x90) == 2) {
                bVar2 = TRUE;
            } else if (*(s16 *)(iVar3 + 0x94) == 0x35 && func_020c1f34(iVar3) == 0) {
                bVar2 = TRUE;
            } else {
                bVar2 = FALSE;
            }
            if (!bVar2) {
                goto L140;
            }
        }
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar2 = TRUE;
        goto LAB;
L140:
        if (func_02026c40(param_1, iVar3)) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar2 = TRUE;
        } else {
            bVar2 = FALSE;
        }
    }
LAB:
    if (bVar2) {
        return;
    }
    if (iVar3 == NULL) {
        return;
    }
    iVar7 = *(s32 *)(iVar3 + 0xf8);
    iStack_20 = *(Vec3 *)(iVar3 + 0xbc);
    iVar4 = func_02036a88(param_1, iVar3, (s32 *)&iStack_20, (s32 *)&iStack_20, asStack_24);
    func_ov003_02198ba0(param_1, iVar4, iVar7, iVar3);
}
