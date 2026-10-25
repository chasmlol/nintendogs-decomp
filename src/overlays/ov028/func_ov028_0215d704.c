#include "ctx.h"
extern u8 *data_ov028_0215df90;
extern s16 func_020d6c84(void);
u32 func_ov028_0215d704(void)
{
    u8 *p = data_ov028_0215df90;
    if (*(s32 *)(p + 0x1c) == 2) {
        if (func_020d6c84() != 0) {
            return 1;
        }
    }
    return 0;
}
