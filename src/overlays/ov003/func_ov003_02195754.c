#include "ctx.h"

extern u8 data_0214f464[];
extern u8 data_0213b81e[];
extern u8 data_0215942c[];

extern u8 *func_020364cc(u8 *p);
extern s32 func_02036544(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02027640(u8 *a, s32 *b);
extern void func_02037450(u8 *p, s32 v);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_0206782c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);
extern void func_0200c574(u8 *p, s32 *b);
extern void func_02014198(u8 *p, s32 v);
extern void func_0209bf30(s32 *p, s32 v);
extern void func_020289d0(u8 *p, s32 a, s32 b);
extern u32 func_0203e908(u8 *p, s32 v);
extern void func_020362f8(u8 *p);
extern u32 func_020274ac(u8 *p, s32 v);
extern void func_0202fd7c(u8 *p);
extern s32 func_020386d0(u8 *p);

typedef struct { u32 w[3]; } T12;
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u32 func_ov003_02195754(u8 *pa)
{
    u8 *param_1 = pa;
    u8 *iVar6;
    u8 *iVar7;
    s32 iVar8, iVar10;
    s32 local_20[3];
    s32 bVar3;
    s32 fl;
    s32 st;
    u32 uVar9;
    u8 *puVar4;
    u8 *P;
    u32 newL;

    iVar6 = func_020364cc(param_1);
    iVar7 = (u8 *)func_02036544(param_1);
    if (iVar7 == 0 || iVar6 == 0) goto L178;
    if (*(s16 *)(iVar6 + 0x90) == 0 || *(s16 *)(iVar6 + 0x90) == 2) bVar3 = 1;
    else if (*(s16 *)(iVar6 + 0x94) == 0x35 && func_020c1f34(iVar6) == 0) bVar3 = 1;
    else bVar3 = 0;
    if (bVar3 != 0) goto L178;

    func_02039448(param_1);
    func_02027640(iVar7, (s32 *)(param_1 + 0x278));
    func_02037450(param_1, 0x300);
    *(T12 *)(param_1 + 0x3b4) = *(T12 *)(param_1 + 0x278);
    func_02067e34((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2e8), local_20);
    iVar8 = FX_Mul(local_20[0], local_20[0]) + FX_Mul(local_20[2], local_20[2]);
    iVar10 = *(s32 *)(param_1 + 0x484);
    if (iVar8 > FX_Mul(iVar10, iVar10)) {
        iVar8 = func_0206782c(iVar8);
        iVar8 = func_01ff8958(iVar8 - iVar10, iVar8);
        *(s32 *)(param_1 + 0x260) += FX_Mul(local_20[0], iVar8 >> 4);
        *(s32 *)(param_1 + 0x268) += FX_Mul(local_20[2], iVar8 >> 4);
    }
    func_0200c574(param_1, (s32 *)(param_1 + 0x278));

L178:
    if (iVar7 != 0) {
        u32 *Pw = *(u32 **)data_0214f464;
        newL = *Pw * 0x10dcd + 1;
        *Pw = newL;
        if ((u16)(((u32)(u16)newL * 400u) >> 16) == 0) {
            *(s32 *)(param_1 + 0x948) = 1;
            *(s32 *)(iVar7 + 0x948) = 0;
        }
    }
    func_02014198(param_1, 1);
    func_0209bf30((s32 *)(param_1 + 0x95c), 0x27);
    func_020289d0(param_1, 0, 1);
    *(s32 *)(param_1 + 0x488) += 1;
    puVar4 = *(u8 **)data_0215942c;
    if (*(u16 *)puVar4 == 0x8003) { fl = 0; goto Lmerge; }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) { fl = 0; goto Lmerge; }
    if (iVar6 == 0) goto L27c;
    if (*(s16 *)(iVar6 + 0x90) == 0 || *(s16 *)(iVar6 + 0x90) == 2) bVar3 = 1;
    else if (*(s16 *)(iVar6 + 0x94) == 0x35 && func_020c1f34(iVar6) == 0) bVar3 = 1;
    else bVar3 = 0;
    if (bVar3 == 0) goto L298;
L27c:
    func_0203e908(param_1, 93);
    func_020362f8(param_1);
    fl = 1;
    goto Lmerge;
L298:
    fl = 0;
Lmerge:
    if (fl != 0) {
        *(s16 *)(param_1 + 0xfa) = 0;
        return func_020274ac(param_1, -1);
    }
    if (iVar7 == 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        *(s16 *)(param_1 + 0xfa) = 0;
        return func_020274ac(param_1, -1);
    }
    if (*(s16 *)(iVar6 + 0x90) == 1) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        *(s16 *)(param_1 + 0xfa) = 0;
        return func_020274ac(param_1, -1);
    }
    st = *(s16 *)(param_1 + 0xfa);
    if (st == 0) goto Lcase0;
    if (st == 39) goto Lcase39;
    if (st == 40) goto Lcase40;
    return (u32)st;

Lcase39:
    iVar8 = func_020386d0(param_1);
    func_0203e908(param_1, (s16)(iVar8 + 0x3d1));
    *(s16 *)(param_1 + 0xfa) = 0;
    return func_020274ac(param_1, -1);

Lcase40:
    func_0202fd7c(param_1);
    *(s16 *)(param_1 + 0xfa) = 0;
    return func_020274ac(param_1, -1);

Lcase0:
    {
        u8 *P0 = *(u8 **)data_0214f464;
        s32 idx = *(s8 *)(param_1 + 0x8d);
        u32 bi = data_0213b81e[idx];
        u32 t20 = (u16)(105 - bi * 20);
        u32 nl = *(u32 *)P0 * 0x10dcd + 1;
        *(u32 *)P0 = nl;
        uVar9 = (u16)((t20 * (u32)(u16)nl) >> 16);
        if (uVar9 != 0) {
            return uVar9;
        }
    }
    {
        u8 *P2 = *(u8 **)data_0214f464;
        u32 newB = *(u32 *)P2 * 0x10dcd + 1;
        u16 t2;
        *(u32 *)P2 = newB;
        t2 = (u16)(((u32)(u16)newB * 5u) >> 16);
        if (t2 != 0) goto L3df;
        return func_0203e908(param_1, 992);
L3df:
        return func_0203e908(param_1, 0x3df);
    }
}
