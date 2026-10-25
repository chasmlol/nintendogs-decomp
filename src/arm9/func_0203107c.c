#include "ctx.h"

extern u32 *data_0214f464;

u32 func_0203107c(u8 *param_1, u32 param_2)
{
    u32 x;
    u32 t;

    switch (param_2) {
    case 0:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)((((u32)(u16)x) * 5) >> 16);
        switch (t) {
        case 0:
            *(s16 *)(param_1 + 0xea) = 0xa1;
            return 1;
        case 1:
            *(s16 *)(param_1 + 0xea) = 0xa2;
            return 1;
        case 2:
            *(s16 *)(param_1 + 0xea) = 0xa3;
            return 1;
        case 3:
            *(s16 *)(param_1 + 0xea) = 0xa4;
            return 1;
        case 4:
            *(s16 *)(param_1 + 0xea) = 0xa5;
            return 1;
        }
        goto end0;
    case 1:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)(((u32)x << 16) >> 31);
        if (t == 0) goto sA1;
        if (t != 1) goto end0;
        goto sB1;
    sA1:
        *(s16 *)(param_1 + 0xea) = 0xad;
        return 1;
    sB1:
        *(s16 *)(param_1 + 0xea) = 0xae;
        return 1;
    case 2:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)((((u32)(u16)x) * 3) >> 16);
        switch (t) {
        case 0:
            *(s16 *)(param_1 + 0xea) = 0xb6;
            return 1;
        case 1:
            *(s16 *)(param_1 + 0xea) = 0x83;
            return 1;
        case 2:
            *(s16 *)(param_1 + 0xea) = 0x85;
            return 1;
        default:
            goto c3s;
        }
        goto end0;
    case 3:
    c3s:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)((((u32)(u16)x) * 3) >> 16);
        switch (t) {
        case 0:
            *(s16 *)(param_1 + 0xea) = 0xb7;
            return 1;
        case 1:
            *(s16 *)(param_1 + 0xea) = 0x84;
            return 1;
        case 2:
            *(s16 *)(param_1 + 0xea) = 0x86;
            return 1;
        default:
            goto c4s;
        }
        goto end0;
    case 4:
    c4s:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)(((u32)x << 16) >> 31);
        if (t == 0) goto sA4;
        if (t != 1) goto end0;
        goto sB4;
    sA4:
        *(s16 *)(param_1 + 0xea) = 0xbc;
        return 1;
    sB4:
        *(s16 *)(param_1 + 0xea) = 0xbd;
        return 1;
    case 5:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)(((u32)x << 16) >> 31);
        if (t == 0) goto sA5;
        if (t != 1) goto c6s;
        goto sB5;
    sA5:
        *(s16 *)(param_1 + 0xea) = 0xc4;
        return 1;
    sB5:
        *(s16 *)(param_1 + 0xea) = 0x8b;
        return 1;
    case 6:
    c6s:
        x = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = x;
        t = (u16)(((u32)x << 16) >> 31);
        if (t == 0) goto sA6;
        if (t != 1) goto c7s;
        goto sB6;
    sA6:
        *(s16 *)(param_1 + 0xea) = 0xc5;
        return 1;
    sB6:
        *(s16 *)(param_1 + 0xea) = 0x8c;
        return 1;
    case 7:
    c7s:
        *(s16 *)(param_1 + 0xea) = 0xd2;
        return 1;
    case 8:
        *(s16 *)(param_1 + 0xea) = 0xd3;
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
        *(s16 *)(param_1 + 0xea) = 0xe6;
        return 1;
    case 14:
        *(s16 *)(param_1 + 0xea) = 0xe7;
        return 1;
    }
end0:
    return 0;
}
