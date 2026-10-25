#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern s32 func_0203bc08(u32 a, s32 b);
extern void func_0210843c(s32 a, s32 b, s32 c);
extern void func_021083c8(s32 a);

void func_020b613c(u8 *param_1, s32 param_2, u32 param_3, u16 *param_4, s32 param_5)
{
    u16 *puVar3;
    s32 iVar6;
    u16 *puVar5;
    s32 iVar9;
    s32 iVar8;
    s32 iVar10;
    s32 uVar7;
    u32 uVar2;
    u8 *pb;

    puVar3 = (u16 *)func_0203bc08(param_3, (s32)param_4);
    switch (param_2) {
    case 0:
        if ((u32)*puVar3 == (u16)*(u32 *)(param_1 + *(s16 *)(param_1 + 0x22) * 4 + 0x30)) {
            *(s16 *)(param_1 + 0x22) = *(s16 *)(param_1 + 0x22) + 1;
            {
                s32 lim = *(s16 *)(param_1 + 0x2c);
                if (*(s16 *)(param_1 + 0x22) > lim) {
                    *(s16 *)(param_1 + 0x22) = lim;
                }
            }
            func_0210843c(0, *((u8 *)puVar3 + 2), param_5);
            return;
        }
        *(s16 *)(param_1 + 0x2a) = *(s16 *)(param_1 + 0x2a) + 1;
        if (*(s16 *)(param_1 + 0x2a) > 100) {
            *(s16 *)(param_1 + 0x2a) = 100;
        }
        func_021083c8(param_5);
        return;
    case 1:
        if ((u32)*puVar3 == (u32)*(s16 *)(param_1 + 0x3e)) {
            *(s16 *)(param_1 + 0x22) = *(s16 *)(param_1 + 0x22) + 1;
            func_0210843c(1, *((u8 *)puVar3 + 2), param_5);
            return;
        }
        *(s16 *)(param_1 + 0x2a) = *(s16 *)(param_1 + 0x2a) + 1;
        if (*(s16 *)(param_1 + 0x2a) > 100) {
            *(s16 *)(param_1 + 0x2a) = 100;
        }
        func_021083c8(param_5);
        return;
    case 2:
        break;
    default:
        return;
    }
    iVar10 = -1;
    iVar9 = iVar10;
    iVar8 = iVar10;
    uVar7 = 1000;
    func_0210843c(2, *((u8 *)puVar3 + 2), param_5);
    iVar6 = 0;
    puVar5 = (u16 *)(param_1 + 0x66);
    do {
        u16 kv = *puVar5;
        if (kv == param_3 && *((u8 *)puVar5 + 2) == (u32)param_4) {
            iVar10 = iVar6;
            break;
        }
        if (kv == 0) {
            if (iVar9 < 0) {
                iVar9 = iVar6;
            }
        } else if ((s32)*((u8 *)puVar3 + 2) < uVar7) {
            iVar8 = iVar6;
            uVar7 = *((u8 *)puVar3 + 2);
        }
        iVar6 = (s16)(iVar6 + 1);
        puVar5 = puVar5 + 2;
    } while (iVar6 < 3);
    if (iVar10 >= 0) {
        return;
    }
    if (iVar9 >= 0) {
        uVar2 = *((u8 *)puVar3 + 2);
        pb = param_1 + iVar9 * 4;
        *(u16 *)(pb + 0x66) = (u16)param_3;
        *(pb + 0x68) = (u8)(u32)param_4;
        *(pb + 0x69) = (u8)uVar2;
        return;
    }
    uVar2 = *((u8 *)puVar3 + 2);
    pb = param_1 + iVar8 * 4;
    *(u16 *)(pb + 0x66) = (u16)param_3;
    *(pb + 0x68) = (u8)(u32)param_4;
    *(pb + 0x69) = (u8)uVar2;
}
