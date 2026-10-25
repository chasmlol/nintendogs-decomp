#include "ctx.h"
extern u8 *data_0214f464;
static inline u32 Lcg(void)
{
    u32 *st = (u32 *)data_0214f464;
    u32 v = (*st) * 0x10dcd + 1;
    *st = v;
    return v;
}
u32 func_02031b74(u8 *param_1, u32 param_2)
{
    u32 v;
    switch (param_2) {
    case 0:
        v = Lcg();
        switch ((u16)((v << 16) >> 29)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0x67; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x68; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 0xa1; return 1;
        case 3: *(u16 *)(param_1 + 0xea) = 0xa2; return 1;
        case 4: *(u16 *)(param_1 + 0xea) = 0xa4; return 1;
        case 5: *(u16 *)(param_1 + 0xea) = 0xa5; return 1;
        case 6: *(u16 *)(param_1 + 0xea) = 0x9c; return 1;
        case 7: *(u16 *)(param_1 + 0xea) = 0x9d; return 1;
        }
        break;
    case 1:
        v = Lcg();
        switch ((u16)((((u32)(u16)v) * 3) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xac; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0xad; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 0xae; return 1;
        }
        break;
    case 2:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xb2; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x6b; return 1;
        }
        break;
    case 3:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xb3; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x6c; return 1;
        }
        break;
    case 4:
        v = Lcg();
        switch ((u16)((((u32)(u16)v) * 3) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xba; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0xbe; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 0xbf; return 1;
        }
        break;
    case 5:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xc0; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x6f; return 1;
        }
        break;
    case 6:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xc1; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x70; return 1;
        }
        break;
    case 7:
        v = Lcg();
        switch ((u16)((((u32)(u16)v) * 5) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xca; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0xce; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 0xd2; return 1;
        case 3: *(u16 *)(param_1 + 0xea) = 0xd4; return 1;
        case 4: *(u16 *)(param_1 + 0xea) = 0x9e; return 1;
        }
        break;
    case 8:
        v = Lcg();
        switch ((u16)((((u32)(u16)v) * 5) >> 16)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xcb; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0xcf; return 1;
        case 2: *(u16 *)(param_1 + 0xea) = 0xd3; return 1;
        case 3: *(u16 *)(param_1 + 0xea) = 0xd5; return 1;
        case 4: *(u16 *)(param_1 + 0xea) = 0x9f; return 1;
        }
        break;
    case 9:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xdc; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x9e; return 1;
        }
        break;
    case 10:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xdd; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x9f; return 1;
        }
        break;
    case 11:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xe0; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x9e; return 1;
        }
        break;
    case 12:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xe1; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x9f; return 1;
        }
        break;
    case 13:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xe4; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x7b; return 1;
        }
        break;
    case 14:
        v = Lcg();
        switch ((u16)((v << 16) >> 31)) {
        case 0: *(u16 *)(param_1 + 0xea) = 0xe5; return 1;
        case 1: *(u16 *)(param_1 + 0xea) = 0x7c; return 1;
        }
        break;
    }
    return 0;
}
