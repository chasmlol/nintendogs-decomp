#include "ctx.h"

extern u8 *data_02159444;

s32 func_020ad5f8(void)
{
    s32 r = -1;
    s32 t;
    u16 *hw = (u16 *)0x04000304;
    t = (s32)(*hw & 0x8000);
    if ((t >> 15) == 1) {
        return -1;
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 2) != 0) {
        r = 0;
    }
    return r;
}
