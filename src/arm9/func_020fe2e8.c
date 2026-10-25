#include "ctx.h"
extern u8 *data_0215be48;
u32 func_020fe2e8(void)
{
    u32 r;
    u8 *p;
    s32 v;
    r = 0;
    p = data_0215be48;
    if (*(s32 *)(p + 0x5000 + 0x38) != 0) {
        goto end;
    }
    v = *(s32 *)(p + 0xa8);
    if (v != 0 && v != 4) {
        goto end;
    }
    r = 1;
end:
    return r;
}
