#include "ctx.h"

extern u32 data_0214f464[];
extern u8 data_0215be34[];
extern u32 data_02139ef8[];
extern u32 data_02139f04[];
extern void func_02022b7c(u8 *p);
extern s32 func_02027f78(u8 *p, s32 a);
extern s32 func_0203579c(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, u32 c);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);

void func_020120b8(u8 *param_1)
{
    s32 iVar3, iVar4;
    s16 sVar1;
    s32 bVar2;
    s32 *piVar5;
    u32 uVar6;
    u32 *P;
    u8 *pObj;

    func_02022b7c(param_1);
    iVar3 = func_02027f78(param_1, 7) >> 9;
    if (iVar3 >= 5) {
        goto END;
    }
    sVar1 = *(s16 *)(param_1 + 0x162);
    if (sVar1 > 61) goto HI;
    if (sVar1 >= 61) goto B121e4;
    if (sVar1 > 13) goto G13;
    if (sVar1 < 12) goto END;
    if (sVar1 == 12) goto B144;
    if (sVar1 != 13) goto END;
    goto B121e4;
    goto END;
G13:
    if (sVar1 != 60) goto END;
    goto B144;
    goto END;
HI:
    if (sVar1 > 94) goto HI95;
    if (sVar1 != 94) goto END;
    goto B121e4;
    goto END;
HI95:
    if (sVar1 != 95) goto END;
    goto B144;
    goto END;

B121e4:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 != 0 || (iVar4 = func_0203579c(param_1, 13)) != 0) {
        P = *(u32 **)&data_0214f464;
        uVar6 = *P * 0x10dcd + 1;
        *P = uVar6;
        if ((s32)(u16)(((u32)(u16)uVar6 * 100u) >> 16) < 100 - iVar3 * 15) {
            piVar5 = *(s32 **)&data_0215be34;
            iVar4 = piVar5 != 0 ? *piVar5 : 0;
            func_02081198(iVar4, 0x32, data_02139ef8[*(s8 *)(param_1 + 0x88)]);
        }
    }
    goto END;

B144:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 != 0 || (iVar4 = func_0203579c(param_1, 13)) != 0) {
        P = *(u32 **)&data_0214f464;
        uVar6 = *P * 0x10dcd + 1;
        *P = uVar6;
        if ((s32)(u16)(((u32)(u16)uVar6 * 100u) >> 16) < 100 - iVar3 * 15) {
            piVar5 = *(s32 **)&data_0215be34;
            iVar4 = piVar5 != 0 ? *piVar5 : 0;
            func_02081198(iVar4, 0x32, data_02139f04[*(s8 *)(param_1 + 0x88)]);
        }
    }

END:
    bVar2 = *(u8 *)(param_1 + 0xa4) != 0;
    if (bVar2) {
        iVar3 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        bVar2 = iVar3 != 0;
    }
    pObj = func_0203541c(param_1);
    if (pObj == 0) goto ZERO;
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(pObj + 0x90) == 4) goto C4;
    if (*(s16 *)(pObj + 0x90) != 7) goto AFTER;
    goto C7;
C4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto AFTER;
C7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
AFTER:
    iVar3 = func_ov003_02198298(param_1);
    goto CHK;
ZERO:
    iVar3 = 0;
CHK:
    if (iVar3 != 0) {
        bVar2 = 1;
        goto DONE;
    }
    iVar3 = func_020289d0(param_1, 3, 0);
    if (iVar3 != 0) {
        bVar2 = 1;
        goto DONE;
    }
    if (bVar2) goto ZERO2;
    iVar3 = func_0202cd10(param_1, 3);
    if (iVar3 != 0) {
        bVar2 = 1;
        goto DONE;
    }
ZERO2:
    bVar2 = 0;
DONE:
    if (bVar2) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    P = *(u32 **)&data_0214f464;
    uVar6 = *P * 0x10dcd + 1;
    *P = uVar6;
    if ((u16)(((u32)(u16)uVar6 * 100u) >> 16) == 0) {
        func_0203e908(param_1, 0x6e);
    }
}
