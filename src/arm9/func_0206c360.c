#include "ctx.h"

extern void func_0206bec0(int a, u32 b, u32 c, int d);
extern void func_01ffdbd0(int a, u32 b, u32 c, u32 d);

void func_0206c360(int param_1, u32 param_2, u32 param_3, u32 param_4)
{
    vu32 *puVar1;

    func_0206bec0(param_1, param_2, param_4, 0);
    if (param_4 != 0) {
        puVar1 = (vu32 *)(0x040000b0 + (param_1 * 3 + 2) * 4);
        do {
        } while ((*puVar1 & 0x80000000) != 0);
        func_01ffdbd0(param_1, param_2, param_3, (param_4 >> 2) | 0x84000000);
        do {
        } while ((*puVar1 & 0x80000000) != 0);
    }
}
