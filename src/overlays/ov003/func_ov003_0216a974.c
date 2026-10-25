#include "ctx.h"

extern void func_020264f4(u32 p);
extern void func_020255a4(u32 p);
extern void func_0202db24(u32 p, u32 q);

void func_ov003_0216a974(u32 param_1)
{
    *(vu16 *)((u8 *)param_1 + 0x152) = 0x70;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 5);
}
