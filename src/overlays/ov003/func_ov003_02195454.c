#include "ctx.h"

typedef struct { s32 v[3]; } T3;
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_020364cc(u8 *p);
s32 func_02036544(u8 *p);
void func_02039448(u8 *p);
void func_02027640(s32 a, void *b);
void func_02037450(u8 *p, s32 a);
void func_02014198(u8 *p, s32 a);
u32 func_02028124(u8 *p);
void func_0202508c(u8 *p, s32 a, s32 b, s32 c);
s32 func_020c1f34(s32 p);
s32 func_0203567c(u8 *p);
s32 func_020386d0(u8 *p);
void func_0203e908(u8 *p, s32 a);
void func_020362f8(u8 *p);
void func_0202fd7c(u8 *p);
u8 func_020274ac(u8 *p, s32 a);

extern u16 *data_0215942c;

u32 func_ov003_02195454(u8 *param_1)
{
    s32 bVar1;
    s32 iVar4;
    s32 iVar5;
    u32 uVar6;
    s32 iVar7;
    u8 bVar3;

    iVar4 = func_020364cc(param_1);
    iVar5 = func_02036544(param_1);
    if (iVar4 != 0) {
        if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && (iVar7 = func_020c1f34(iVar4), iVar7 == 0)) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            func_02039448(param_1);
            func_02027640(iVar5, param_1 + 0x278);
            *(T3 *)(param_1 + 0x3b4) = *(T3 *)(iVar4 + 0xbc);
            func_02037450(param_1, 0x300);
        }
    }
    func_02014198(param_1, 1);
    if (iVar5 != 0 && *(s16 *)(iVar5 + 0xea) == 0x3de) {
        uVar6 = func_02028124(param_1);
        func_0202508c(param_1, 5, 0x11, FX_Mul((s32)uVar6, -630));
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*data_0215942c == 0x8003) {
        bVar1 = 0;
        goto LAB_end;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar1 = 0;
        goto LAB_end;
    }
    {
        if (iVar4 != 0) {
            if (*(s16 *)(iVar4 + 0x90) == 0 || *(s16 *)(iVar4 + 0x90) == 2) {
                bVar1 = 1;
            } else if (*(s16 *)(iVar4 + 0x94) == 0x35 && (iVar7 = func_020c1f34(iVar4), iVar7 == 0)) {
                bVar1 = 1;
            } else {
                bVar1 = 0;
            }
            if (!bVar1) {
                goto zr_b;
            }
        }
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar1 = 1;
        goto LAB_end;
zr_b:
        bVar1 = 0;
    }
LAB_end:
    if (bVar1) {
        *(u16 *)(param_1 + 0xfa) = 0;
        bVar3 = func_020274ac(param_1, -1);
        return bVar3;
    }
    if (iVar5 == 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        *(u16 *)(param_1 + 0xfa) = 0;
        bVar3 = func_020274ac(param_1, -1);
        return bVar3;
    }
    if (*(s16 *)(iVar4 + 0x90) == 1) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        *(u16 *)(param_1 + 0xfa) = 0;
        bVar3 = func_020274ac(param_1, -1);
        return bVar3;
    }
    uVar6 = (u32)*(s16 *)(param_1 + 0xfa);
    if (uVar6 == 0) goto zero_blk;
    if (uVar6 == 0x27) goto b27;
    if (uVar6 == 0x28) goto b28;
    return uVar6;
b27:
    iVar4 = func_020386d0(param_1);
    func_0203e908(param_1, (s16)(iVar4 + 0x3d1));
    *(u16 *)(param_1 + 0xfa) = 0;
    bVar3 = func_020274ac(param_1, -1);
    return bVar3;
b28:
    func_0202fd7c(param_1);
    *(u16 *)(param_1 + 0xfa) = 0;
    bVar3 = func_020274ac(param_1, -1);
    return bVar3;
zero_blk:
    iVar4 = func_0203567c(param_1);
    if (iVar4 == 0) {
        return iVar4;
    }
    func_0203e908(param_1, 0x3de);
}
