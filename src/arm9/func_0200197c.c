#include "ctx.h"

extern u8 data_0214e684[];
extern void func_02080b84(void);

typedef struct { u32 f1 : 12; u32 f2 : 12; u32 f3 : 1; u32 f4 : 2; u32 f5 : 5; } Pack32;

void func_0200197c(s32 param_1, u32 param_2, s32 param_3)
{
    u32 uVar1;
    u32 uVar6;
    u32 w;
    s32 iVar4;
    u16 local_10[2];
    u16 uStack_c[2];

    w = (u32)(u16)param_2;
    uVar1 = ((w & 0x7f00) << 8) >> 16;
    if (param_3 != 0) {
        *(u16 *)(data_0214e684 + 52) = *(u16 *)(data_0214e684 + 52) | (1 << uVar1);
        if (*(s32 *)data_0214e684 != 0) {
            ((void (*)(u32, s32, s32))(*(s32 *)data_0214e684))(uVar1, 4, 0);
        }
        return;
    }
    if (uVar1 == 0x10) {
        *(u16 *)(data_0214e684 + 12) = *(u16 *)(data_0214e684 + 12) + 1;
        if (*(u16 *)(data_0214e684 + 12) >= *(u16 *)(data_0214e684 + 20)) {
            *(u16 *)(data_0214e684 + 12) = 0;
        }
        iVar4 = *(s32 *)(data_0214e684 + 16) + (u32)*(u16 *)(data_0214e684 + 12) * 8;
        local_10[0] = *(vu16 *)0x027fffaa;
        local_10[1] = *(vu16 *)0x027fffac;
        *(u16 *)iVar4 = ((Pack32 *)local_10)->f1;
        *(u16 *)(iVar4 + 2) = ((Pack32 *)local_10)->f2;
        *(u16 *)(iVar4 + 4) = (u8)((Pack32 *)local_10)->f3;
        *(u16 *)(iVar4 + 6) = (u8)((Pack32 *)local_10)->f4;
        if (*(s32 *)data_0214e684 != 0) {
            ((void (*)(u32, s32, s32))(*(s32 *)data_0214e684))(uVar1, 0, *(u16 *)(data_0214e684 + 12) & 0xff);
        }
        return;
    }
    if ((param_2 & 0x1000000) == 0) {
        return;
    }
    switch (w & 0xff) {
    case 0:
        goto K0;
    case 1:
        goto KD;
    case 2:
        goto K2;
    case 3:
        goto K3;
    case 4:
        goto K4;
    default:
        goto KD;
    }

K0:
    if (uVar1 == 0) goto K0a;
    if (uVar1 == 1) goto K0b;
    if (uVar1 == 2) *(u16 *)(data_0214e684 + 50) = 0;
    goto K0c;

K0a:
    uStack_c[0] = *(vu16 *)0x027fffaa;
    uStack_c[1] = *(vu16 *)0x027fffac;
    *(u16 *)(data_0214e684 + 50) = 0;
    *(u16 *)(data_0214e684 + 4) = ((Pack32 *)uStack_c)->f1;
    *(u16 *)(data_0214e684 + 6) = ((Pack32 *)uStack_c)->f2;
    *(u16 *)(data_0214e684 + 8) = (u8)((Pack32 *)uStack_c)->f3;
    *(u16 *)(data_0214e684 + 10) = (u8)((Pack32 *)uStack_c)->f4;
    goto K0c;

K0b:
    *(u16 *)(data_0214e684 + 50) = 2;

K0c:
    *(u16 *)(data_0214e684 + 54) = *(u16 *)(data_0214e684 + 54) & ~(1 << uVar1);
    if (*(s32 *)data_0214e684 != 0) {
        ((void (*)(u32, s32, s32))(*(s32 *)data_0214e684))(uVar1, 0, 0);
    }
    return;

K4:
    uVar6 = 3;
    goto K254;

K2:
    uVar6 = 1;
    goto K254;

K3:
    uVar6 = 2;

K254:
    *(vu16 *)(data_0214e684 + 52) = *(vu16 *)(data_0214e684 + 52) | (1 << uVar1);
    *(vu16 *)(data_0214e684 + 54) = *(vu16 *)(data_0214e684 + 54) & ~(1 << uVar1);
    if (*(s32 *)data_0214e684 != 0) {
        ((void (*)(u32, u32, s32))(*(s32 *)data_0214e684))(uVar1, (u8)uVar6, 0);
    }
    return;

KD:
    func_02080b84();
    return;
}
