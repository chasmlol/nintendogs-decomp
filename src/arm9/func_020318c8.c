#include "ctx.h"

extern u32 *data_0214f464;

u32 func_020318c8(u8 *param_1, u32 param_2)
{
    u32 v;
    u32 *P;
    u32 nw;
    switch (param_2) {
    case 0:
        P = data_0214f464;
        nw = *P * 0x10dcd + 1;
        *P = nw;
        v = (u16)(((u32)(u16)nw * 6) >> 16);
        if (v == 0) goto c0a;
        if (v == 1) goto c0b;
        if (v != 2) goto c0d;
        goto c0c;
    c0a:
        *(s16 *)(param_1 + 0xea) = 0x5b;
        return 1;
    c0b:
        *(s16 *)(param_1 + 0xea) = 0xa1;
        return 1;
    c0c:
        *(s16 *)(param_1 + 0xea) = 0xa2;
        return 1;
    c0d:
        *(s16 *)(param_1 + 0xea) = 0x257;
        return 1;
    case 1:
        *(s16 *)(param_1 + 0xea) = 0xac;
        return 1;
    case 2:
        P = data_0214f464;
        nw = *P * 0x10dcd + 1;
        *P = nw;
        v = (u16)(((u32)(u16)nw * 3) >> 16);
        if (v == 0) goto c2a;
        if (v == 1) goto c2b;
        if (v != 2) break;
        goto c2c;
    c2a:
        *(s16 *)(param_1 + 0xea) = 0x83;
        return 1;
    c2b:
        *(s16 *)(param_1 + 0xea) = 0x85;
        return 1;
    c2c:
        *(s16 *)(param_1 + 0xea) = 0xb2;
        return 1;
    case 3:
        P = data_0214f464;
        nw = *P * 0x10dcd + 1;
        *P = nw;
        v = (u16)(((u32)(u16)nw * 3) >> 16);
        if (v == 0) goto c3a;
        if (v == 1) goto c3b;
        if (v != 2) break;
        goto c3c;
    c3a:
        *(s16 *)(param_1 + 0xea) = 0x84;
        return 1;
    c3b:
        *(s16 *)(param_1 + 0xea) = 0x86;
        return 1;
    c3c:
        *(s16 *)(param_1 + 0xea) = 0xb3;
        return 1;
    case 4: *(s16 *)(param_1 + 0xea) = 0xba; return 1;
    case 5: *(s16 *)(param_1 + 0xea) = 0xc0; return 1;
    case 6: *(s16 *)(param_1 + 0xea) = 0xc1; return 1;
    case 7: *(s16 *)(param_1 + 0xea) = 0xca; return 1;
    case 8: *(s16 *)(param_1 + 0xea) = 0xcb; return 1;
    case 9: *(s16 *)(param_1 + 0xea) = 0xdc; return 1;
    case 10: *(s16 *)(param_1 + 0xea) = 0xdd; return 1;
    case 11: *(s16 *)(param_1 + 0xea) = 0xe0; return 1;
    case 12: *(s16 *)(param_1 + 0xea) = 0xe1; return 1;
    case 13: *(s16 *)(param_1 + 0xea) = 0xe4; return 1;
    case 14: *(s16 *)(param_1 + 0xea) = 0xe5; return 1;
    }
    return 0;
}
