#include "ctx.h"

extern u32 data_02156024;

#define RAND() (data_02156024 = data_02156024 * 0x5eedf715 + 0x1b0cb173)

void func_0208592c(s16 *param_1, u8 *param_2, s32 *param_3)
{
    s32 s;
    u32 r;

    if (*(u16 *)(param_2 + 0x2e) % (u16)param_1[3] != 0) {
        return;
    }
    r = RAND();
    s = param_1[0];
    param_3[0] += (s32)(s * (r >> 23) - s * 0x100) >> 8;
    r = RAND();
    s = param_1[1];
    param_3[1] += (s32)(s * (r >> 23) - s * 0x100) >> 8;
    r = RAND();
    s = param_1[2];
    param_3[2] += (s32)(s * (r >> 23) - s * 0x100) >> 8;
}
