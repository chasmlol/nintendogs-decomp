#include "ctx.h"

void func_02022b7c(u32 p);
u32 func_0202c87c(u32 p, u32 b);
void func_0203e908(u32 p, u32 b);

void func_ov003_0218584c(u32 param_1)
{
    u32 iVar1;

    func_02022b7c(param_1);
    iVar1 = func_0202c87c(param_1, 2);
    if (iVar1 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 200) {
        func_0203e908(param_1, 0x233);
        return;
    }
}
