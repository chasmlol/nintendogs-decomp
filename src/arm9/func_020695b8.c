#include "ctx.h"

extern u8 data_02150e30;
extern void func_020699dc(u32 a);

#define SB(addr, val) (*(vu8 *)(addr) = (val))

void func_020695b8(s32 param_1)
{
    u16 uVar1;
    int uVar2;

    uVar1 = *(u16 *)(&data_02150e30 + 4);
    uVar2 = *(u16 *)(&data_02150e30);
    *(u16 *)(&data_02150e30) = (u16)(~param_1 & (uVar2 | uVar1));
    *(u16 *)(&data_02150e30 + 4) = param_1;

    if (48 < param_1) goto L70;
    if (param_1 >= 48) goto LEC;
    if (param_1 > 16) goto L64;
    if (param_1 >= 16) goto LF8;
    switch (param_1) {
    case 0: goto L13c;
    case 1: goto Lc0;
    case 2: goto Ld0;
    case 3: goto Lb4;
    default: goto L13c;
    }
L64:
    if (param_1 != 32) goto L13c;
    goto L130;
L70:
    if (param_1 > 80) goto L94;
    if (param_1 >= 80) goto L108;
    if (64 != param_1) goto L13c;
    SB(0x04000246, 0x82);
    goto L13c;
L94:
    if (param_1 > 96) goto La8;
    if (param_1 != 96) goto L13c;
    goto L124;
La8:
    if (param_1 != 112) goto L13c;
    goto Le0;
Lb4:
    SB(0x04000241, 0x8a);
Lc0:
    SB(0x04000240, 0x82);
    goto L13c;
Ld0:
    SB(0x04000241, 0x82);
    goto L13c;
Le0:
    SB(0x04000246, 0x9a);
LEC:
    SB(0x04000245, 0x92);
LF8:
    SB(0x04000244, 0x82);
    goto L13c;
L108:
    SB(0x04000246, 0x92);
    SB(0x04000244, 0x82);
    goto L13c;
L124:
    SB(0x04000246, 0x8a);
L130:
    SB(0x04000245, 0x82);
L13c:
    func_020699dc(*(u16 *)(&data_02150e30));
}
