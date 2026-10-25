#include "ctx.h"

void func_02026bac(void *p);
void func_02025548(void *p);
void func_02034198(void *p);
void func_02023654(void *p, u32 a, u32 b);

void func_ov003_02164e90(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x84;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_02023654(param_1, 41, 1);
}
