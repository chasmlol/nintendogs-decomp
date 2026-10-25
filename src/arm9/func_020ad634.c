#include "ctx.h"
extern u16 *data_0215be48_hw;
extern u8 *data_0215be48;
extern s32 func_021150fc(void);
s32 func_020ad634(void)
{
    s32 r = -1;
    if (((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 1) {
        if (func_021150fc() == 1) {
            r = 1;
        }
    } else if (*(s32 *)(data_0215be48 + 0x4000 + 0x8b8) == 5) {
        r = 0;
    }
    return r;
}
