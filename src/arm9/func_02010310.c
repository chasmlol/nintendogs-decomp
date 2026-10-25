#include "ctx.h"

extern u8 *data_0214f464;
extern void func_02010474(u8 *p, s32 a);
extern void func_02035aa0(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 v);

void func_02010310(u8 *param_1)
{
    s32 bRes;
    s32 iVar2;
    u32 uVar3;
    s32 uVar4;
    u8 *q;

    if (*(s32 *)(param_1 + 0x464) == 0) {
        uVar4 = 200;
    } else {
        uVar4 = 0;
    }
    func_02010474(param_1, 0);
    func_02035aa0(param_1);
    iVar2 = (s32)func_0203541c(param_1);
    if (iVar2 == 0) {
        goto nul;
    }
    func_0203e8cc(param_1, 2, 1);
    if (*(s16 *)(iVar2 + 0x90) == 4) {
        goto b4;
    }
    if (*(s16 *)(iVar2 + 0x90) != 7) {
        goto done;
    }
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(s32 *)(param_1 + 0x948) = 1;
        }
    }
    goto done;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5) {
        if (*(s8 *)(param_1 + 0x8b) != 4) {
            *(s32 *)(param_1 + 0x948) = 8;
        }
    }
done:
    iVar2 = func_ov003_02198298(param_1);
    goto tail;
nul:
    iVar2 = 0;
tail:
    if (iVar2 != 0) {
        bRes = 1;
        goto test;
    }
    iVar2 = func_020289d0(param_1, 0, 0);
    if (iVar2 != 0) {
        bRes = 1;
        goto test;
    }
    iVar2 = func_0202cd10(param_1, 0);
    bRes = (iVar2 != 0);
test:
    if (bRes != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= uVar4) {
        return;
    }
    q = data_0214f464;
    uVar3 = *(u32 *)q * 0x10dcd + 1;
    *(u32 *)q = uVar3;
    if ((u16)((((u32)(u16)uVar3) * 120) >> 16) == 0) {
        func_0203e908(param_1, 0x257);
    }
}
