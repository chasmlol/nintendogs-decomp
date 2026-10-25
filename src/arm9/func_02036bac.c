#include "ctx.h"

extern u8 data_02159428[];
extern u8 data_0213b6b4[];
extern s32 func_02009bd0(s32 *a, s32 *b);
extern void func_02037450(u8 *p, s32 a);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);

#define FX(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
#define FXW(w, b) ((s32)(((w) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } V3;

void func_02036bac(u8 *param_1, s32 *param_2, s32 *param_3)
{
    s32 iVar6;
    s32 iVar7;
    s32 uVar10;
    s32 uVar8;
    s32 uVar11;
    s32 iVar9;
    s32 *pp;
    s16 sVar2;
    s64 wide;

    iVar6 = func_02009bd0(param_2, (s32 *)(param_1 + 0x2a0));
    pp = *(s32 **)data_02159428;
    uVar8 = pp[3];
    uVar10 = FX(uVar8, uVar8);
    if (*(s32 *)(param_1 + 0x464) == 0) {
        uVar8 = FX(uVar8, 3280);
        *(s32 *)(param_1 + 0x26c) = FX(param_3[0], uVar8);
        *(s32 *)(param_1 + 0x270) = param_2[1];
        *(s32 *)(param_1 + 0x274) = FX(param_3[2], uVar8);
        if (*(s32 *)(param_1 + 0x468) != 0) {
            uVar11 = *(s32 *)(param_1 + 0x26c);
            *(s32 *)(param_1 + 0x26c) = FX(uVar11, -6150);
            uVar11 = *(s32 *)(param_1 + 0x274);
            *(s32 *)(param_1 + 0x274) = FX(uVar11, -6150);
        }
        wide = (s64)uVar10;
        iVar7 = func_02009bd0((s32 *)(param_1 + 0x26c), param_2);
        if (iVar7 < FXW(wide, 1025)) {
            *(s32 *)(param_1 + 0x468) = 1 - *(s32 *)(param_1 + 0x468);
        }
        func_02067e68((s32 *)(param_1 + 0x2a0), (s32 *)(param_1 + 0x1a4), (s32 *)(param_1 + 0x278));
        func_02037450(param_1, 0x312);
        if (iVar6 > FXW(wide, 2009)) {
            *(s32 *)(param_1 + 0x464) = 1;
            *(u16 *)(param_1 + 0x152) = 0;
            *(s32 *)(param_1 + 0x240) = 0;
            *(s32 *)(param_1 + 0x244) = 273;
            *(s32 *)(param_1 + 0x24c) = 2460;
        }
        return;
    }
    *(V3 *)(param_1 + 0x278) = *(V3 *)param_2;
    *(V3 *)(param_1 + 0x26c) = *(V3 *)(param_1 + 0x2a0);
    func_02037450(param_1, 0x312);
    if (iVar6 >= FX(uVar10, 1476)) {
        return;
    }
    *(s32 *)(param_1 + 0x464) = 0;
    sVar2 = *(s16 *)(param_1 + 0x148);
    if (sVar2 >= 17) {
        if (sVar2 > 22) {
            return;
        }
        *(s16 *)(param_1 + 0x152) = sVar2;
        ((void (**)(u8 *))data_0213b6b4)[*(s16 *)(param_1 + 0x148) - 17](param_1);
    }
}
