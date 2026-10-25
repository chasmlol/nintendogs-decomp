#include "ctx.h"

extern u16 data_02150e30[];
extern void func_020699dc(u32 a);

#define REG8(a) (*(vu8 *)(a))

void func_02069724(s32 param_1)
{
    data_02150e30[0] = (u16)((u32)~param_1 & (u32)(data_02150e30[0] | data_02150e30[1]));
    data_02150e30[1] = (u16)param_1;

    switch (param_1) {
    case 0: goto done;
    case 1: goto k1;
    case 2: goto k2;
    case 3: goto k3;
    case 4: goto k4;
    case 5: goto k5;
    case 6: goto k6;
    case 7: goto k7;
    case 8: goto k8;
    case 9: goto k9;
    case 10: goto k10;
    case 11: goto k11;
    case 12: goto k12;
    case 13: goto k13;
    case 14: goto k14;
    case 15: goto k15;
    case 16: goto k16;
    case 32: goto Mtail;
    case 48: goto K;
    case 64: goto N;
    case 80: goto L;
    case 96: goto M;
    case 112: goto J;
    default: goto done;
    }
k8:
    REG8(0x04000243) = 0x81;
    goto done;
k12:
    REG8(0x04000243) = 0x89;
k4:
    REG8(0x04000242) = 0x81;
    goto done;
k14:
    REG8(0x04000243) = 0x91;
k6:
    REG8(0x04000242) = 0x89;
k2:
    REG8(0x04000241) = 0x81;
    goto done;
k15:
    REG8(0x04000243) = 0x99;
k7:
    REG8(0x04000242) = 0x91;
k3:
    REG8(0x04000241) = 0x89;
k1:
    REG8(0x04000240) = 0x81;
    goto done;
k11:
    REG8(0x04000240) = 0x81;
    REG8(0x04000241) = 0x89;
    REG8(0x04000243) = 0x91;
    goto done;
k13:
    REG8(0x04000243) = 0x91;
k5:
    REG8(0x04000240) = 0x81;
    REG8(0x04000242) = 0x89;
    goto done;
k9:
    REG8(0x04000240) = 0x81;
    REG8(0x04000243) = 0x89;
    goto done;
k10:
    REG8(0x04000241) = 0x81;
    REG8(0x04000243) = 0x89;
    goto done;
J:
    REG8(0x04000246) = 0x99;
K:
    REG8(0x04000245) = 0x91;
k16:
    REG8(0x04000244) = 0x81;
    goto done;
L:
    REG8(0x04000246) = 0x91;
    REG8(0x04000244) = 0x81;
    goto done;
M:
    REG8(0x04000246) = 0x89;
Mtail:
    REG8(0x04000245) = 0x81;
    goto done;
N:
    REG8(0x04000246) = 0x81;
done:
    func_020699dc(data_02150e30[0]);
}
