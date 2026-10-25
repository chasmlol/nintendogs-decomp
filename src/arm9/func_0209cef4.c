#include "ctx.h"

extern u8 data_0214204c[];
extern u8 data_02159198[];
extern u8 data_02159148[];
extern u32 data_0215919c;
extern void func_0209ea80(s32 a, s32 b);
extern void func_0209e9f8(s32 a);
extern void func_0209edc4(s32 a);
extern void func_020a3238(s32 a);
extern s32 func_0209d0dc(s32 *p, s32 a);

u32 func_0209cef4(s32 *param_1, s32 param_2, s32 param_3)
{
    u8 *iVar2;
    u8 cVar1;
    s32 uVar5;
    u8 *iVar4;
    s32 uVar3;
    u8 *pb;
    u32 *pa;

    uVar5 = -1;
    iVar4 = *(u8 **)(data_0214204c + *(u16 *)(param_1 + 9) * 4);
    uVar3 = *(s16 *)(iVar4 + 2);
    cVar1 = *(u8 *)(iVar4 + 1);
    pb = data_02159198;
    iVar2 = data_02159148;
    if (uVar3 == -1) {
        goto L14c;
    }
    pa = (u32 *)&data_0215919c;
    if (uVar3 > 26) {
        goto big;
    }
    if (uVar3 >= 26) {
        goto L104;
    }
    if (uVar3 != 8) {
        goto L14c;
    }
    goto L104;
big:
    if (uVar3 > 33) {
        goto L14c;
    }
    if (uVar3 < 32) {
        goto L14c;
    }
    if (uVar3 == 32) {
        goto L104;
    }
    if (uVar3 != 33) {
        goto L14c;
    }
    if (param_3 == 0) {
        if (*pa != 0 && *(s16 *)(pb + 0x22) != 0x40) {
            func_0209ea80(0x40, 0x3c);
            func_0209e9f8(0xe6);
        }
        return 0xffffffff;
    }
    if (*pa == 0) {
        func_0209edc4(33);
    } else if (*(s16 *)(pb + 0x22) != 0x7f && param_3 != 0) {
        func_0209ea80(0x7f, 0x1e);
        func_0209e9f8(0x100);
    }
    goto L14c;
L104:
    if ((u32)(param_2 - 4) <= 1) {
        if (*pa == 0) {
            func_0209edc4(uVar3);
        } else if (*(s16 *)(pb + 0x22) != 0x7f && param_3 != 0) {
            func_0209ea80(0x7f, 0x1e);
            func_0209e9f8(0x100);
        }
    }
L14c:
    if (cVar1 == 30) {
        func_020a3238(param_3);
    }
    if (cVar1 == 25 && param_2 == 6) {
        *(s32 *)(iVar2 + 0x24) = 1;
        *(s32 *)(iVar2 + 0x28) = param_3;
        *(s32 *)(iVar2 + 0x2c) = 0;
    } else {
        uVar5 = func_0209d0dc(param_1, param_2);
    }
    if (uVar5 == -1) {
        return 0xffffffff;
    }
    if (param_3 < 0) {
        param_3 = -param_3;
    }
    *(s32 *)((u8 *)param_1 + uVar5 * 4 + 0x28) = param_3;
    *(u16 *)((u8 *)param_1 + 0x26) = *(u16 *)((u8 *)param_1 + 0x26) | (1 << uVar5);
    return uVar5;
}
