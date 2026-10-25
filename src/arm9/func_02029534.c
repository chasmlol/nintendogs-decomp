#include "ctx.h"

extern u8 *data_02159444;

s32 func_02029534(u8 *p, s32 n, s32 f)
{
    if (n <= 0) {
        return 1;
    }
    if (n >= 111) {
        return 0;
    }
    if (n == 1) {
        goto n1;
    }
    if (n == 2) {
        goto blk2;
    }
    if (n == 3) {
        goto blk3;
    }
    return 1;
n1:
    switch (*(s8 *)(p + 0x8b)) {
    case 0:
    case 4:
        return 1;
    case 1:
    case 3:
        return 1;
    case 2:
        return 0;
    case 5:
        return (*(s32 *)(data_02159444 + 0x50) >> 13) > 300;
    default:
        goto blk2;
    }
blk2:
    if (f != 0) {
        return 1;
    }
    return (s32)*(s16 *)(*(u8 **)(p + 0x9e8) + 0x2a) + (*(s32 *)(data_02159444 + 0x50) >> 13) > 1000;
blk3:
    if (f != 0) {
        return 1;
    }
    return (s32)*(s16 *)(*(u8 **)(p + 0x9e8) + 0x30) + (*(s32 *)(data_02159444 + 0x50) >> 13) > 1000;
}
