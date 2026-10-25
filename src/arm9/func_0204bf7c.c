#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_02027668(s32 a, s32 *b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02027654(s32 a, s32 *b);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, s32 a);
extern s32 func_020357c8(u8 *p, s32 a);
extern void func_0202fcc0(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern s32 func_0203567c(s32 a);
extern s32 func_02027710(u8 *p, s32 a);
extern u32 func_020449bc(void);
extern void func_020362ec(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern void func_0202707c(u8 *p, s32 a);

void func_0204bf7c(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 aiStack_18[3];
    u32 uVar4;
    s32 bv;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02027668(iVar2, aiStack_18);
        func_02067e34((s32 *)(param_1 + 0x2a0), aiStack_18, (s32 *)(param_1 + 0x26c));
        func_02027654(iVar2, (s32 *)(param_1 + 0x3b4));
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    iVar3 = func_020289d0(param_1, 0, 1);
    if (iVar3 != 0) {
        bv = 1;
        goto join;
    }
    if (func_0203592c(param_1, 0) != 0) {
        bv = 1;
        goto join;
    }
    if (func_020357c8(param_1, 0) != 0) {
        bv = 1;
        goto join;
    }
    if (iVar2 == 0) {
        func_0202fcc0(param_1);
        func_020362f8(param_1);
        bv = 1;
        goto join;
    }
    bv = 0;
join:
    if (bv != 0) {
        return;
    }
    iVar2 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
    }
    if (iVar2 == 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
        return;
    }
    if (func_0203567c(iVar2) == 0) {
        return;
    }
    iVar3 = func_02027710(param_1, iVar2);
    if (iVar3 != -1) {
        if (iVar3 == 0) {
            goto z0;
        }
        if (iVar3 != 1) {
            return;
        }
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
z0:
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
    }
    uVar4 = func_020449bc();
    if ((uVar4 & 0x100) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1) {
        return;
    }
    if ((u8)(s8)(*(s8 *)(iVar2 + 0x8b) - 4) <= 1) {
        return;
    }
    func_020362ec(param_1, (s16)(*(s8 *)(iVar2 + 0x88) + 0));
    func_0203e908(param_1, 0x273);
    func_020362ec((u8 *)iVar2, (s16)(*(s8 *)(param_1 + 0x88) + 0));
    func_0202707c((u8 *)iVar2, 22);
}
