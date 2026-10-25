#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_02036578(u8 *p);
extern void func_02035be8(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0203592c(u8 *p, u32 b);
extern s32 func_020357c8(u8 *p, u32 b);
extern void func_0203e908(u8 *p, u32 a);
extern void func_02050364(u8 *p, s32 a, u32 b);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02048680(u8 *param_1, u32 param_2, s32 param_3)
{
    s32 iVar3;
    s32 iVar4;
    u32 uVar5;
    u32 x0;
    s8 cVar1;
    s32 x;
    s32 bb;

    iVar3 = func_02036578(param_1);
    x0 = *(u16 *)(param_1 + 0xfc);
    if (param_1 == 0) {
        goto Ldef;
    }
    cVar1 = (s8)*(u32 *)(param_1 + 0x484);
    if (cVar1 == 0) {
        goto Lz;
    }
    if (cVar1 == 1) {
        goto L500;
    }
    if (cVar1 != 2) {
        goto Ldef;
    }
    uVar5 = (x0 < 100) ? 3 : 4;
    goto Ljoin;
L500:
    uVar5 = (x0 < 500) ? 5 : 6;
    goto Ljoin;
Lz:
    uVar5 = 1;
    goto Ljoin;
Ldef:
    uVar5 = 1;
Ljoin:
    SwapByte(uVar5, (vu8 *)(param_1 + 0x97));
    func_02035be8(param_1);
    iVar4 = func_020289d0(param_1, 15, 0);
    if (iVar4 == 0) {
        goto Lnon;
    }
    switch (param_2) {
    case 0: case 1: case 2: case 3:
        goto L2b5;
    case 4:
        goto L4;
    case 5: case 6:
        goto Lend;
    case 7:
        goto L7;
    case 8:
        goto L8;
    default:
        goto Lend;
    }
L2b5:
    func_0203e908(param_1, 0x2b5);
    return;
L4:
    func_0203e908(param_1, 0x2bf);
    return;
L7:
    func_0203e908(param_1, 0x2bf);
    return;
L8:
    func_0203e908(param_1, 0x2bf);
    return;
Lnon:
    if (func_0203592c(param_1, 0) != 0) {
        return;
    }
    if (func_020357c8(param_1, 0) != 0) {
        return;
    }
    if (iVar3 == 0) {
        goto Ls2;
    }
    x = *(s16 *)(iVar3 + 0xea);
    if (x < 0x295) {
        goto zb;
    }
    if (x <= 0x299) {
        bb = 1;
        goto tb;
    }
zb:
    bb = 0;
tb:
    if (bb != 0) {
        goto Lcall;
    }
Ls2:
    switch (param_2) {
    case 0: case 1: case 2: case 3:
        goto M2b5;
    case 4:
        goto M4;
    case 5: case 6:
        goto Lend;
    case 7:
        goto M7;
    case 8:
        goto M8;
    default:
        goto Lend;
    }
M2b5:
    func_0203e908(param_1, 0x2b5);
    return;
M4:
    func_0203e908(param_1, 0x2bf);
    return;
M7:
    func_0203e908(param_1, 0x2bf);
    return;
M8:
    func_0203e908(param_1, 0x2bf);
    return;
Lcall:
    if (param_3 != 0) {
        func_02050364(param_1, iVar3, param_2);
    }
    return;
Lend:
    return;
}
