#include "ctx.h"

extern int func_02027540(int);
extern void func_0209c084(int, int);
extern void func_ov004_02166ca4(int);

void func_ov004_02166c74(int param_1)
{
    int uVar1;
    if (*(u16 *)(param_1 + 0xfc) == 0x13) {
        uVar1 = func_02027540(param_1);
        func_0209c084(uVar1, 0);
    }
    func_ov004_02166ca4(param_1);
}
