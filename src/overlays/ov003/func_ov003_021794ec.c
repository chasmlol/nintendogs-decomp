#include "ctx.h"

extern u8 *data_02159444;
extern u32 *data_0214f464;
extern s32 func_ov003_021799c0(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_02035744(u8 *p, s32 a);
extern u32 func_02028130(u8 *p);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_ov003_0216df24(u8 *p);
extern void func_ov003_02179bb8(u8 *p, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6,
                                s32 a7, s32 a8, s32 a9, s32 a10, s32 a11);

void func_ov003_021794ec(u8 *param_1)
{
    BOOL bVar1;
    s32 iVar2;
    u32 uVar3;
    s32 iVar4;
    BOOL bVar5;

    bVar1 = FALSE;
    iVar2 = func_ov003_021799c0(param_1);
    bVar5 = (*(u16 *)(data_02159444 + 0x84) & 1) != 0;
    if (bVar5) {
        *(s32 *)(param_1 + 0x468) = (0 < *(s16 *)(data_02159444 + 0x88));
    }
    switch (*(s16 *)(param_1 + 0x152)) {
    case 0x166:
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            bVar1 = TRUE;
            func_0203e8cc(param_1, 0, 0);
        }
        break;
    case 0x16a:
        iVar2 = func_02035770(param_1, 0x12);
        if (iVar2 != 0) {
            func_02035744(param_1, 0x57);
        }
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            bVar1 = TRUE;
            func_0203e8cc(param_1, 0, 0);
        }
        break;
    default:
        if (*(s32 *)(param_1 + 0x468) == 0) {
            goto zero_468;
        }
        func_0203e8cc(param_1, 0, 0x149);
        iVar2 = func_02035770(param_1, 0xd);
        if (iVar2 != 0) {
            func_02035744(param_1, 0x2e);
        }
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            uVar3 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar3;
            if ((u16)(3u * (u16)uVar3 >> 16) == 0) {
                func_0203e8cc(param_1, 0, 0x16a);
            } else {
                func_0203e8cc(param_1, 0, 0);
            }
            bVar1 = TRUE;
        }
        goto after_468;
    zero_468:
        if (iVar2 == 0) {
            iVar2 = func_02028130(param_1);
            func_01ff832c(iVar2 << 2, (s32 *)(param_1 + 0x1a4), (s32 *)(param_1 + 0x2a0),
                          (s32 *)(param_1 + 0x3b4));
        }
        func_0203e8cc(param_1, 0, 0x8d);
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        if ((u16)(150u * (u16)uVar3 >> 16) == 0) {
            func_0203e8cc(param_1, 0, 0x166);
        }
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            bVar1 = TRUE;
        }
    after_468:
        break;
    }
    if (bVar1 && (iVar2 = *data_0214f464 * 0x10dcd + 1, *data_0214f464 = iVar2, (u16)((u32)iVar2 << 16 >> 31) == 0)) {
        *(s32 *)(param_1 + 0x468) = 1 - *(s32 *)(param_1 + 0x468);
    }
    if (bVar1 && !bVar5) {
        func_ov003_0216df24(param_1);
    }
    iVar2 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 0x3c) {
        if (bVar1) {
            uVar3 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar3;
            if ((u16)((u32)uVar3 << 16 >> 31) == 0) {
                iVar2 = 1;
            }
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, iVar2, 0x30, 0, 3, 0);
}
