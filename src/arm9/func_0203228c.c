#include "ctx.h"

extern u32 data_0214f464;

#define LCG(dst) do { u32 *Qp_ = *(u32 **)&data_0214f464; (dst) = *Qp_ * 0x10dcd + 1; *Qp_ = (dst); } while (0)

u32 func_0203228c(u8 *param_1, u32 param_2)
{
    u32 uVar3;
    u32 bk;
    switch (param_2) {
    case 0:
        LCG(uVar3);
        bk = (u16)(((u32)(u16)uVar3 * 0x32u) >> 16);
        switch (bk) {
        case 0: case 1: case 2: case 3:
            *(s16 *)(param_1 + 0xea) = 0xa0;
            return 1;
        case 4: case 5: case 6: case 7: case 8: case 9:
            *(s16 *)(param_1 + 0xea) = 0xa1;
            return 1;
        case 10: case 11: case 12: case 13: case 14: case 15:
            *(s16 *)(param_1 + 0xea) = 0xa2;
            return 1;
        case 16: case 17:
            if (*(s8 *)(param_1 + 0x8b) == 1) {
                *(s16 *)(param_1 + 0xea) = 0x5c;
            } else {
                *(s16 *)(param_1 + 0xea) = 0;
            }
            return 1;
        case 18: case 19:
            *(s16 *)(param_1 + 0xea) = 0x95;
            return 1;
        case 20: case 21:
            *(s16 *)(param_1 + 0xea) = 0x5e;
            return 1;
        case 22: case 23:
            *(s16 *)(param_1 + 0xea) = 0x5f;
            return 1;
        case 24: case 25:
            *(s16 *)(param_1 + 0xea) = 0x60;
            return 1;
        case 26:
            *(s16 *)(param_1 + 0xea) = 0xaa;
            return 1;
        case 27:
            *(s16 *)(param_1 + 0xea) = 0xab;
            return 1;
        default:
            *(s16 *)(param_1 + 0xea) = 0x257;
            return 1;
        }
    case 1:
        *(s16 *)(param_1 + 0xea) = 0xac;
        return 1;
    case 2:
        LCG(uVar3);
        bk = (u16)(((u32)(u16)uVar3 * 10u) >> 16);
        switch (bk) {
        case 0: goto k2a;
        case 1: goto k2b;
        case 2: goto k2c;
        }
        goto k2d;
    k2a:
        *(s16 *)(param_1 + 0xea) = 0x6b;
        return 1;
    k2b:
        *(s16 *)(param_1 + 0xea) = 0x83;
        return 1;
    k2c:
        *(s16 *)(param_1 + 0xea) = 0x85;
        return 1;
    k2d:
        *(s16 *)(param_1 + 0xea) = 0xb2;
        return 1;
    case 3:
        LCG(uVar3);
        bk = (u16)(((u32)(u16)uVar3 * 10u) >> 16);
        switch (bk) {
        case 0: goto k3a;
        case 1: goto k3b;
        case 2: goto k3c;
        }
        goto k3d;
    k3a:
        *(s16 *)(param_1 + 0xea) = 0x6c;
        return 1;
    k3b:
        *(s16 *)(param_1 + 0xea) = 0x84;
        return 1;
    k3c:
        *(s16 *)(param_1 + 0xea) = 0x86;
        return 1;
    k3d:
        *(s16 *)(param_1 + 0xea) = 0xb3;
        return 1;
    case 4:
        LCG(uVar3);
        bk = (u16)((uVar3 << 16) >> 31);
        switch (bk) {
        case 0: goto k4a;
        case 1: goto k4b;
        }
        goto Lret0;
    k4a:
        *(s16 *)(param_1 + 0xea) = 0xba;
        return 1;
    k4b:
        *(s16 *)(param_1 + 0xea) = 0xbb;
        return 1;
    case 5:
        LCG(uVar3);
        bk = (u16)((uVar3 << 16) >> 31);
        switch (bk) {
        case 0: goto k5a;
        case 1: goto k5b;
        }
        goto Lret0;
    k5a:
        *(s16 *)(param_1 + 0xea) = 0xc0;
        return 1;
    k5b:
        *(s16 *)(param_1 + 0xea) = 0xc2;
        return 1;
    case 6:
        LCG(uVar3);
        bk = (u16)((uVar3 << 16) >> 31);
        switch (bk) {
        case 0: goto k6a;
        case 1: goto k6b;
        }
        goto Lret0;
    k6a:
        *(s16 *)(param_1 + 0xea) = 0xc1;
        return 1;
    k6b:
        *(s16 *)(param_1 + 0xea) = 0xc3;
        return 1;
    case 7:
        LCG(uVar3);
        bk = (u16)(((u32)(u16)uVar3 * 3u) >> 16);
        switch (bk) {
        case 0: goto k7a;
        case 1: goto k7b;
        case 2: goto k7c;
        }
        goto Lret0;
    k7a:
        *(s16 *)(param_1 + 0xea) = 0xca;
        return 1;
    k7b:
        *(s16 *)(param_1 + 0xea) = 0xcc;
        return 1;
    k7c:
        *(s16 *)(param_1 + 0xea) = 0xce;
        return 1;
    case 8:
        LCG(uVar3);
        bk = (u16)(((u32)(u16)uVar3 * 3u) >> 16);
        switch (bk) {
        case 0: goto k8a;
        case 1: goto k8b;
        case 2: goto k8c;
        }
        goto Lret0;
    k8a:
        *(s16 *)(param_1 + 0xea) = 0xcb;
        return 1;
    k8b:
        *(s16 *)(param_1 + 0xea) = 0xcd;
        return 1;
    k8c:
        *(s16 *)(param_1 + 0xea) = 0xcf;
        return 1;
    case 9:
        *(s16 *)(param_1 + 0xea) = 0xdc;
        return 1;
    case 10:
        *(s16 *)(param_1 + 0xea) = 0xdd;
        return 1;
    case 11:
        *(s16 *)(param_1 + 0xea) = 0xe0;
        return 1;
    case 12:
        *(s16 *)(param_1 + 0xea) = 0xe1;
        return 1;
    case 13:
        LCG(uVar3);
        bk = (u16)((uVar3 << 16) >> 30);
        switch (bk) {
        case 0: *(s16 *)(param_1 + 0xea) = 0xe4; return 1;
        case 1: *(s16 *)(param_1 + 0xea) = 0x73; return 1;
        case 2: *(s16 *)(param_1 + 0xea) = 0x7f; return 1;
        case 3: *(s16 *)(param_1 + 0xea) = 0x81; return 1;
        }
        goto Lret0;
    case 14:
        LCG(uVar3);
        bk = (u16)((uVar3 << 16) >> 30);
        switch (bk) {
        case 0: *(s16 *)(param_1 + 0xea) = 0xe5; return 1;
        case 1: *(s16 *)(param_1 + 0xea) = 0x74; return 1;
        case 2: *(s16 *)(param_1 + 0xea) = 0x80; return 1;
        case 3: *(s16 *)(param_1 + 0xea) = 0x82; return 1;
        }
        goto Lret0;
    default:
        goto Lret0;
    }
Lret0:
    return 0;
}
