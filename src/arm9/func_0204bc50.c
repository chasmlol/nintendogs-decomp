#include "ctx.h"
extern u32 func_02036578(u8 *p);
extern void func_0204e020(u8 *p, u32 a, u32 b, u32 c, u32 d);
extern void func_0204be88(u8 *p, u32 a, u32 b);
void func_0204bc50(u8 *param_1)
{
    u32 iVar1;
    iVar1 = func_02036578(param_1);
    func_0204e020(param_1, iVar1, 1, 1, 1);
    func_0204be88(param_1, iVar1, 1);
}
