#include "ctx.h"

void func_020c7820(int a, int *b, u32 c, u32 d, u32 e);

void func_020ea69c(int param_1, int *param_2)
{
    if (*(int *)(param_1 + 0xb4) < 0xa4 && -0xa4 < *(int *)(param_1 + 0xb4)) {
        func_020c7820(param_1, param_2, 0xa40, 0xfb2, 0);
        return;
    }
    func_020c7820(param_1, param_2, 0xa40, 0xe6a, 0);
    return;
}
