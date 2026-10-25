#include "ctx.h"
extern u32 data_02156180;
extern u32 func_02080b08(u32 p);
extern void func_02080b1c(u32 x);
BOOL func_02089e78(u32 param_1)
{
    u32 r;
    u32 uVar1;
    BOOL bVar2;
    r = func_02080b08(param_1);
    uVar1 = data_02156180;
    if (param_1 > uVar1) {
        if ((param_1 - uVar1) < 0x80000000) {
            bVar2 = 0;
        } else {
            bVar2 = 1;
        }
    } else {
        bVar2 = (uVar1 - param_1) < 0x80000000;
    }
    func_02080b1c(r);
    return bVar2;
}
