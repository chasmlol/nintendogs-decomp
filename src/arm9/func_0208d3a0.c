#include "ctx.h"

extern u8 data_0212ec20[];
extern s32 func_02062324(u32 *a, u32 *b);
extern void func_0208d580(u8 *a, s32 b, u32 c, u32 d);
extern s32 func_02088014(u32 *a, u8 *b);
extern u32 *func_02003860(u32 *a, u32 b, u32 c);
extern void func_02087ea0(u32 *a, u32 b, u32 c);

u32 func_0208d3a0(u8 *param_1, u16 param_2, s32 param_3, u32 param_4)
{
    u32 *puVar10;
    s32 local_70;
    u32 *piVar3;
    s32 local_68;
    u8 acStack_64[64];
    s32 iVar9;
    s32 zero;
    u8 *iVar7;
    s16 sVar1;
    s32 iVar5;
    s32 iVar4;
    u32 *piVar8;
    s32 iTail;
    u16 *puVar6;
    s16 sOld;
    s32 len;
    u8 *recBase;

    zero = 0;
    local_70 = zero;
    iVar9 = zero;
    sVar1 = *(s16 *)(param_1 + 0x32);
    iVar5 = sVar1;
    local_68 = -1;
    piVar3 = (u32 *)(data_0212ec20 + param_2 * 12);
    puVar10 = *(u32 **)(data_0212ec20 + param_2 * 12);
    if (0 < iVar5) {
        iVar7 = param_1;
        do {
            iVar4 = func_02062324(*(u32 **)(iVar7 + 0x7c), puVar10);
            if (iVar4 == 0) {
                local_68 = iVar9;
                break;
            }
            iVar9 = (s16)(iVar9 + 1);
            iVar7 = iVar7 + 0x4c;
        } while (iVar9 < iVar5);
    }
    if (local_68 < 0) {
        *(s16 *)(param_1 + 0x32) = *(s16 *)(param_1 + 0x32) + 1;
        piVar8 = (u32 *)(param_1 + 0x38 + sVar1 * 76);
        piVar8[0x11] = *piVar3;
        local_68 = iVar5;
        func_0208d580(acStack_64, 0x40, piVar8[0x11], piVar3[2]);
        iVar9 = func_02088014(piVar8, acStack_64);
        if (iVar9 != 0) {
            len = piVar8[9] - piVar8[8];
            iVar9 = (s32)func_02003860(*(u32 **)(param_1 + 0x28), ((u32)(len + 15) & 0xfffffff0u) + 0x60, 16);
            func_02087ea0(piVar8, (u32)iVar9 + 96, len);
            piVar8[0x12] = iVar9;
            local_70 = 1;
        }
    }
    sOld = *(s16 *)(param_1 + 0x34);
    recBase = param_1 + 0x168;
    *(s16 *)(param_1 + 0x34) = (s16)(sOld + 1);
    *(s16 *)(recBase + sOld * 16) = (s16)local_68;
    *(s32 *)(recBase + sOld * 16 + 4) = piVar3[1];
    {
        iTail = *(s16 *)(param_1 + 0x36);
        if (iTail < iTail + param_3) {
            puVar6 = (u16 *)(param_1 + 0x1a8 + *(s16 *)(param_1 + 0x36) * 12);
            do {
                puVar6[0] = param_2;
                *(s16 *)(puVar6 + 1) = sOld;
                *(u32 *)(puVar6 + 2) = param_4;
                *(u32 *)(puVar6 + 4) = 0;
                iTail = (s16)(iTail + 1);
                puVar6 += 6;
            } while (iTail < *(volatile s16 *)(param_1 + 0x36) + param_3);
        }
    }
    *(s16 *)(param_1 + 0x36) = (s16)(*(s16 *)(param_1 + 0x36) + param_3);
    return local_70;
}
