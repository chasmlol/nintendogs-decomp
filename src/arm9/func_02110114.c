#include "ctx.h"

extern void func_02108e24(s32 a);

void func_02110114(s32 param_1)
{
    func_02108e24(1);
    *(s32 *)(param_1 + 8) = 0;
    *(s32 *)(param_1 + 0x28) = 0;
}
