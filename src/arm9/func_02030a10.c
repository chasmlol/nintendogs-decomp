#include "ctx.h"

extern u32 *data_0214f464;

s32 func_02030a10(u8 *param_1, s32 param_2)
{
    u32 *p;
    u32 v;
    switch (param_2) {
    case 0:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)(((u32)(u16)v * 12) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 161; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 162; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 164; return 1;
        case 3: *(u16 *)(param_1 + 0xea) = 165; return 1;
        case 4: *(u16 *)(param_1 + 0xea) = 166; return 1;
        case 5: *(u16 *)(param_1 + 0xea) = 167; return 1;
        case 6: *(u16 *)(param_1 + 0xea) = 168; return 1;
        case 7: *(u16 *)(param_1 + 0xea) = 169; return 1;
        case 8:
        case 9: *(u16 *)(param_1 + 0xea) = 94; return 1;
        case 10:
        case 11: *(u16 *)(param_1 + 0xea) = 95; return 1;
        }
        break;
    case 1:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 176; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 177; return 1;
        default: break;
        }
        break;
    case 2:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)(((u32)(u16)v * 3) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 182; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 131; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 133; return 1;
        default: break;
        }
        break;
    case 3:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)(((u32)(u16)v * 3) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 183; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 132; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 134; return 1;
        default: break;
        }
        break;
    case 4:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 190; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 191; return 1;
        default: break;
        }
        break;
    case 5:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)(((u32)(u16)v * 3) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 198; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 200; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 139; return 1;
        default: break;
        }
        break;
    case 6:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)(((u32)(u16)v * 3) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 199; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 201; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 140; return 1;
        default: break;
        }
        break;
    case 7:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 210; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 214; return 1;
        default: break;
        }
        break;
    case 8:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 211; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 215; return 1;
        default: break;
        }
        break;
    case 9:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 220; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 222; return 1;
        default: break;
        }
        break;
    case 10:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 221; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 223; return 1;
        default: break;
        }
        break;
    case 11:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 224; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 226; return 1;
        default: break;
        }
        break;
    case 12:
        p = data_0214f464;
        v = *p * 0x10dcd + 1;
        *p = v;
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 225; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 227; return 1;
        default: break;
        }
        break;
    case 13:
        *(u16 *)(param_1 + 0xea) = 230;
        return 1;
    case 14:
        *(u16 *)(param_1 + 0xea) = 231;
        return 1;
    default:
        break;
    }
    return 0;
}
