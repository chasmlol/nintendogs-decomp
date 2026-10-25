#include "ctx.h"

extern u8 *data_ov007_02160d9c;
extern s32 func_020d6cb4(void);
extern s32 func_0205ef3c(u8 *a, u8 *b, s32 c);

BOOL func_ov007_0215e8dc(void)
{
    u8 *p = data_ov007_02160d9c + 0x12e;
    s32 r = func_020d6cb4();
    s32 q = func_0205ef3c((u8 *)(r + 4), p, 6);
    return q != 0;
}
