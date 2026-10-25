#include "ctx.h"
#pragma opt_loop_invariants off
#pragma opt_common_subs off

typedef void (*FnCb)(s32 *a, u8 *b, u32 c);

extern void func_0206c834(s32 a, s32 *b, s32 c);
extern void func_02074e0c(s32 *a, s32 *b, s32 c, s32 d);
extern s32 func_02067898(s32 a, s32 b);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02067af0(s32 *a, s32 *b);

s32 func_02074b08(s32 *param_1, u8 *param_2, s32 param_3)
{
    s32 uVar2;
    u8 *nd;
    s32 idx;
    s32 iVar6;
    s32 tt;
    u8 *nx;
    s32 vl;
    s32 F[23];
    u8 *iVar4;
    s32 iVar3;
    u16 uVar1;
    u8 *iVar5;
    s32 nxt;
    u8 *off2;

    nxt = *(s32 *)(param_2 + 0x10);
    idx = param_3;
    if (nxt == 0) {
        uVar1 = *(u16 *)(param_2 + idx * 2 + 0x1a);
        if ((uVar1 & 0x300) != 0x100) {
            return 0;
        }
        ((FnCb)(*(u32 *)(param_2 + 0xc)))(param_1, param_2, uVar1 & 0xff);
        return 1;
    }
    off2 = (u8 *)(idx * 2);
    iVar6 = 0;
    iVar3 = 0;
    iVar5 = param_2;
    iVar4 = param_2;
    do {
        tt = *(u16 *)(off2 + (s32)iVar4 + 0x1a) & 0x300;
        if (tt == 0x100) {
            iVar6 = iVar6 + *(s32 *)(iVar4 + 4);
            iVar5 = iVar4;
            iVar3 = iVar3 + 1;
        }
        iVar4 = *(u8 **)(iVar4 + 0x10);
    } while (iVar4 != 0);
    if (iVar6 == 0) {
        return 0;
    }
    if (iVar3 == 1) {
        uVar1 = *(u16 *)(iVar5 + idx * 2 + 0x1a);
        ((FnCb)(*(u32 *)(iVar5 + 0xc)))(param_1, iVar5, uVar1 & 0xff);
        return 1;
    }
    F[0] = 0;
    func_0206c834(*(volatile s32 *)&F[0], param_1, 0x58);
    *param_1 = -1;
    nd = param_2;
    do {
        uVar1 = *(u16 *)(nd + idx * 2 + 0x1a);
        if (((uVar1 & 0x300) == 0x100) && (0 < *(s32 *)(nd + 4))) {
            ((FnCb)(*(u32 *)(nd + 0xc)))((s32 *)&F[1], nd, uVar1 & 0xff);
            if (iVar6 == 0x1000) {
                vl = *(s32 *)(nd + 4);
            } else {
                vl = func_02067898(*(s32 *)(nd + 4), iVar6);
            }
            func_02074e0c(param_1 + 1, &F[2], vl, F[1] & 1);
            func_02074e0c(param_1 + 4, &F[5], vl, F[1] & 8);
            func_02074e0c(param_1 + 7, &F[8], vl, F[1] & 0x10);
            if ((F[1] & 4) == 0) {
                param_1[0x13] += (s32)(((s64)vl * F[20]) >> 12);
                param_1[0x14] += (s32)(((s64)vl * F[21]) >> 12);
                param_1[0x15] += (s32)(((s64)vl * F[22]) >> 12);
            }
            if ((F[1] & 2) == 0) {
                param_1[10] += (vl * F[11]) >> 12;
                param_1[11] += (vl * F[12]) >> 12;
                param_1[12] += (vl * F[13]) >> 12;
                param_1[13] += (vl * F[14]) >> 12;
                param_1[14] += (vl * F[15]) >> 12;
                param_1[15] += (vl * F[16]) >> 12;
            } else {
                param_1[10] += vl;
                param_1[14] += vl;
            }
            *param_1 = *param_1 & F[1];
        }
        nd = *(u8 **)(nd + 0x10);
    } while (nd != 0);
    func_02067d04(param_1 + 10, param_1 + 13, param_1 + 16);
    func_02067af0(param_1 + 10, param_1 + 10);
    func_02067af0(param_1 + 16, param_1 + 16);
    func_02067d04(param_1 + 16, param_1 + 10, param_1 + 13);
    return 1;
}
