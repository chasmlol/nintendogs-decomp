#include "ctx.h"

extern s32 func_02028124(u8 *p);
extern void func_02024f18(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02175458(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_02174f5c(u8 *param_1)
{
    s32 x;
    s64 v;
    s32 fx;
    s32 r;

    x = func_02028124(param_1);
    v = (s64)x * 491 + 0x800;
    fx = (s32)(u32)(v >> 12);
    func_02024f18(param_1, 1, -fx);
    r = func_ov003_02175458(param_1, 0x3b0, 0, 0x300, 1, 0, 1, 0, 0);
    if (r != 0) {
        return;
    }
    r = func_0203567c(param_1);
    if (r == 0) {
        return;
    }
    func_0203e908(param_1, 0x3b0);
}
