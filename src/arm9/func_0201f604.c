#include "ctx.h"

extern void func_02026c24(u8 *);
extern u8 func_02025548(u8 *);
extern void func_02023654(u8 *, u32, u32);

void func_0201f604(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 100;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x31, 1);
}
