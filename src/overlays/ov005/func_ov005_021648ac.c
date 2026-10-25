#include "ctx.h"

extern u32 data_ov005_02167f04;

BOOL func_ov005_021648ac(void)
{
    u8 *p = *(u8 **)&data_ov005_02167f04;
    if (*(s16 *)(p + 0x8c) == 0) {
        if (*(u32 *)(p + 0x88) != 0) {
            return TRUE;
        }
    }
    return FALSE;
}
