#include "ctx.h"
extern s32 func_0209638c(void);
extern void func_02069fb8(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02122c20(u32 *p0)
{
    u32 v;
    if (func_0209638c() == 0) {
        return;
    }
    v = p0[4];
    if (v != 0 && v != 1 && v != 2) {
        return;
    }
    func_02069fb8(0x04001050, 0, 4, p0[0], 16 - p0[0]);
}
