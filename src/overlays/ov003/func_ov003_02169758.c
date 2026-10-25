#include "ctx.h"

extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_0202db24(int a, int b);
extern void func_0203e2c0(int a, int b);

void func_ov003_02169758(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1b;
    *(u16 *)(param_1 + 0x154) = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 2);
    func_0203e2c0(param_1, 1);
}
