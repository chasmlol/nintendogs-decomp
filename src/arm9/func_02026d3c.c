#include "ctx.h"

extern u8 *data_0215942c;
extern u16 data_ov003_0219a768[];

BOOL func_02026d3c(u8 *p)
{
    u32 v = *(u16 *)data_0215942c;
    if (v == 1) {
        return FALSE;
    }
    if (v == 4) {
        return FALSE;
    }
    if (v == 2) {
        return FALSE;
    }
    if (v == 0x8004) {
        return FALSE;
    }
    if (v == 0x11) {
        return FALSE;
    }
    return *(s32 *)(p + 0x488) > (s32)data_ov003_0219a768[*(s8 *)(p + 0x8d)];
}
