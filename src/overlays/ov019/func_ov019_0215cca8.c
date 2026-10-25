#include "ctx.h"

extern s32 func_ov019_021611a0(void);

u32 func_ov019_0215cca8(s32 p)
{
    s32 base;
    if (p < 0) {
        goto ret0;
    }
    if (p < 1) {
        goto call;
    }
ret0:
    return 0;
call:
    base = func_ov019_021611a0();
    return *(u32 *)(base + p * 4);
}
