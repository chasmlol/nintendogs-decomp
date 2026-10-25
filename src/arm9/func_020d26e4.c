#include "ctx.h"

extern void func_02044ca0(u32);
extern void func_020cf9bc(u8 *);

void func_020d26e4(u8 *param_1)
{
    u8 *q = param_1 + 96;
    func_02044ca0(0);
    func_020cf9bc(param_1);
    *(s16 *)(param_1 + 96) = 2;
    *(s16 *)(q + 2) = 2;
    *(s16 *)(q + 4) = 2;
}
