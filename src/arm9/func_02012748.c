#include "ctx.h"

extern s32 *data_0214f464;
extern s32 *data_0215be34;
extern u32 data_02139ef8[];
extern u32 data_02139f04[];
extern void func_02022b7c(u8 *p);
extern s32 func_02027f78(u8 *p, s32 b);
extern s32 func_0203579c(u8 *p, s32 b);
extern void func_02081198(s32 a, s32 b, u8 *c);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 b);
extern void func_0203e908(u8 *p, s32 a);

#define BODY_A(TB)                                                              \
    {                                                                         \
        u32 uVar6;                                                            \
        s32 iVar5;                                                            \
        uVar6 = (u32)(*(u32 *)data_0214f464 * 0x10dcd + 1);                   \
        *(u32 *)data_0214f464 = uVar6;                                        \
        if ((s32)((u16)(((u32)(u16)uVar6 * 100u) >> 16)) < 100 - r4 * 15) {            \
            iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;                  \
            func_02081198(iVar5, 50, (u8 *)TB[*(s8 *)(p + 0x88)]); \
        }                                                                     \
    }

void func_02012748(u8 *p)
{
    s16 sVar1;
    s32 bVar2;
    s32 iVar3;
    s32 iVar4;
    s32 r4;
    u32 uVar6;

    func_02022b7c(p);
    iVar3 = func_02027f78(p, 7);
    r4 = iVar3 >> 9;
    if (r4 >= 5) {
        goto LAB_tail;
    }
    sVar1 = *(s16 *)(p + 0x162);
    switch (sVar1) {
    case 12:
    case 60:
    case 95:
        goto LC;
    case 13:
    case 61:
    case 94:
        goto LB;
    default:
        goto LAB_tail;
    }
LB:
    iVar4 = func_0203579c(p, 1);
    if (iVar4 != 0) {
        goto BODY_B;
    }
    if (func_0203579c(p, 13) == 0) {
        goto LAB_tail;
    }
BODY_B:
    BODY_A(data_02139ef8);
    goto LAB_tail;
LC:
    iVar4 = func_0203579c(p, 1);
    if (iVar4 != 0) {
        goto BODY_C;
    }
    if (func_0203579c(p, 13) == 0) {
        goto LAB_tail;
    }
BODY_C:
    BODY_A(data_02139f04);
LAB_tail:
    bVar2 = *(u8 *)(p + 0xa4) != 0;
    if (bVar2) {
        bVar2 = func_02022dec(p, *(s16 *)(p + 0xf2), *(u8 *)(p + 0xa6)) != 0;
    }
    iVar3 = func_0203541c(p);
    if (iVar3 == 0) {
        goto ZERO3;
    }
    {
        func_0203e8cc(p, 2, 1);
            switch (*(s16 *)(iVar3 + 0x90)) {
        case 4:
            if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
                *(s32 *)(p + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
                *(s32 *)(p + 0x948) = 8;
            }
            break;
        }
        iVar3 = func_ov003_02198298(p);
    }
    goto AFTER3;
ZERO3:
    iVar3 = 0;
AFTER3:
    if (iVar3 != 0) {
        bVar2 = 1;
        goto RET;
    }
    if (func_020289d0(p, 0, 0) != 0) {
        bVar2 = 1;
        goto RET;
    }
    if (!bVar2) {
        if (func_0202cd10(p, 0) != 0) {
            bVar2 = 1;
            goto RET;
        }
    }
    bVar2 = 0;
RET:
    if (bVar2 != 0) {
        return;
    }
    if (*(u16 *)(p + 0xfc) <= 100) {
        return;
    }
    uVar6 = (u32)(*(u32 *)data_0214f464 * 0x10dcd + 1);
    *(u32 *)data_0214f464 = uVar6;
    if ((u16)(((u32)(u16)uVar6 * 100u) >> 16) == 0) {
        func_0203e908(p, 0x6a);
    }
}
