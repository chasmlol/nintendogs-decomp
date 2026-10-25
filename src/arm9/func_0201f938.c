#include "ctx.h"

extern void func_02026c24(u32 p);
extern void func_02025548(u32 p);
extern void func_02023654(u32 p, u32 q, u32 r);

void func_0201f938(u32 param_1)
{
    *(vu16 *)((u8 *)param_1 + 0x152) = 0x19c;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x2b, 1);
}
