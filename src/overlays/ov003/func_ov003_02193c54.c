#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern u8 *data_02159444;
extern u8 *data_0214f460;
extern u16 *data_0215942c;

extern u8 *func_020364cc(u8 *p);
extern void func_02039448(u8 *p);
extern void func_020ab064(u8 *a, u8 *b);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02009f38(s32 *a, s32 *b);
extern s32 func_0206782c(s32 a);
extern s32 func_01ff8958(s32 a, s32 b);
extern void func_0203e908(u8 *p, u32 a);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern void func_02037450(u8 *p, u32 a);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_02026c40(u8 *p, u8 *q);
extern void func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_020c1f34(u8 *p);
extern s32 func_ov003_02197f94(u8 *p, s32 a);
extern s32 func_020365c8(u8 *p, u8 *q);
extern void func_ov003_0219a368(u8 *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

void func_ov003_02193c54(u8 *param_1)
{
    s32 local_70[3];
    s32 local_64[3];
    s32 aiStack_58[3];
    s32 aiStack_4c[3];
    s32 local_40[3];
    s32 local_34[3];
    u8 *q;
    s32 bVar5;
    s32 bVar3;
    s32 bVar6;
    s32 iVar8;
    s32 iVar9;
    s32 iVar10;
    s32 iVar11;
    s32 uVar12;
    s32 t;

    q = func_020364cc(param_1);
    bVar5 = 0;
    bVar3 = bVar5;
    if (q != 0) {
        *(T3 *)local_70 = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);
        func_02039448(param_1);
        *(T3 *)local_64 = *(T3 *)(q + 0xbc);
        if (*(s16 *)(q + 0x90) != 3) {
            *(T3 *)(param_1 + 948) = *(T3 *)local_64;
        } else {
            func_020ab064(data_0214f460, param_1 + 948);
        }
        func_02067e34(local_64, (s32 *)(param_1 + 672), aiStack_58);
        func_02067e34(local_70, (s32 *)(param_1 + 672), aiStack_4c);
        bVar5 = func_02009f38(aiStack_58, aiStack_4c) == 0;
        if (*(s16 *)(q + 0x90) == 3) {
            *(T3 *)(param_1 + 632) = *(T3 *)local_70;
        } else {
            if (*(s16 *)(param_1 + 0x156) != 1) {
                *(T3 *)local_40 = *(T3 *)(q + 0xb0);
                func_02067e34((s32 *)(param_1 + 0x2dc), local_64, local_34);
                iVar8 = func_0206782c(FX_Mul(local_34[0], local_34[0]) + FX_Mul(local_34[2], local_34[2]));
                iVar9 = func_01ff8958(local_34[0], iVar8);
                iVar10 = func_01ff8958(local_34[2], iVar8);
                iVar11 = func_0206782c(FX_Mul(local_40[0], iVar9) + FX_Mul(local_40[2], iVar10));
                uVar12 = FX_Mul(iVar9, iVar11);
                t = FX_Mul(iVar10, iVar11);
                iVar9 = func_0206782c(FX_Mul(uVar12, uVar12) + FX_Mul(t, t));
                uVar12 = func_01ff8958(iVar8, iVar9);
                t = FX_Mul(uVar12, -62);
                iVar8 = local_64[1] + FX_Mul(t, uVar12) + FX_Mul(local_40[1], uVar12);
                if (iVar8 > *(s32 *)(param_1 + 0x2e0) * 2) {
                    func_0203e908(param_1, 0x3f3);
                } else if (iVar8 < *(s32 *)(param_1 + 0x2c8)) {
                    func_0203e908(param_1, 0x3f4);
                }
            }
            *(T3 *)(param_1 + 632) = *(T3 *)local_64;
            func_0203e8cc(param_1, 2, 1);
            bVar3 = local_64[1] < 0x800;
        }
        func_02037450(param_1, 0x392);
    }
    if (func_020289d0(param_1, 1, 1) != 0) {
        return;
    }
    if (func_0203592c(param_1, q) != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*data_0215942c == 0x8003) {
        bVar6 = 0;
        goto check;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar6 = 0;
        goto check;
    }
    if (q == 0) {
        goto five_d;
    }
    if (*(s16 *)(q + 0x90) == 0 || *(s16 *)(q + 0x90) == 2) {
        bVar6 = 1;
    } else if (*(s16 *)(q + 0x94) == 0x35 && func_020c1f34(q) == 0) {
        bVar6 = 1;
    } else {
        bVar6 = 0;
    }
    if (bVar6 == 0) {
        goto call_26c40;
    }
five_d:
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar6 = 1;
    goto check;
call_26c40:
    bVar6 = func_02026c40(param_1, q);
    if (bVar6 != 0) {
        func_0202fd7c(param_1);
        func_020362f8(param_1);
        bVar6 = 1;
    } else {
        bVar6 = 0;
    }
check:
    if (bVar6 != 0) {
        return;
    }
    if (func_ov003_02197f94(param_1, (*(s8 *)(param_1 + 0x88) == *(s16 *)(q + 0x98)) || *(s16 *)(param_1 + 0xfa) == 0x23) != 0) {
        return;
    }
    if (q != 0 && func_020365c8(param_1, q) == 0) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (!bVar5 && !bVar3) {
        return;
    }
    func_ov003_0219a368(param_1);
}
