#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 data_02152cd8[];
extern u8 data_0213c47c[];
extern u8 data_0213c478[];
extern u8 data_0213c474[];
extern s32 func_02028130(u8 *p);
extern s32 func_0200b8a0(u8 *p, s32 *a, s32 *b);
extern s32 func_ov005_02167268(s32 e, s32 *out);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);

#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

u32 func_ov005_02160af4(u8 *param_1)
{
    s32 bVar1;
    s32 bVar2;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 iVar8;
    s32 iVar9;
    s32 t1;
    u8 *P;
    s32 aiStack_40[3];
    s32 aiStack_34[3];
    s32 local_28[3];

    bVar2 = 0;
    if (*(s16 *)(param_1 + 0xea) < 0x451) {
        goto L274;
    }
    if (*(s16 *)(param_1 + 0xea) > 0x46a) {
        goto L274;
    }
    P = data_02159444;
    iVar5 = *(s16 *)(P + 0x7a);
    if (iVar5 < 0) {
        goto Z1;
    }
    if (*(s16 *)(data_02159468 + 0x20) > iVar5) {
        goto E1;
    }
Z1:
    iVar7 = 0;
    goto J1;
E1:
    iVar7 = *(s32 *)(data_02159468 + iVar5 * 4 + 4);
J1:
    if (iVar7 == 0) {
        goto F1;
    }
    if (*(s16 *)(iVar7 + 0x96) != 8) {
        goto F1;
    }
    bVar1 = 1;
    goto J2;
F1:
    bVar1 = 0;
J2:
    if (bVar1 == 0) {
        goto L10c;
    }
    if ((*(u16 *)(P + 0x84) & 1) == 0) {
        goto L10c;
    }
    if (iVar5 < 0) {
        goto Z2;
    }
    if (*(s16 *)(data_02159468 + 0x20) > iVar5) {
        goto E2;
    }
Z2:
    iVar5 = 0;
    goto J3;
E2:
    iVar5 = *(s32 *)(data_02159468 + iVar5 * 4 + 4);
J3:
    if (iVar5 == 0) {
        goto L10c;
    }
    if (func_ov005_02167268(iVar5, aiStack_40) == 0) {
        goto L10c;
    }
    local_28[0] = *(s32 *)(data_02152cd8 + 0x54);
    local_28[1] = *(s32 *)(data_02152cd8 + 0x60);
    local_28[2] = *(s32 *)(data_02152cd8 + 0x6c);
    func_02067e68(aiStack_40, local_28, aiStack_34);
    bVar1 = 1;
    goto L110;
L10c:
    bVar1 = 0;
L110:
    if (bVar1 == 0) {
        goto L274;
    }
    iVar8 = *(s32 *)(data_0213c47c + (u32)*(u16 *)(*(u8 **)(param_1 + 0x9e8)) * 100);
    iVar5 = func_02028130(param_1);
    iVar7 = func_02028130(param_1);
    iVar6 = func_0200b8a0(param_1 + 0x348, aiStack_40, aiStack_34);
    t1 = FX(iVar7, iVar5);
    if (iVar6 < FX(t1, iVar8)) {
        bVar2 = 1;
    }
    iVar9 = *(s32 *)(data_0213c478 + (u32)*(u16 *)(*(u8 **)(param_1 + 0x9e8)) * 100);
    iVar5 = func_02028130(param_1);
    iVar7 = func_02028130(param_1);
    iVar8 = func_0200b8a0(param_1 + 900, aiStack_40, aiStack_34);
    t1 = FX(iVar7, iVar5);
    if (iVar8 < FX(t1, iVar9)) {
        bVar2 = 1;
    }
    iVar8 = *(s32 *)(data_0213c474 + (u32)*(u16 *)(*(u8 **)(param_1 + 0x9e8)) * 100);
    iVar5 = func_02028130(param_1);
    iVar7 = func_02028130(param_1);
    iVar6 = func_0200b8a0(param_1 + 0x2dc, aiStack_40, aiStack_34);
    t1 = FX(iVar7, iVar5);
    if (iVar6 < FX(t1, iVar8)) {
        bVar2 = 1;
    }
L274:
    if (bVar2 == 0) {
        goto R0;
    }
    P = data_02159444;
    iVar5 = *(s32 *)(P + 0x98);
    iVar7 = *(s32 *)(P + 0x94);
    if (iVar5 <= 0) {
        iVar5 = -iVar5;
    }
    if (iVar7 <= 0) {
        iVar7 = -iVar7;
    }
    if (3 < iVar7 + iVar5) {
        return 1;
    }
R0:
    return 0;
}
