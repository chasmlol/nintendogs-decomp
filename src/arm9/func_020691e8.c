#include "ctx.h"

extern u8 data_02150e30[];
extern void func_020699dc(u32);

#define W(addr, val) (*(u8 *)(addr) = (val))

void func_020691e8(s32 param_1)
{
    u16 uVar2;
    u16 uVar1;

    uVar2 = *(u16 *)data_02150e30;
    uVar1 = *(u16 *)(data_02150e30 + 8);
    *(u16 *)data_02150e30 = ((~param_1) & (uVar2 | uVar1));
    *(u16 *)(data_02150e30 + 8) = (u16)param_1;
    if (param_1 == 0) {
        *(u16 *)0x04000060 = *(u16 *)0x04000060 & 0xcffe;
        goto done;
    }
    *(u16 *)0x04000060 = (*(u16 *)0x04000060 & ~0x3000) | 1;
    switch (param_1) {
    case 1:
        goto L_c1;
    case 2:
        goto L_c2;
    case 3:
        goto L_c3;
    case 4:
        goto L_c4;
    case 5:
        goto L_c5;
    case 6:
        goto L_c6;
    case 7:
        goto L_c7;
    case 8:
        goto L_c8;
    case 9:
        goto L_c9;
    case 10:
        goto L_c10;
    case 11:
        goto L_c11;
    case 12:
        goto L_c12;
    case 13:
        goto L_c13;
    case 14:
        goto L_c14;
    case 15:
        goto L_c15;
    default:
        goto done;
    }
L_c5:
    W(0x04000240, 0x83);
    W(0x04000242, 0x8b);
    goto done;
L_c9:
    W(0x04000240, 0x83);
    W(0x04000243, 0x8b);
    goto done;
L_c10:
    W(0x04000241, 0x83);
    W(0x04000243, 0x8b);
    goto done;
L_c11:
    W(0x04000240, 0x83);
    W(0x04000241, 0x8b);
    W(0x04000243, 0x93);
    goto done;
L_c13:
    W(0x04000240, 0x83);
    W(0x04000242, 0x8b);
    W(0x04000243, 0x93);
    goto done;
L_c8:
    W(0x04000243, 0x83);
    goto done;
L_c12:
    W(0x04000243, 0x8b);
L_c4:
    W(0x04000242, 0x83);
    goto done;
L_c14:
    W(0x04000243, 0x93);
L_c6:
    W(0x04000242, 0x8b);
L_c2:
    W(0x04000241, 0x83);
    goto done;
L_c15:
    W(0x04000243, 0x9b);
L_c7:
    W(0x04000242, 0x93);
L_c3:
    W(0x04000241, 0x8b);
L_c1:
    W(0x04000240, 0x83);
done:
    func_020699dc(*(u16 *)data_02150e30);
}
