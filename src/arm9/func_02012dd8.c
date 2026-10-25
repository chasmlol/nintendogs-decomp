#include "ctx.h"

extern u32 *data_0214f464;
extern u8 *data_0215be34;
extern u32 data_02139ef8[];
extern u32 data_02139f04[];
extern s32 func_02027f78(u8 *, s32);
extern s32 func_0203579c(u8 *, s32);
extern void func_02081198(s32, s32, void *);

void func_02012dd8(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s16 sVar1;
    u32 uVar5;
    s32 iVar6;
    u32 *piVar4;

    iVar2 = func_02027f78(param_1, 7);
    iVar2 = iVar2 >> 9;
    if (iVar2 >= 5) {
        return;
    }
    sVar1 = *(s16 *)(param_1 + 0x162);
    if (sVar1 > 61) {
        goto gt61;
    }
    if (sVar1 >= 61) {
        goto L_b8;
    }
    if (sVar1 > 13) {
        goto gt13;
    }
    if (sVar1 < 12) {
        return;
    }
    if (sVar1 == 12) {
        goto L_170;
    }
    if (sVar1 == 13) {
        goto L_b8;
    }
    return;
gt13:
    if (sVar1 == 60) {
        goto L_170;
    }
    return;
gt61:
    if (sVar1 > 94) {
        goto gt94;
    }
    if (sVar1 == 94) {
        goto L_b8;
    }
    return;
gt94:
    if (sVar1 == 95) {
        goto L_170;
    }
    return;
L_b8:
    iVar3 = func_0203579c(param_1, 1);
    if (iVar3 == 0) {
        iVar3 = func_0203579c(param_1, 13);
        if (iVar3 == 0) {
            return;
        }
    }
    uVar5 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar5;
    iVar6 = (s32)(u16)((((u32)(u16)uVar5) * 100u) >> 16);
    if (iVar6 < 100 - iVar2 * 15) {
        piVar4 = (u32 *)data_0215be34;
        iVar2 = piVar4 != 0 ? (s32)*piVar4 : 0;
        func_02081198(iVar2, 0x32, (void *)data_02139ef8[*(s8 *)(param_1 + 0x88)]);
        return;
    }
    return;
L_170:
    iVar3 = func_0203579c(param_1, 1);
    if (iVar3 == 0) {
        iVar3 = func_0203579c(param_1, 13);
        if (iVar3 == 0) {
            return;
        }
    }
    uVar5 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar5;
    iVar6 = (s32)(u16)((((u32)(u16)uVar5) * 100u) >> 16);
    if (iVar6 < 100 - iVar2 * 15) {
        piVar4 = (u32 *)data_0215be34;
        iVar2 = piVar4 != 0 ? (s32)*piVar4 : 0;
        func_02081198(iVar2, 0x32, (void *)data_02139f04[*(s8 *)(param_1 + 0x88)]);
        return;
    }
    return;
}
