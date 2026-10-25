#include "ctx.h"

extern void func_0206c7bc(u32 a, u8 *b, u32 c);
extern void func_02095670(u8 *p);

void func_020b4528(u8 *param_1)
{
    vu16 z0;
    vu16 z1;
    vu16 z2;
    vu16 z3;

    z0 = 0;
    func_0206c7bc(z0, param_1, 0x74f8);
    *(u16 *)param_1 = 0;
    *(u16 *)(param_1 + 2) = 0;
    func_02095670(param_1 + 4);
    z1 = 0;
    func_0206c7bc(z1, param_1 + 0x860, 0x18b0);
    z2 = 0;
    func_0206c7bc(z2, param_1 + 0x2110, 0x500);
    *(s16 *)(param_1 + 0x2610) = -1;
    *(s16 *)(param_1 + 0x2612) = -1;
    z3 = 0;
    func_0206c7bc(z3, param_1 + 0x2614, 0xa4);
    *(s16 *)(param_1 + 0x74f0) = -1;
}
