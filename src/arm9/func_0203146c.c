#include "ctx.h"

extern u32 *data_0214f464;

s32 func_0203146c(u8 *param_1, s32 param_2)
{
    u32 v;
    u32 idx;
    u32 *seed;

    switch (param_2) {
    case 0: goto K0;
    case 1: goto K1;
    case 2: goto K2;
    case 3: goto K3;
    case 4: goto K4;
    case 5: goto K5;
    case 6: goto K6;
    case 7: goto K7;
    case 8: goto K8;
    case 9: goto K9;
    case 10: goto K10;
    case 11: goto K11;
    case 12: goto K12;
    case 13: goto K13;
    case 14: goto K14;
    default: goto DEF;
    }

K0:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    idx = (u16)(((u32)(u16)v * 100) >> 16);
    switch (idx) {
    case 0: goto a0;
    case 1: goto a1;
    case 2: goto a2;
    case 3: goto a3;
    case 4: goto a4;
    case 5: goto a5;
    case 6: goto a6;
    case 7: goto a7;
    default: goto K0d;
    }
a0:
    *(u16 *)(param_1 + 0xea) = 0xa0;
    return 1;
a1:
    *(u16 *)(param_1 + 0xea) = 0xa1;
    return 1;
a2:
    *(u16 *)(param_1 + 0xea) = 0xa2;
    return 1;
a3:
    *(u16 *)(param_1 + 0xea) = 0xa3;
    return 1;
a4:
    *(u16 *)(param_1 + 0xea) = 0xa4;
    return 1;
a5:
    *(u16 *)(param_1 + 0xea) = 0xa5;
    return 1;
a6:
    *(u16 *)(param_1 + 0xea) = 0xaa;
    return 1;
a7:
    *(u16 *)(param_1 + 0xea) = 0xab;
    return 1;

K0d:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    switch ((u16)((v << 16) >> 30)) {
    case 0:
        *(u16 *)(param_1 + 0xea) = 0x95;
        return 1;
    default:
        *(u16 *)(param_1 + 0xea) = 0x96;
        return 1;
    }

K1:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    switch ((u16)((v << 16) >> 30)) {
    case 0:
        *(u16 *)(param_1 + 0xea) = 0xac;
        return 1;
    default:
        *(u16 *)(param_1 + 0xea) = 0x97;
        return 1;
    }

K2:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    switch ((u16)((v << 16) >> 30)) {
    case 0:
        *(u16 *)(param_1 + 0xea) = 0xb2;
        return 1;
    default:
        *(u16 *)(param_1 + 0xea) = 0x98;
        return 1;
    }

K3:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    switch ((u16)((v << 16) >> 30)) {
    case 0:
        *(u16 *)(param_1 + 0xea) = 0xb3;
        return 1;
    default:
        *(u16 *)(param_1 + 0xea) = 0x99;
        return 1;
    }

K4:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    switch ((u16)((v << 16) >> 30)) {
    case 0:
        *(u16 *)(param_1 + 0xea) = 0xba;
        return 1;
    default:
        *(u16 *)(param_1 + 0xea) = 0x9a;
        return 1;
    }

K5:
    *(u16 *)(param_1 + 0xea) = 0xc0;
    return 1;
K6:
    *(u16 *)(param_1 + 0xea) = 0xc1;
    return 1;
K7:
    *(u16 *)(param_1 + 0xea) = 0xca;
    return 1;
K8:
    *(u16 *)(param_1 + 0xea) = 0xcb;
    return 1;
K9:
    *(u16 *)(param_1 + 0xea) = 0xdc;
    return 1;
K10:
    *(u16 *)(param_1 + 0xea) = 0xdd;
    return 1;
K11:
    *(u16 *)(param_1 + 0xea) = 0xe0;
    return 1;
K12:
    *(u16 *)(param_1 + 0xea) = 0xe1;
    return 1;

K13:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    idx = (u16)((v << 16) >> 30);
    switch (idx) {
    case 0: goto b0;
    case 1: goto b1;
    case 2: goto b2;
    case 3: goto b3;
    default: goto DEF;
    }
b0:
    *(u16 *)(param_1 + 0xea) = 0xe4;
    return 1;
b1:
    *(u16 *)(param_1 + 0xea) = 0x73;
    return 1;
b2:
    *(u16 *)(param_1 + 0xea) = 0x7f;
    return 1;
b3:
    *(u16 *)(param_1 + 0xea) = 0x81;
    return 1;

K14:
    seed = data_0214f464;
    v = *seed * 0x10dcd + 1;
    *seed = v;
    idx = (u16)((v << 16) >> 30);
    switch (idx) {
    case 0: goto c0;
    case 1: goto c1;
    case 2: goto c2;
    case 3: goto c3;
    default: goto DEF;
    }
c0:
    *(u16 *)(param_1 + 0xea) = 0xe5;
    return 1;
c1:
    *(u16 *)(param_1 + 0xea) = 0x74;
    return 1;
c2:
    *(u16 *)(param_1 + 0xea) = 0x80;
    return 1;
c3:
    *(u16 *)(param_1 + 0xea) = 0x82;
    return 1;

DEF:
    return 0;
}
