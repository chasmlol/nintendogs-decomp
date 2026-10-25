#include "ctx.h"

extern void func_020be1d8(s32 v);
extern void func_020d8370(u8 *p);

void func_020d8338(u8 *param_1)
{
    if (*(s32 *)(param_1 + 0x6c) == 1) {
        func_020be1d8(1);
        return;
    }
    func_020d8370(param_1);
}
