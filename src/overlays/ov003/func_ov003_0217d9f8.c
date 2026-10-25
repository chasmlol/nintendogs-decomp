#include "ctx.h"

extern void func_ov003_0217dd00(u8 *p, u32 a, s16 b);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);

void func_ov003_0217d9f8(u8 *param_1)
{
    s16 v;

    func_ov003_0217dd00(param_1, 0, -1);
    switch (*(s8 *)(param_1 + 0x95)) {
    default:
        func_0203e8cc(param_1, 0, 0);
        return;
    case 1:
        v = *(s16 *)(param_1 + 0x152);
        if (v == 0x15e) {
            return;
        }
        if (v == 0x15f) {
            return;
        }
        func_0203e8cc(param_1, 0, 0x15e);
        return;
    case 2:
        v = *(s16 *)(param_1 + 0x152);
        if (v == 0x160) {
            return;
        }
        if (v == 0x161) {
            return;
        }
        func_0203e8cc(param_1, 0, 0x160);
        return;
    }
}
