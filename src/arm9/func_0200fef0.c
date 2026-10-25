#include "ctx.h"

extern s32 data_0214f464;
extern void func_02010474(u8 *p, s32 v);
extern void func_02035aa0(u8 *p);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 v);

void func_0200fef0(u8 *param_1)
{
    s32 uVar4;
    s32 iVar2;
    s16 sv;
    BOOL bVar1;
    u32 uVar3;

    if (*(s32 *)(param_1 + 0x464) == 0) {
        uVar4 = 200;
    } else {
        uVar4 = 0;
    }
    func_02010474(param_1, 3);
    func_02035aa0(param_1);
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto zero;
    }
    func_0203e8cc(param_1, 2, 1);
    sv = *(s16 *)(iVar2 + 0x90);
    if (sv == 4) {
        goto b4;
    }
    if (sv != 7) {
        goto a8;
    }
    goto b7;
b4:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(s32 *)(param_1 + 0x948) = 1;
    }
    goto a8;
b7:
    if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
        *(s32 *)(param_1 + 0x948) = 8;
    }
a8:
    iVar2 = func_ov003_02198298(param_1);
    goto chk;
zero:
    iVar2 = 0;
chk:
    if (iVar2 != 0) {
        bVar1 = 1;
        goto done;
    }
    iVar2 = func_020289d0(param_1, 3, 0);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto done;
    }
    iVar2 = func_0202cd10(param_1, 3);
    bVar1 = (iVar2 != 0);
done:
    if (bVar1) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= uVar4) {
        return;
    }
    uVar3 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar3;
    if ((u16)((((u32)(u16)uVar3) * 0x78) >> 16) != 0) {
        return;
    }
    func_0203e908(param_1, 3);
}
