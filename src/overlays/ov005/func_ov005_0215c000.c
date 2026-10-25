#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { s32 v[3]; } T3;

extern u8 *data_0214f460;
extern u8 *data_02159444;
extern u8 *data_02159468;

extern void func_020ab02c(u8 *a, u8 *b, u8 *c);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u8 *a, u8 *b, s32 c);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_02027f78(u8 *p, s32 a);
extern u16 func_02041f04(u8 *p);

void func_ov005_0215c000(u8 *param_1)
{
    s32 iVar6;
    s32 iVar7;
    s32 bVar2;
    s32 uVar11;
    u16 uVar5;

    func_020ab02c(data_0214f460, param_1 + 0x420, param_1 + 0x360);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(*(u8 **)(data_02159444 + 0x1c) + 0x30);

    if (*(s16 *)(param_1 + 0x152) == 0x15c && (func_0203567c(param_1) != 0)) {
        func_0203e8cc(param_1, 0, 0x15d);
    }

    iVar6 = func_02028130(param_1);
    iVar7 = func_02028130(param_1);
    uVar11 = FX_Mul(iVar7, iVar6);
    iVar6 = func_020aaf38(data_0214f460, param_1 + 0x360, FX_Mul(uVar11, 0x802));

    if (iVar6 == 0) {
        goto INC;
    }
    *(s32 *)(param_1 + 0x474) = 0;
    *(s32 *)(param_1 + 0x478) = *(s32 *)(param_1 + 0x478) + 1;
    iVar6 = *(s32 *)(data_02159444 + 0x94);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    *(s32 *)(param_1 + 0x47c) = *(s32 *)(param_1 + 0x47c) + iVar6;
    iVar6 = *(s32 *)(data_02159444 + 0x98);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    *(s32 *)(param_1 + 0x47c) = *(s32 *)(param_1 + 0x47c) + iVar6;
    goto END;
INC:
    *(s32 *)(param_1 + 0x474) = *(s32 *)(param_1 + 0x474) + 1;
END:

    func_02027ee0(param_1, 5, 10);
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(s16 *)(param_1 + 0x11c) = 0;

    iVar6 = *(s32 *)(data_02159444 + 0x98);
    iVar7 = *(s32 *)(data_02159444 + 0x94);
    if (iVar6 <= 0) {
        iVar6 = -iVar6;
    }
    if (iVar7 <= 0) {
        iVar7 = -iVar7;
    }
    if (iVar7 + iVar6 > 2) {
        *(s16 *)(param_1 + 0x11e) = 12;
    } else {
        if (*(u16 *)(param_1 + 0x11e) != 0) {
            *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
        }
    }

    if (5 < *(s32 *)(param_1 + 0x474)) {
        func_0203e908(param_1, (s16)0x43d);
        return;
    }
    if (0x3c < *(u16 *)(param_1 + 0xfc)) {
        func_0203e908(param_1, (s16)0x44d);
        return;
    }

    iVar6 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar6 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar6) {
        iVar7 = 0;
    } else {
        iVar7 = *(s32 *)(data_02159468 + iVar6 * 4 + 4);
    }
    if (iVar7 != 0 && *(s16 *)(iVar7 + 0x96) == 9 && *(s16 *)(iVar7 + 0x90) == 3) {
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
    if (!bVar2) {
        if (iVar6 < 0 || *(s16 *)(data_02159468 + 0x20) <= iVar6) {
            iVar6 = 0;
        } else {
            iVar6 = *(s32 *)(data_02159468 + iVar6 * 4 + 4);
        }
        if (iVar6 != 0 && *(s16 *)(iVar6 + 0x96) == 10) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (!bVar2) {
            return;
        }
    }
    if (*(s8 *)(param_1 + 0x8b) != 2) {
        return;
    }
    iVar6 = func_02027f78(param_1, 5);
    uVar5 = func_02041f04(param_1);
    if (iVar6 > (s32)(u32)uVar5) {
        func_0203e908(param_1, 0x440);
    }
}
