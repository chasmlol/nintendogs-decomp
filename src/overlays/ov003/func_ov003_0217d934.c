#include "ctx.h"

extern void func_ov003_0217dd00(u8 *p, u32 a, u32 b);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);

void func_ov003_0217d934(u8 *param_1)
{
    s8 v;
    s16 x;
    func_ov003_0217dd00(param_1, 0, -1);
    v = *(s8 *)(param_1 + 0x95);
    if (v == 1) {
        goto LA;
    }
    if (v == 2) {
        goto LB;
    }
    func_0203e8cc(param_1, 0, 0);
    return;
LA:
    x = *(s16 *)(param_1 + 0x152);
    if (x == 0x15e) {
        return;
    }
    if (x == 0x15f) {
        return;
    }
    func_0203e8cc(param_1, 0, 0x15e);
    return;
LB:
    x = *(s16 *)(param_1 + 0x152);
    if (x == 0x160) {
        return;
    }
    if (x == 0x161) {
        return;
    }
    func_0203e8cc(param_1, 0, 0x160);
}
