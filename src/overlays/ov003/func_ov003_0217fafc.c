#include "ctx.h"

extern s32 func_ov003_0217fe80(u8 *p, s32 a, s32 b);
extern s32 func_0203579c(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s16 v);

void func_ov003_0217fafc(u8 *p)
{
    if (func_ov003_0217fe80(p, 5, 0) != 0) {
        return;
    }
    if (func_0203579c(p, 65) != 0) {
        func_0203e908(p, 0x211);
    }
}
