#include "ctx.h"

extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_02023654(int a, int b, int c);
extern void func_0202db24(int a, int b);

void func_ov003_0216a9f0(int param_1)
{
    u32 v = 0x1b4;
    u16 *p = (u16 *)(param_1 + 0x100);
    p[41] = v;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0xb, 5);
    func_0202db24(param_1, 3);
}
