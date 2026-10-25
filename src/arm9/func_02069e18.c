#include "ctx.h"

#define reg_GX_DISPCNT (*(vu32 *)0x04000000)
#define reg_G2_BG2CNT (*(vu16 *)0x0400000c)

void *func_02069e18(void)
{
    u32 bgMode = reg_GX_DISPCNT & 7;
    u32 bg = reg_G2_BG2CNT;
    u32 offset = ((reg_GX_DISPCNT & 0x38000000) >> 27) << 16;
    u32 blockOffset = (bg & 0x1f00) >> 8;

    switch (bgMode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return (void *)(0x06000000 + offset + (blockOffset << 11));
    case 5:
        if (bg & 0x80)
            return (void *)(0x06000000 + (blockOffset << 14));
        else
            return (void *)(0x06000000 + offset + (blockOffset << 11));
    case 6:
        return (void *)0x06000000;
    default:
        return 0;
    }
}
