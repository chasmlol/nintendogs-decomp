#include "ctx.h"

extern void func_0206c9b8(u8 *a, u8 *b, u32 n);

u32 func_02080f10(u8 *param_1, s32 param_2, u8 *param_3)
{
    s32 local_18[2];
    u32 r;
    func_0206c9b8(param_1 + 8, (u8 *)local_18, 4);
    if (local_18[0] != param_2) {
        return 0;
    }
    if (param_3 != 0) {
        func_0206c9b8(param_1 + 12, param_3, 28);
    }
    return 1;
}
