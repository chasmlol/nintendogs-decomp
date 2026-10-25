#include "ctx.h"

extern void func_020264f4(int p);
extern void func_020255a4(int p);
extern void func_02023654(int p, int a, int b);
extern void func_0202db24(int p, int a);

void func_ov003_021692e0(int param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x128;
    func_020264f4(param_1);
    func_020255a4(param_1);
    if (*(u16 *)(param_1 + 0xf2) != 0x1f) {
        func_02023654(param_1, 0x1f, 1);
    }
    func_0202db24(param_1, 8);
}
