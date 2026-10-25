#include "ctx.h"
extern void func_020bd868(u8 *p);
extern u64 func_02080858(void);
extern u64 func_0205e074(u64 v, s32 a, s32 b);
extern void func_0209d5bc(u8 *p, s32 a);

void func_020da4d0(u8 *param_1)
{
    u8 *iVar4;
    s32 iVar3;
    s32 iVar2;
    s16 sVar1;
    s32 iVar4_;
    u64 uVar6;
    s32 kA = (s32)0xa57eb503;
    s32 kB = (s32)0x5397829d;
    s32 kC = (s32)0x66666667;

    iVar4 = *(u8 **)(param_1 + 0x214);
    func_020bd868(param_1);
    uVar6 = func_0205e074(func_02080858(), 100, 0);
    sVar1 = (s16)uVar6;
    iVar2 = (s32)sVar1;
    iVar3 = *(s16 *)(param_1 + 0x94);
    if (iVar3 != 0x20) {
        goto L6c;
    }
    iVar2 = (s32)sVar1 * (s32)(s16)0x76c;
    *(s32 *)(iVar4 + 4) = (iVar2 / 99) + 100;
    *(u32 *)(iVar4 + 8) = 1;
    goto L19c;
L6c:
    if (iVar2 < 99) {
        goto L8c;
    }
    if (iVar3 == 0x1f) {
        *(u32 *)(iVar4 + 4) = 0xf4240;
        *(u32 *)(iVar4 + 8) = 6;
        goto L19c;
    }
L8c:
    if (iVar2 < 99) {
        goto Lac;
    }
    if (iVar3 == 0x1e) {
        *(u32 *)(iVar4 + 4) = 0x493e0;
        *(u32 *)(iVar4 + 8) = 5;
        goto L19c;
    }
Lac:
    if (iVar2 < 95) {
        goto Ldc;
    }
    if (iVar3 != 0x1f) {
        goto Ldc;
    }
    *(s32 *)(iVar4 + 4) = (iVar2 - 0x5f) * 0x4e20 + 0x186a0;
    *(u32 *)(iVar4 + 8) = 4;
    goto L19c;
Ldc:
    if (iVar2 < 90) {
        goto L120;
    }
    if ((u16)(s16)(iVar3 - 30) > 1) {
        goto L120;
    }
    *(s32 *)(iVar4 + 4) = (iVar2 - 0x5a) * 0x1388 + 0xc350;
    *(u32 *)(iVar4 + 8) = 3;
    goto L19c;
L120:
    if (iVar2 < 80) {
        goto L148;
    }
    *(s32 *)(iVar4 + 4) = (iVar2 - 0x50) * 500 + 0x2710;
    *(u32 *)(iVar4 + 8) = 2;
    goto L19c;
L148:
    if (iVar2 < 50) {
        goto L170;
    }
    *(s32 *)(iVar4 + 4) = (iVar2 - 0x32) * 0x32 + 500;
    *(u32 *)(iVar4 + 8) = 1;
    goto L19c;
L170:
    iVar2 = (s32)sVar1 * 400;
    *(s32 *)(iVar4 + 4) = (iVar2 / 49) + 100;
    *(u32 *)(iVar4 + 8) = 0;
L19c:
    iVar4_ = *(s32 *)(iVar4 + 4);
    *(s32 *)(iVar4 + 4) = iVar4_ / 5;
    func_0209d5bc(param_1 + 400, *(s16 *)(param_1 + 0x94));
}
