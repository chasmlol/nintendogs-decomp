#include "ctx.h"

extern void func_02026bac(int p);
extern void func_02025548(int p);
extern void func_02034198(int p);
extern void func_02023654(int p, int a, int b);

void func_ov003_021652f8(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x8d;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02034198(param_1);
    func_02023654(param_1, 0x28, 1);
}
