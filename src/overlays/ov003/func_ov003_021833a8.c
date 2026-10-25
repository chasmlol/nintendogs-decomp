#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f460;
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(u8 *a, u8 *b, s32 c);
extern s32 func_0202dddc(u8 *p);
extern void func_ov003_0218bc08(u8 *p, s32 a);
extern void func_0202f9b4(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

#define mulr(x, k) ((s32)((((s64)(x) * (s64)(k)) + 0x800) >> 12))

void func_ov003_021833a8(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 uVar5;
    s32 r;

    iVar2 = func_02028124(param_1);
    r = func_0202518c(param_1, 0x17, mulr(iVar2, -249));
    if (r == 0) {
        iVar2 = func_02028124(param_1);
        func_0202508c(param_1, 0x18, 0x2d, mulr(iVar2, 74));
    }
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = mulr(iVar3, iVar2);
    r = func_020aaf38(data_0214f460, param_1 + 888, mulr(uVar5, 0x1004));
    if (r != 0) {
        goto Lfail;
    }
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = mulr(iVar3, iVar2);
    r = func_020aaf38(data_0214f460, param_1 + 900, mulr(uVar5, 0x14d2));
    if (r != 0) {
        goto Lfail;
    }
    iVar2 = func_02028130(param_1);
    iVar3 = func_02028130(param_1);
    uVar5 = mulr(iVar3, iVar2);
    r = func_020aaf38(data_0214f460, param_1 + 840, mulr(uVar5, 0x14d2));
    if (r == 0) {
        goto Lsucc;
    }
Lfail:
    *(u16 *)(param_1 + 0x11c) = 0;
    *(u16 *)(param_1 + 0x11e) = 1;
    goto LAB_tail;
Lsucc:
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
LAB_tail:
    if (*(u16 *)(param_1 + 0x11c) == 0) {
        *(u8 *)(param_1 + 0xb9) = 1;
    } else {
        *(u8 *)(param_1 + 0xb9) = 0;
    }
    iVar2 = func_0202dddc(param_1);
    func_ov003_0218bc08(param_1, iVar2);
    func_0202f9b4(param_1);
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        func_0203e908(param_1, 0xee);
    }
}
