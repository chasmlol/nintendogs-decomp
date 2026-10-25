#include "ctx.h"

extern void func_0208f5c4(u8 *p, s32 q);
extern void func_0207d0ac(u8 *p, s32 q);

void func_0208f788(u8 *param_1)
{
    func_0208f5c4(param_1, 0);
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    func_0207d0ac(param_1 + 36, 28);
    func_0207d0ac(param_1 + 48, 28);
    func_0207d0ac(param_1 + 60, 28);
}
