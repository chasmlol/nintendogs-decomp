#include "ctx.h"

extern u32 func_02027540(int);
extern void func_0209c084(u32, int);
extern void func_ov004_02166ca4(int);

void func_ov004_02166be4(int param_1)
{
    u32 uVar1;
    if (*(u16 *)(param_1 + 0xfc) == 0x14) {
        uVar1 = func_02027540(param_1);
        func_0209c084(uVar1, 1);
    } else if (*(u16 *)(param_1 + 0xfc) == 0x23) {
        uVar1 = func_02027540(param_1);
        func_0209c084(uVar1, 0);
    }
    func_ov004_02166ca4(param_1);
}
