#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_0215942c[];
extern u8 *func_020364cc(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02009f38(s32 *a, s32 *b);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0203592c(u8 *p, u8 *q);
extern s32 func_020c1f34(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern s32 func_02026c40(u8 *p, u8 *q);
extern s32 func_02197f94_unused(void);
extern s32 func_ov003_02197f94(u8 *p, s32 a);
extern void func_ov003_0219a368(u8 *p);
extern s32 func_020365c8(u8 *p, u8 *q);
extern s32 func_0203567c(u8 *p);
extern void func_02027e64(u8 *p, s32 a, s32 b);

typedef struct { s32 v[3]; } T3;


void func_ov003_021940fc(u8 *param_1)
{
    u8 *iVar5;
    s32 iVar6;
    s32 bVar1, bVar3, bVar4;
    s32 aiStack_30[3];
    s32 aiStack_24[4];
    u8 *obj;

    iVar5 = func_020364cc(param_1);
    bVar3 = 0;
    bVar1 = 0;
    if (iVar5 != 0) {
        func_02039448(param_1);
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)(iVar5 + 0xbc);
        obj = *(u8 **)data_02159444;
        obj = *(u8 **)(obj + 0x1c);
        *(T3 *)(param_1 + 0x278) = *(T3 *)(obj + 0x30);
        func_02037450(param_1, 0x392);
        func_02067e34((s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x2a0), aiStack_30);
        func_02067e34((s32 *)(param_1 + 0x278), (s32 *)(param_1 + 0x2a0), aiStack_24);
        bVar3 = func_02009f38(aiStack_30, aiStack_24) == 0;
        bVar1 = *(s32 *)(param_1 + 0x3b8) < 0x800;
    }
    iVar6 = func_020289d0(param_1, 0, 1);
    if (iVar6 != 0) {
        return;
    }
    bVar4 = func_0203592c(param_1, iVar5);
    if (bVar4 != 0) {
        return;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)*(u8 **)data_0215942c == 0x8003) {
        bVar4 = 0;
    } else if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar4 = 0;
    } else {
        if (iVar5 == 0) goto B5d;
        if (*(s16 *)(iVar5 + 0x90) == 0 || *(s16 *)(iVar5 + 0x90) == 2) {
            bVar4 = 1;
        } else if (*(s16 *)(iVar5 + 0x94) == 0x35 && func_020c1f34(iVar5) == 0) {
            bVar4 = 1;
        } else {
            bVar4 = 0;
        }
        if (bVar4 == 0) goto B26c;
    B5d:
        func_0203e908(param_1, 0x5d);
        func_020362f8(param_1);
        bVar4 = 1;
        goto after;
    B26c:
        bVar4 = func_02026c40(param_1, iVar5);
        if (bVar4 != 0) {
            func_0202fd7c(param_1);
            func_020362f8(param_1);
            bVar4 = 1;
        } else {
            bVar4 = 0;
        }
    }
after:
    if (bVar4 != 0) {
        return;
    }
    if (*(s8 *)(param_1 + 0x88) == *(s16 *)(iVar5 + 0x98) || *(s16 *)(param_1 + 0xfa) == 0x23) {
        iVar6 = 1;
    } else {
        iVar6 = 0;
    }
    iVar6 = func_ov003_02197f94(param_1, iVar6);
    if (iVar6 != 0) {
        return;
    }
    if (iVar5 != 0 && (bVar4 = func_020365c8(param_1, iVar5)) == 0) {
        func_ov003_0219a368(param_1);
        return;
    }
    if (bVar3 != 0) goto CALLB;
    if (bVar1 == 0) goto CONT;
CALLB:
    func_ov003_0219a368(param_1);
    return;
CONT:
    iVar6 = func_0203567c(param_1);
    if (iVar6 != 0) {
        s32 sw6;
        if ((*(u8 *)(param_1 + 0xb6) & 1) != 0) {
            *(u8 *)(param_1 + 0xb6) &= ~1;
            sw6 = 1;
        } else {
            sw6 = 0;
        }
        if (sw6 != 0) {
            func_02027e64(param_1, 0, 0x19);
        }
        func_0203e908(param_1, 0x3f2);
    }
    return;
}
