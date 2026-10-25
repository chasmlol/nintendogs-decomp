#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u8 pad[0xb6]; u8 f; } SB;

extern u8 *data_0214f464;
extern u8 *data_0215942c;
extern void func_02027e64(int a, int b, int c);
extern s32 func_ov003_02198298(int a);
extern s32 func_0203541c(int a);
extern void func_0203e908(int a, int b);
extern s32 func_ov003_0219a368(int a);
extern s32 func_0202fd7c(int a);
extern s32 func_02027ec8(int a, int b);
extern s32 func_02034750(int a, int b, int c);
extern s32 func_020388a8(int a, int b);
extern s32 func_020386d0(int a);

#pragma opt_common_subs off
u32 func_ov003_02197f94(int param_1, int param_2)
{
    s32 iVar2;
    s32 iVar3;
    u32 uVar4;
    u32 uVar6;
    u32 uVar7;
    u32 hi;
    s32 t1000;
    u8 *pp;
    s32 g;
    s32 bVar1;

    if (*(s16 *)(param_1 + 0xfa) == 0x25) {
        if ((((SB *)param_1)->f & 8) != 0) {
            ((SB *)param_1)->f = ((SB *)param_1)->f & ~8;
            g = 1;
        } else {
            g = 0;
        }
        if (g != 0) {
            func_02027e64(param_1, 3, 0x19);
        }
        *(u8 *)(param_1 + 147) = 0;
        *(s32 *)((u8 *)param_1 + 0x948) = 5;
    }
    *(s32 *)((u8 *)param_1 + 0x488) = *(volatile s32 *)((u8 *)param_1 + 0x488) + 1;
    iVar2 = func_ov003_02198298(param_1);
    if (iVar2 != 0) {
        return 1;
    }
    if (param_2 == 0) goto Lret0;
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) goto Lzero;
    if (*(s16 *)(iVar2 + 0x96) == 3) goto C3;
    if (*(s16 *)(iVar2 + 0x96) != 0xe) goto MAIN;
    goto C14;
C3:
    func_0203e908(param_1, 0x43c);
    *(s16 *)(param_1 + 0xfa) = 0;
    return 1;
C14:
    func_0203e908(param_1, 0x428);
    *(s16 *)(param_1 + 0xfa) = 0;
    return 1;
MAIN:
    iVar3 = func_02027ec8(param_1, 4);
    if (*(u16 *)data_0215942c == 10) {
        bVar1 = 1;
    } else if (*(u16 *)data_0215942c == 1) {
        bVar1 = 1;
    } else {
        bVar1 = 0;
    }
    if (bVar1 == 0) {
        uVar4 = 0;
        goto M1A0;
    }
    if (iVar3 < 1000) {
        uVar4 = 0;
        goto M1A0;
    }
    if (iVar3 >= 4000) goto L19C;
    t1000 = iVar3 - 1000;
    {
        u32 *sp = (u32 *)data_0214f464;
        u32 nv = *sp * 0x10dcd + 1;
        uVar4 = (((u32)(u16)nv * 0xbb8) >> 16) * 65536u;
        *sp = nv;
    }
    if (t1000 < (s32)(uVar4 >> 16)) {
        uVar4 = 1;
    } else {
        uVar4 = 0;
    }
    goto M1A0;
L19C:
    uVar4 = 1;
M1A0:
    if (uVar4 != 0) {
        *(s32 *)((u8 *)param_1 + 0x488) = 0;
        iVar2 = func_02034750(param_1, iVar2, 1);
        if (iVar2 != 0) {
            if ((((SB *)param_1)->f & 0x10) != 0) {
                ((SB *)param_1)->f = ((SB *)param_1)->f & ~0x10;
                g = 1;
            } else {
                g = 0;
            }
            if (g != 0) {
                func_02027e64(param_1, 4, 0x32);
            }
        }
        iVar2 = func_02027ec8(param_1, 4);
        iVar2 = func_020388a8(param_1, iVar2);
        func_0203e908(param_1, (s16)(iVar2 + 0x3ba));
    } else {
        iVar2 = func_020386d0(param_1);
        func_0203e908(param_1, (s16)(iVar2 + 0x3d1));
    }
    *(s16 *)(param_1 + 0xfa) = 0;
    return 1;
Lzero:
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        func_0203e908(param_1, 0x3f7);
        *(s16 *)(param_1 + 0xfa) = 0;
        return 1;
    }
    iVar2 = func_ov003_0219a368(param_1);
    if (iVar2 != 0) {
        return 1;
    }
    return func_0202fd7c(param_1);
Lret0:
    return 0;
}
