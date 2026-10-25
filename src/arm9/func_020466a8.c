#include "ctx.h"

extern s32 func_020469d0(u8 *p, s32 a, s32 b);
extern s32 func_0203579c(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s16 v);

void func_020466a8(u8 *p)
{
    if (func_020469d0(p, 1, 0) != 0) {
        return;
    }
    if (func_0203579c(p, 16) != 0) {
        func_0203e908(p, 0x2eb);
    }
}
