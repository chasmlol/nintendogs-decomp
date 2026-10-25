#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u8 data_02152cd8[];

extern s32 func_ov005_02167268(s32 a, s32 *b);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern s32 func_02028130(u8 *p);
extern s32 func_0200b8a0(s32 *a, s32 *b, s32 *c);

void func_ov005_021601e8(u8 *param_1, s32 *param_2, s32 param_3, s32 *param_4, s32 param_5)
{
    s32 aiStack_40[3];
    s32 aiStack_34[3];
    s32 loc[3];
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 bv;
    s32 t1;
    s32 t2;

    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = *(u16 *)(param_1 + 0x11c) + 1;
    iVar4 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar4 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar4) {
        iVar6 = 0;
    } else {
        iVar6 = *(s32 *)(data_02159468 + iVar4 * 4 + 4);
    }
    {
        s32 ok;
        if (iVar6 == 0) goto okf;
        if (*(s16 *)(iVar6 + 0x96) == 8) {
            ok = 1;
            goto okj;
        }
    okf:
        ok = 0;
    okj:
        if (ok == 0) {
            goto zb;
        }
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        goto zb;
    }
    if (iVar4 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar4) {
        iVar4 = 0;
    } else {
        iVar4 = *(s32 *)(data_02159468 + iVar4 * 4 + 4);
    }
    if (iVar4 == 0) {
        goto zb;
    }
    iVar4 = func_ov005_02167268(iVar4, aiStack_40);
    if (iVar4 == 0) {
        goto zb;
    }
    loc[0] = *(s32 *)(data_02152cd8 + 0x54);
    loc[1] = *(s32 *)(data_02152cd8 + 0x60);
    loc[2] = *(s32 *)(data_02152cd8 + 0x6c);
    func_02067e68(aiStack_40, loc, aiStack_34);
    bv = 1;
    goto jn;
zb:
    bv = 0;
jn:
    if (bv == 0) goto after;
    if (param_2 != NULL) {
        iVar4 = func_02028130(param_1);
        iVar6 = func_02028130(param_1);
        iVar5 = func_0200b8a0(param_2, aiStack_40, aiStack_34);
        t1 = FX_Mul(iVar6, iVar4);
        if (iVar5 < FX_Mul(t1, param_3)) {
            *(u16 *)(param_1 + 0x11c) = 0;
        }
    }
    if (param_4 != NULL) {
        iVar4 = func_02028130(param_1);
        iVar6 = func_02028130(param_1);
        iVar5 = func_0200b8a0(param_4, aiStack_40, aiStack_34);
        t2 = FX_Mul(iVar6, iVar4);
        if (iVar5 < FX_Mul(t2, param_5)) {
            *(u16 *)(param_1 + 0x11c) = 0;
        }
    }
after:
    iVar4 = *(s32 *)(data_02159444 + 0x98);
    iVar6 = *(s32 *)(data_02159444 + 0x94);
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar6 + iVar4 > 2) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) + 1;
        return;
    }
    if (*(u16 *)(param_1 + 0x11e) > 20) {
        *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 20;
    } else {
        *(u16 *)(param_1 + 0x11e) = 0;
    }
}
