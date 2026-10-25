#include "ctx.h"

extern u8 data_02136aba[];
extern u8 data_02136aa4[];

u32 func_020446a4(u32 *ps, u8 *base, s32 idx)
{
    u32 st;
    u32 b1;
    u32 b2;
    u32 r;
    u32 off;
    if (idx >= 0 && idx < 4) {
        off = (u32)idx * 44;
        b1 = *(u8 *)(base + ((u32)data_02136aba + off));
        st = *ps * 0x10dcd + 1;
        *ps = st;
        b2 = *(u8 *)(base + ((u32)data_02136aa4 + off));
        r = (u16)((b1 * (u16)st) >> 16);
        return (b2 + r) & 0xff;
    }
    if (idx == 4) {
        st = *ps * 0x10dcd + 1;
        *ps = st;
        switch ((u16)(((u32)(u16)st * 10) >> 16)) {
        case 0:
        case 1:
        case 2:
            return 0;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            return 1;
        case 8:
        case 9:
        default:
            return 2;
        }
    }
    if (idx >= 5) {
        r = 0;
    } else {
        u8 z = 0;
        r = z;
    }
    return r;
}
