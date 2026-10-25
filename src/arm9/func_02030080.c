#include "ctx.h"

extern u32 *data_0214f464;

static inline u32 Rnd(u32 k)
{
    u32 nw;
    u32 t;
    nw = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nw;
    t = (u16)nw;
    return (u16)((t * k) >> 16);
}

u32 func_02030080(u8 *param_1, u32 param_2)
{
    u32 v;
    u32 nw;
    switch (param_2) {
    case 0:
        v = Rnd(7);
        switch (v) {
        case 0:
            *(s16 *)(param_1 + 0xea) = 0xa1;
            return 1;
        case 1:
            *(s16 *)(param_1 + 0xea) = 0xa2;
            return 1;
        case 2:
        case 3:
            *(s16 *)(param_1 + 0xea) = 0x5e;
            return 1;
        case 4:
        case 5:
            *(s16 *)(param_1 + 0xea) = 0x5f;
            return 1;
        case 6:
            *(s16 *)(param_1 + 0xea) = 0x60;
            return 1;
        default:
            break;
        }
        break;
    case 1:
        *(s16 *)(param_1 + 0xea) = 0xac;
        return 1;
    case 2:
        v = Rnd(3);
        switch (v) {
        case 0:
                *(s16 *)(param_1 + 0xea) = 0xb2;
            return 1;
        case 1:
                *(s16 *)(param_1 + 0xea) = 0x83;
            return 1;
        case 2:
                *(s16 *)(param_1 + 0xea) = 0x85;
            return 1;
        }
        break;
    case 3:
        v = Rnd(3);
        switch (v) {
        case 0:
                *(s16 *)(param_1 + 0xea) = 0xb3;
            return 1;
        case 1:
                *(s16 *)(param_1 + 0xea) = 0x84;
            return 1;
        case 2:
                *(s16 *)(param_1 + 0xea) = 0x86;
            return 1;
        }
        break;
    case 4: *(s16 *)(param_1 + 0xea) = 0xba; return 1;
    case 5: *(s16 *)(param_1 + 0xea) = 0xc0; return 1;
    case 6: *(s16 *)(param_1 + 0xea) = 0xc1; return 1;
    case 7: *(s16 *)(param_1 + 0xea) = 0xca; return 1;
    case 8: *(s16 *)(param_1 + 0xea) = 0xcb; return 1;
    case 9:
        nw = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = nw;
        v = (u16)((nw << 16) >> 31);
        switch (v) {
        case 0:
                *(s16 *)(param_1 + 0xea) = 0xdc;
            return 1;
        case 1:
                *(s16 *)(param_1 + 0xea) = 0xde;
            return 1;
        }
        break;
    case 10:
        nw = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = nw;
        v = (u16)((nw << 16) >> 31);
        switch (v) {
        case 0:
                *(s16 *)(param_1 + 0xea) = 0xdd;
            return 1;
        case 1:
                *(s16 *)(param_1 + 0xea) = 0xdf;
            return 1;
        }
        break;
    case 11: *(s16 *)(param_1 + 0xea) = 0xe0; return 1;
    case 12: *(s16 *)(param_1 + 0xea) = 0xe1; return 1;
    case 13: *(s16 *)(param_1 + 0xea) = 0xe6; return 1;
    case 14: *(s16 *)(param_1 + 0xea) = 0xe7; return 1;
    }
    return 0;
}
