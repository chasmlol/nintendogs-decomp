#pragma avoid_byte strb
#include "ctx.h"

extern s16 data_02126868[];
extern s8 data_0213cde6[];
extern s16 func_02068078(s32 a, s32 b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);

void func_02039008(u8 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5)
{
    s64 lVar3;
    int iVar7;
    s64 lVar2;
    int uVar6;
    u16 bVar1;
    s32 uVar5;
    int sVar4;

    uVar5 = param_2[0] - *(s32 *)(param_1 + 0x2a0);
    uVar6 = param_2[2] - *(s32 *)(param_1 + 0x2a8);
    lVar3 = (s64)*(s32 *)(0x1ac + param_1) * (s64)uVar6 + 0x800;
    lVar2 = (s64)*(s32 *)(param_1 + 0x1a4) * (s64)uVar5 + 0x800;
    *param_4 = 0 < ((s32)(lVar2 >> 12) + (s32)(lVar3 >> 12));
    if (*param_4 != 0) {
        sVar4 = func_02068078(uVar5, uVar6);
        lVar3 = (s64)*(s32 *)(param_1 + 0x194) * (s64)data_02126868[(sVar4 >> 4) * 2 + 1] + 0x800;
        lVar2 = (s64)*(s32 *)(param_1 + 0x18c) * (s64)data_02126868[(sVar4 >> 4) * 2] + 0x800;
        iVar7 = (s32)(lVar2 >> 12) + (s32)(lVar3 >> 12);
        if (iVar7 > 0) {
            *param_5 = 1;
            *(s32 *)(param_1 + 0x248) = *(s32 *)(param_1 + 0x248) + 0x400;
            if (*(s32 *)(param_1 + 0x248) > iVar7) {
                *(s32 *)(param_1 + 0x248) = iVar7;
            }
            if (iVar7 > 0x80) {
                *(s8 *)(param_1 + 0xa2) = data_0213cde6[*(s16 *)(param_1 + 0x152) * 8] << 1;
                *(u8 *)(0xa1 + param_1) = 1;
            } else {
                *(u8 *)(param_1 + 0xa2) = 0;
                *(u8 *)(param_1 + 0xa1) = 0;
            }
        } else {
            *param_5 = 0;
            *(s32 *)(param_1 + 0x248) = *(s32 *)(param_1 + 0x248) - 0x400;
            if (*(s32 *)(0x248 + param_1) < iVar7) {
                *(s32 *)(param_1 + 0x248) = iVar7;
            }
            if (iVar7 < -0x80) {
                *(s8 *)(0xa2 + param_1) = data_0213cde6[*(s16 *)(0x152 + param_1) * 8] * 2 + 1;
                *(u8 *)(0xa1 + param_1) = 2;
            } else {
                *(u8 *)(param_1 + 0xa2) = 0;
                *(u8 *)(param_1 + 0xa1) = 0;
            }
        }
        lVar2 = (s64)*(s32 *)(0x254 + param_1) * (s64)*(s32 *)(param_1 + 0x248) + 0x800;
        func_01ff832c((lVar2 >> 12), param_1 + 0x18c, 0x1a4 + param_1, param_1 + 0x1a4);
        lVar2 = (s64)iVar7 * (s64)*(s32 *)(param_1 + 0x254) + 0x800;
        uVar5 = (s32)(lVar2 >> 12) * -0x24;
        *param_3 = uVar5;
        return;
    }
    lVar3 = (s64)*(s32 *)(0x194 + param_1) * (s64)uVar6 + 0x800;
    lVar2 = (s64)*(s32 *)(param_1 + 0x18c) * (s64)uVar5 + 0x800;
    if (((s32)(lVar2 >> 12) + (s32)(lVar3 >> 12)) > 0) {
    *param_5 = 1;
    *(s32 *)(param_1 + 0x248) = *(s32 *)(param_1 + 0x248) + 0x400;
    if (*(s32 *)(param_1 + 0x248) > 0x1000) {
        *(s32 *)(0x248 + param_1) = 0x1000;
    }
    lVar2 = (s64)*(s32 *)(param_1 + 0x254) * (s64)*(s32 *)(param_1 + 0x248) + 0x800;
    func_01ff832c((lVar2 >> 12), param_1 + 0x18c, param_1 + 0x1a4, param_1 + 0x1a4);
    *param_3 = *(s32 *)(param_1 + 0x254) * -0x24;
    *(s8 *)(param_1 + 0xa2) = data_0213cde6[*(s16 *)(param_1 + 0x152) * 8] << 1;
    *(u8 *)(param_1 + 0xa1) = 3;
    return;
    }
        *param_5 = 0;
        *(s32 *)(param_1 + 0x248) = *(s32 *)(param_1 + 0x248) - 0x400;
        if (*(s32 *)(param_1 + 0x248) < -0x1000) {
            *(s32 *)(param_1 + 0x248) = 0xfffff000;
        }
        lVar2 = (s64)*(s32 *)(0x254 + param_1) * (s64)*(s32 *)(param_1 + 0x248) + 0x800;
        func_01ff832c((lVar2 >> 12), param_1 + 0x18c, param_1 + 0x1a4, param_1 + 0x1a4);
        *param_3 = *(s32 *)(0x254 + param_1) * 0x24;
        *(s8 *)((int)param_1 + 0xa2) = data_0213cde6[*(s16 *)(param_1 + 0x152) * 8] * 2 + 1;
        *(u8 *)(param_1 + 0xa1) = 4;
        return;
}
