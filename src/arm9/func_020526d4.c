#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_02036578(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_0202fcc0(u8 *p);
extern u32 func_02027708(s32 a);
extern s32 func_02032aac(u8 *p, u32 b);
extern s32 func_0202e304(s32 a);
extern s32 func_02027710(u8 *p, s32 a);
extern u32 func_020449bc(void);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, s32 b);

static inline u32 Lcg(void)
{
    u32 cnt;
    cnt = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = cnt;
    return (u16)((cnt << 16) >> 31);
}

s32 func_020526d4(u8 *param_1)
{
    s32 iVar2;
    u32 bit;
    s32 iVar5;
    u32 uVar4;
    s32 bVar1;

    iVar2 = func_02036578(param_1);
    if (*(u16 *)(param_1 + 0xfc) > 0x78) {
        func_020362f8(param_1);
        return func_0202fd7c(param_1);
    }
    if (0 == iVar2) {
        func_020362f8(param_1);
        return func_0202fcc0(param_1);
    }
    uVar4 = func_02027708(iVar2);
    bVar1 = func_02032aac(param_1, uVar4);
    if (bVar1 == 0) {
        goto Lret0;
    }
    bVar1 = func_0202e304(iVar2);
    if (bVar1 == 0) {
        goto L14c;
    }
    iVar2 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) == 0) {
        return func_0202fd7c(param_1);
    }
    if (iVar2 == 0) {
        return 0;
    }
    bit = Lcg();
    if (bit == 0) {
        goto L104;
    }
    if (bit != 1) {
        goto Lr1;
    }
    goto L120;
L104:
    func_0203e908(param_1, 0x2cd);
    return 1;
L120:
    func_0203e908(param_1, 0x2ce);
    return 1;
Lr1:
    return 0;

L14c:
    iVar5 = func_02027710(param_1, iVar2);
    if (iVar5 == -1) {
        goto L254;
    }
    if (iVar5 == 0) {
        goto L238;
    }
    if (iVar5 != 1) {
        goto Lret0;
    }
    iVar2 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) == 0) {
        return func_0202fd7c(param_1);
    }
    if (0 == iVar2) {
        return 0;
    }
    bit = Lcg();
    if (0 == bit) {
        goto L1f0;
    }
    if (bit != 1) {
        goto Lr2;
    }
    goto L20c;
L1f0:
    func_0203e908(param_1, 0x2cd);
    return 1;
L20c:
    func_0203e908(param_1, 0x2ce);
    return 1;
Lr2:
    return 0;

L238:
    func_020362f8(param_1);
    return func_0202fd7c(param_1);

L254:
    bit = Lcg();
    if (bit == 0) {
        goto L290;
    }
    if (1 != bit) {
        goto Lret0;
    }
    goto L2c0;
L290:
    {
        s32 tb = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar2, (s16)tb);
    }
    func_0202707c(iVar2, 9);
    return 1;
L2c0:
    {
        s32 tb = *(s8 *)(param_1 + 0x88);
        func_020362ec(iVar2, (s16)tb);
    }
    func_0202707c(iVar2, 0x11);
    return 1;

Lret0:
    return 0;
}
