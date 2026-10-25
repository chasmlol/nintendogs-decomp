#include "ctx.h"
extern u8 data_0214f464[];
extern u8 data_0215be34[];
extern u8 data_02139ef8[];
extern u8 data_02139f04[];
extern void func_02022b7c(u8 *p);
extern s32 func_02027f78(u8 *p, s32 a);
extern s32 func_0203579c(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, void *c);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);

void func_02012a90(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 bVar2;
    s32 sVar1;
    u32 *piVar5;
    u32 uVar6;
    u32 *pc;
    u8 *p6;
    s32 thr;

    func_02022b7c(param_1);
    iVar3 = func_02027f78(param_1, 7) >> 9;
    if (iVar3 >= 5) {
        goto after;
    }
    sVar1 = *(s16 *)(param_1 + 0x162);
    if (sVar1 > 61) {
        goto g94;
    }
    if (sVar1 >= 61) {
        goto act;
    }
    if (sVar1 > 13) {
        goto g60;
    }
    if (sVar1 < 12) {
        goto after;
    }
    if (sVar1 == 12) {
        goto act2;
    }
    if (sVar1 != 13) {
        goto after;
    }
    goto act;
g60:
    if (sVar1 != 60) {
        goto after;
    }
    goto act2;
g94:
    if (sVar1 > 94) {
        goto g95;
    }
    if (sVar1 != 94) {
        goto after;
    }
    goto act;
g95:
    if (sVar1 != 95) {
        goto after;
    }
    goto act2;
act:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 == 0) {
        iVar4 = func_0203579c(param_1, 13);
        if (iVar4 == 0) {
            goto after;
        }
    }
    thr = iVar3 * 15;
    pc = (u32 *)data_0214f464;
    uVar6 = *(u32 *)(*(u8 **)pc) * 0x10dcd + 1;
    *(u32 *)(*(u8 **)pc) = uVar6;
    if ((u16)(((u32)(u16)uVar6 * 100u) >> 16) < 100 - thr) {
        piVar5 = *(u32 **)data_0215be34;
        iVar4 = (piVar5 != 0) ? *(s32 *)piVar5 : 0;
        func_02081198(iVar4, 50, (void *)*(u32 *)(data_02139ef8 + *(s8 *)(param_1 + 0x88) * 4));
    }
    goto after;
act2:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 == 0) {
        iVar4 = func_0203579c(param_1, 13);
        if (iVar4 == 0) {
            goto after;
        }
    }
    thr = iVar3 * 15;
    pc = (u32 *)data_0214f464;
    uVar6 = *(u32 *)(*(u8 **)pc) * 0x10dcd + 1;
    *(u32 *)(*(u8 **)pc) = uVar6;
    if ((u16)(((u32)(u16)uVar6 * 100u) >> 16) < 100 - thr) {
        piVar5 = *(u32 **)data_0215be34;
        iVar4 = (piVar5 != 0) ? *(s32 *)piVar5 : 0;
        func_02081198(iVar4, 50, (void *)*(u32 *)(data_02139f04 + *(s8 *)(param_1 + 0x88) * 4));
    }
after:
    bVar2 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (bVar2 != 0) {
        iVar4 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        bVar2 = (iVar4 != 0);
    }
    p6 = func_0203541c(param_1);
    if (p6 == NULL) {
        goto nul;
    }
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(p6 + 0x90) == 4) {
        goto c4;
    }
    if (*(s16 *)(p6 + 0x90) != 7) {
        goto dflt;
    }
    goto c7;
c4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 1;
    }
    goto dflt;
c7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(u32 *)(param_1 + 0x948) = 8;
    }
dflt:
    iVar4 = func_ov003_02198298(param_1);
    goto join;
nul:
    iVar4 = 0;
join:
    if (iVar4 != 0) {
        bVar2 = 1;
        goto chk;
    }
    iVar4 = func_020289d0(param_1, 0, 0);
    if (iVar4 != 0) {
        bVar2 = 1;
        goto chk;
    }
    if (bVar2 != 0) {
        goto zero;
    }
    if (func_0202cd10(param_1, 0) != 0) {
        bVar2 = 1;
        goto chk;
    }
zero:
    bVar2 = 0;
chk:
    if (bVar2 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    pc = (u32 *)data_0214f464;
    uVar6 = *(u32 *)(*(u8 **)pc) * 0x10dcd + 1;
    *(u32 *)(*(u8 **)pc) = uVar6;
    if ((u16)((u32)(u16)uVar6 * 100u >> 16) == 0) {
        func_0203e908(param_1, 0x69);
    }
}
