#include "ctx.h"

extern u8 data_0214f004[];

s32 func_02098a94(void)
{
    s32 r = -1;
    u8 b1;
    u8 b0;
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        goto end;
    }
    b1 = data_0214f004[1];
    b0 = data_0214f004[0];
    if (b1 < 154) {
        goto end;
    }
    if (b1 > 183) {
        goto end;
    }
    if (b0 >= 32) {
        if (b0 <= 111) {
            return 0;
        }
    }
    if (b0 < 144) {
        goto end;
    }
    if (b0 <= 223) {
        r = 1;
    }
end:
    return r;
}
