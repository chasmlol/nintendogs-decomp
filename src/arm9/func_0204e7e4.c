#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_02036578(u8 *p);
extern void func_020362f8(u8 *p);
extern s32 func_0202fd7c(u8 *p);
extern s32 func_0202fcc0(u8 *p);
extern s32 func_02039588(u8 *p);
extern s32 func_02027708(s32 a);
extern s32 func_02027710(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, s32 b);
extern u32 func_020449bc(void);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

s32 func_0204e7e4(u8 *param_1, s32 param_2)
{
    s32 iVar1;
    s32 iVar3;
    u32 uVar4;
    u16 x;
    u16 bit;

    iVar1 = func_02036578(param_1);
    x = *(u16 *)(param_1 + 0xfc);
    if (x > 500) {
        func_020362f8(param_1);
        return func_0202fd7c(param_1);
    }
    if (iVar1 == 0) {
        func_020362f8(param_1);
        return func_0202fcc0(param_1);
    }
    if (x != 500) {
        goto Lret0;
    }
    if (param_2 <= 2) {
        func_020362f8(param_1);
        iVar3 = func_02039588(param_1);
        if (iVar3 == 0 && iVar1 != 0) {
            iVar1 = func_02027708(iVar1);
            SwapByte(iVar1, (vu8 *)(param_1 + 0x8a));
            func_0203e908(param_1, 0x303);
            return 1;
        }
        return 0;
    }
    iVar3 = func_02027710(param_1, iVar1);
    if (iVar3 == -1) {
        goto LA;
    }
    if (iVar3 == 0) {
        goto LB;
    }
    if (iVar3 != 1) {
        goto L2;
    }
    iVar1 = func_02036578(param_1);
    uVar4 = func_020449bc();
    if ((uVar4 & 0x20) == 0) {
        return func_0202fd7c(param_1);
    }
    if (iVar1 == 0) {
        return 0;
    }
    iVar3 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar3;
    bit = (u16)(((u32)iVar3 << 16) >> 31);
    if (bit == 0) {
        goto L2cd;
    }
    if (bit != 1) {
        goto L2d;
    }
    goto L2ce;
L2cd:
    func_0203e908(param_1, 0x2cd);
    return 1;
L2ce:
    func_0203e908(param_1, 0x2ce);
    return 1;
L2d:
    return 0;
LB:
    func_020362f8(param_1);
    iVar3 = func_02039588(param_1);
    if (iVar3 == 0 && iVar1 != 0) {
        iVar1 = func_02027708(iVar1);
        SwapByte(iVar1, (vu8 *)(param_1 + 0x8a));
        func_0203e908(param_1, 0x303);
        return 1;
    }
    return 0;
LA:
    func_020362ec(iVar1, (s16)(s32)*(s8 *)(param_1 + 0x88));
    func_0202707c(iVar1, 17);
    return 1;
L2:
    return 0;
Lret0:
    return 0;
}
