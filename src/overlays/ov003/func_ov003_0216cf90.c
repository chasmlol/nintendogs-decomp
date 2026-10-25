#include "ctx.h"

extern void func_02026bac(u32 p);
extern void func_02025548(u32 p);
extern void func_0202db24(u32 p, u32 q);

void func_ov003_0216cf90(u32 param_1)
{
    *(vu16 *)((u8 *)param_1 + 0x152) = 0x218;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
