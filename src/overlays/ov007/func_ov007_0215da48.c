#include "ctx.h"

extern u32 data_ov007_02160d80;
extern s16 func_020d6c84(void);

u32 func_ov007_0215da48(void)
{
    u8 *p = (u8 *)data_ov007_02160d80;
    if (*(s32 *)(p + 0x28) == 2) {
        s16 s = func_020d6c84();
        if (s != 0) {
            return 1;
        }
    } else if (*(s32 *)(p + 0x28) == 3) {
        return 1;
    }
    return 0;
}
