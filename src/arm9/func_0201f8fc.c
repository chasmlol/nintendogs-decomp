#include "ctx.h"

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);

void func_0201f8fc(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x19d;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 43, 2);
}
