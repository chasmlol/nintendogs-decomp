#include "ctx.h"

extern void func_0207024c(u32 *p);
extern void func_02073628(u32 *p, u32 a, s32 b);
extern void func_02070080(s32 p, u32 a);

void func_02070434(u32 *param_1, s32 param_2)
{
    if (param_1 == NULL) {
        return;
    }
    if (*(u8 *)(param_1 + 0xb) != 0) {
        if (param_2 == 0) {
            func_0207024c(param_1);
            return;
        }
        func_02073628(param_1 + 7, 0, param_2);
        func_02070080((s32)param_1, 0);
        *(u8 *)(param_1 + 0xb) = 2;
        return;
    }
    return;
}
