#include "ctx.h"

extern u8 data_0214f464[];
extern u8 data_0215be34[];
extern u32 data_02139ef8[];
extern u32 data_02139f04[];
extern void func_02022b7c(u8 *p);
extern s32 func_02027f78(u8 *p, int v);
extern s32 func_0203579c(u8 *p, int v);
extern void func_02081198(s32 a, int b, void *c);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, int a, int b);
extern s32 func_0202cd10(u8 *p, int a);
extern void func_0203e908(u8 *p, int v);

#define TICK(P, IV3, TAB)                                                      \
    do {                                                                    \
        s32 thr_ = 100 - (IV3) * 15;                                       \
        s32 uVar6_ = *(s32 *)*(u8 **)data_0214f464 * 0x10dcd + 1;           \
        *(s32 *)*(u8 **)data_0214f464 = uVar6_;                             \
        if ((s32)(u16)(((u32)(u16)uVar6_ * 100u) >> 16) < thr_) {                \
            s32 *pp_ = *(s32 **)data_0215be34;                              \
            s32 iv_ = (pp_ != 0) ? *pp_ : 0;                                \
            func_02081198(iv_, 0x32, (void *)TAB[*(s8 *)((P) + 0x88)]); \
        }                                                                   \
    } while (0)

void func_02011a28(u8 *param_1)
{
    s32 bVar2;
    s32 flag;
    s32 iVar3;
    s32 iVar4;
    u8 *piVar5;
    s32 sVar1;

    func_02022b7c(param_1);
    iVar3 = func_02027f78(param_1, 7);
    iVar3 = iVar3 >> 9;
    if (iVar3 < 5) {
        sVar1 = *(s16 *)(param_1 + 0x162);
        switch (sVar1) {
        case 61:
        case 13:
        case 94:
            iVar4 = func_0203579c(param_1, 1);
            if (0 != iVar4 || func_0203579c(param_1, 13) != 0) {
                TICK(param_1, iVar3, data_02139ef8);
            }
            break;
        case 12:
        case 60:
        case 95:
            iVar4 = func_0203579c(param_1, 1);
            if (0 != iVar4 || func_0203579c(param_1, 13) != 0) {
                TICK(param_1, iVar3, data_02139f04);
            }
            break;
        }
    }
    bVar2 = (*(u8 *)(0xa4 + param_1) != 0);
    if (bVar2) {
        iVar3 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(0xa6 + param_1));
        bVar2 = (iVar3 != 0);
    }
    piVar5 = func_0203541c(param_1);
    if (piVar5 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(0x90 + piVar5)) {
    case 4:
        if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(0x8b + param_1) != 4) {
            *(s32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if (*(s8 *)(0x8b + param_1) != 5 && *(s8 *)(0x8b + param_1) != 4) {
            *(s32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    iVar3 = func_ov003_02198298(param_1);
    goto test;
zero:
    iVar3 = 0;
test:
    if (iVar3 != 0) {
        flag = 1;
        goto done;
    }
    iVar3 = func_020289d0(param_1, 6, 0);
    if (iVar3 != 0) {
        flag = 1;
        goto done;
    }
    if (bVar2) {
        goto nf;
    }
    iVar3 = func_0202cd10(param_1, 6);
    if (iVar3 != 0) {
        flag = 1;
        goto done;
    }
nf:
    flag = 0;
done:
    if (flag) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 0x64) {
        return;
    }
    {
        int uVar6 = *(s32 *)*(u8 **)data_0214f464 * 0x10dcd + 1;
        *(s32 *)*(u8 **)data_0214f464 = uVar6;
        if ((u16)((100u * (u16)uVar6) >> 16) == 0) {
            func_0203e908(param_1, 0x72);
        }
    }
}
