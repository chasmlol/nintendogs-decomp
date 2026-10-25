#include "ctx.h"

extern u32 data_0215942c;
extern u32 data_0214f464;

BOOL func_02026df0(u8 *param_1)
{
    u16 s = *(u16 *)(*(u8 **)&data_0215942c);
    if (s == 1) {
        return FALSE;
    }
    if (s == 4) {
        return FALSE;
    }
    if (s == 2) {
        return FALSE;
    }
    if (*(u8 *)(param_1 + 0xaa) == 0) {
        return TRUE;
    }
    if (*(s16 *)(param_1 + 0x13e) != 10) {
        return TRUE;
    }
    return *(s8 *)(*(u8 **)&data_0214f464 + 4) == 2;
}
