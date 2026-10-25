#include "ctx.h"

extern void func_0206bf30(s32 p, s32 v);
extern void func_0206bec0(s32 p, u32 a, s32 b, u32 c);
extern void func_01ffdc44(s32 p, u32 a, u32 b, u32 c);

void func_0206cbd8(s32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    func_0206bf30(param_1, -1);
    func_0206bec0(param_1, param_2, param_4, 0x1000000);
    if (param_4 != 0) {
        do {
        } while ((*(vu32 *)(0x040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
        func_01ffdc44(param_1, param_2, param_3, 0xaf000001);
    }
}
