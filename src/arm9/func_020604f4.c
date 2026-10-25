#pragma avoid_byte all
#include "ctx.h"

void func_020604f4(u8 *param_1, u32 param_2)
{
    u32 uVar1;
    u8 *puVar2;
    u32 uVar5;
    u8 *puVar4;
    u8 *b5;

    if ((s32)param_2 >= 0) {
        goto nonneg;
    }
neg:
    *(u16 *)(param_1 + 2) = 0;
    param_1[4] = 1;
    param_1[5] = 0x30;
    return;

nonneg:
    uVar5 = param_1[4];
    if ((s32)param_2 >= (s32)uVar5) {
        return;
    }
    b5 = param_1 + 5;
    puVar2 = b5 + param_2 + 1;
    uVar1 = (u8)(*(--puVar2) - 0x30);
    if (uVar1 == 5) {
        puVar4 = b5 + uVar5;
        do {
            puVar4 = puVar4 - 1;
            if (puVar4 <= puVar2) {
                break;
            }
        } while (*puVar4 == 0x30);
        if (puVar4 == puVar2) {
            uVar5 = *(puVar2 - 1) & 1;
        } else {
            uVar5 = 1;
        }
    } else {
        uVar5 = (uVar1 > 5);
    }
    if (param_2 == 0) {
        goto after;
    }
loop:
    puVar2 = puVar2 - 1;
    uVar1 = (u8)((*puVar2 - 0x30) + uVar5);
    uVar5 = (uVar1 > 9);
    if (uVar5 != 0) {
        goto dec;
    }
    if (uVar1 != 0) {
        goto store;
    }
dec:
    param_2 = param_2 - 1;
    goto test;
store:
    *puVar2 = (u8)(uVar1 + 0x30);
    goto after;
test:
    if (param_2 != 0) {
        goto loop;
    }
after:
    if (uVar5 != 0) {
        *(s16 *)(param_1 + 2) = *(s16 *)(param_1 + 2) + 1;
        param_1[4] = 1;
        param_1[5] = 0x31;
        return;
    }
    if (param_2 != 0) {
        param_1[4] = (u8)param_2;
        return;
    }
    goto neg;
}
