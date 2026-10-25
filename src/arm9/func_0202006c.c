#include "ctx.h"

extern u32 func_02035164(int p);
extern void func_02026c24(int p);
extern void func_02025548(int p);
extern void func_02023654(int p, int a, int b);

void func_0202006c(int param_1)
{
    u16 v;
    u32 r;

    v = 0x119;
    ((u16 *)(param_1 + 256))[41] = v;
    r = func_02035164(param_1);
    ((u16 *)(param_1 + 256))[44] = (u16)r;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_02023654(param_1, 0x32, 1);
}
