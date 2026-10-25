#include "ctx.h"
extern void func_0207de78(u32 *p, u32 a, s32 b);
extern void func_0207ddfc(u32 *p, u32 a, s32 b);
void func_0207dd14(u8 *param_1, u32 param_2, s32 param_3)
{
    u32 uVar1;
    u32 *p;
    p = (u32 *)(param_1 + 0x24);
    if (param_2 == 0) {
        param_2 = 1;
    }
    uVar1 = (param_2 + 3) & 0xfffffffc;
    if (param_3 >= 0) {
        func_0207de78(p, uVar1, param_3);
        return;
    }
    func_0207ddfc(p, uVar1, -param_3);
}
