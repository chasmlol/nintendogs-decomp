#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_02036578(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_0202fcc0(u8 *p);
extern s32 func_02027708(s32 v);
extern s32 func_02032aac(u8 *p, s32 v);
extern s32 func_0202e304(s32 v);
extern s32 func_02027710(u8 *p, s32 v);
extern s32 func_020449bc(void);
extern void func_0203e908(u8 *p, int v);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, int b);

#define BUMP_TO(dst) do { s32 bv_ = *(s32 *)data_0214f464; (dst) = bv_ * 0x10dcd + 1; *(s32 *)data_0214f464 = (dst); } while (0)

s32 func_0205178c(u8 *param_1)
{
    s32 t8;
    s32 bVar1;
    s32 uVar4;
    s32 iVar5;
    u16 bit;
    s32 iVar2;

    iVar2 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 0x78) {
        func_020362f8(param_1);
        func_0202fd7c(param_1);
        return;
    }
    if (iVar2 == 0) {
        func_020362f8(param_1);
        func_0202fcc0(param_1);
        return;
    }
    uVar4 = func_02027708(iVar2);
    bVar1 = func_02032aac(param_1, uVar4);
    if (bVar1 == 0) {
        goto L334;
    }
    bVar1 = func_0202e304(iVar2);
    if (bVar1 == 0) {
        goto L190;
    }
    iVar5 = func_02027710(param_1, iVar2);
    if (iVar5 == -1) {
        goto L174;
    }
    if (iVar5 == 0) {
        goto L174;
    }
    if (iVar5 != 1) {
        goto L334;
    }
    iVar2 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if (iVar2 == 0) {
        return 0;
    }
    BUMP_TO(iVar5);
    bit = (u16)((u32)(iVar5 * 0x10000) >> 31);
    switch (bit) {
    case 0:
        goto BA1;
    case 1:
        goto BB1;
    default:
        goto R0a;
    }
BA1:
    func_0203e908(param_1, 0x2cd);
    return 1;
BB1:
    func_0203e908(param_1, 0x2ce);
    return 1;
R0a:
    return 0;
L174:
    func_020362f8(param_1);
    func_0202fd7c(param_1);
    return;
L190:
    iVar5 = func_02027710(param_1, iVar2);
    if (iVar5 == -1) {
        goto L298;
    }
    if (iVar5 == 0) {
        goto L27c;
    }
    if (iVar5 != 1) {
        goto L334;
    }
    iVar2 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if (iVar2 == 0) {
        return 0;
    }
    BUMP_TO(iVar5);
    bit = (u16)((u32)(iVar5 * 0x10000) >> 31);
    switch (bit) {
    case 0:
        goto BA2;
    case 1:
        goto BB2;
    default:
        goto R0b;
    }
BA2:
    func_0203e908(param_1, 0x2cd);
    return 1;
BB2:
    func_0203e908(param_1, 0x2ce);
    return 1;
R0b:
    return 0;
L27c:
    func_020362f8(param_1);
    func_0202fd7c(param_1);
    return;
L298:
    BUMP_TO(iVar5);
    bit = (u16)((u32)(iVar5 * 0x10000) >> 31);
    switch (bit) {
    case 0:
        t8 = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar2, (s16)t8);
        func_0202707c(iVar2, 9);
        return 1;
    case 1:
        t8 = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar2, (s16)t8);
        func_0202707c(iVar2, 0x11);
        return 1;
    default:
        goto L334;
    }
L334:
    return 0;
}
