#include "ctx.h"

void func_020264b0(u8 *a);
u8 func_02025bb0(u8 *a);
void func_02023654(u8 *a, u32 b, u32 c);

void func_0201d880(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 139;
    func_020264b0(param_1);
    func_02025bb0(param_1);
    func_02023654(param_1, 41, 1);
}
