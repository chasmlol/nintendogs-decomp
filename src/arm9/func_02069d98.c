#include "ctx.h"

#define reg_GXS_DB_DISPCNT (*(vu32 *)0x04001000)
#define reg_G2S_DB_BG2CNT (*(vu16 *)0x0400100c)

void *func_02069d98(void)
{
    u32 bgMode = reg_GXS_DB_DISPCNT & 7;
    u32 cnt = reg_G2S_DB_BG2CNT;
    u32 offset = (cnt & 0x1f00) >> 8;

    switch (bgMode) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        return (void *)(0x06200000 + (offset << 11));
    case 5:
        if (cnt & 0x80)
            return (void *)(0x06200000 + (offset << 14));
        else
            return (void *)(0x06200000 + (offset << 11));
    case 6:
        return 0;
    default:
        return 0;
    }
}
