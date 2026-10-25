#include "ctx.h"

extern void func_0202508c(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_020364cc(u8 *p);
extern void func_0202fd7c(u8 *p);
extern void func_ov003_0219a368(u8 *p);

void func_ov003_021953f0(u8 *param_1)
{
    s32 iVar1;

    func_0202508c(param_1, 5, 0x14, *(u32 *)(param_1 + 0x240));
    if (*(u16 *)(param_1 + 0xfc) < 100) {
        return;
    }
    iVar1 = func_020364cc(param_1);
    if (iVar1 != 0) {
        func_ov003_0219a368(param_1);
        return;
    }
    func_0202fd7c(param_1);
}
