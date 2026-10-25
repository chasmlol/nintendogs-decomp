#include "ctx.h"

extern void func_021128a8(s32 a, u32 b, u32 c);
extern void func_02112978(s32 a, u32 b, u32 c, u32 d);

void func_02117810(s32 *param_1)
{
    if (param_1[7] != 1) {
        if (param_1[7] == 4) {
            param_1[7] = 0;
        }
        return;
    }
    if (*(u16 *)(param_1 + 1) != 0xffff) {
        if (param_1[2] != 0) {
            func_021128a8(param_1[0], *(u16 *)(param_1 + 1), *(u16 *)(param_1 + 3));
        }
        if (param_1[4] != 0) {
            func_02112978(param_1[0], *(u16 *)(param_1 + 1), 0, 0);
        }
    }
    if (param_1[0xb] != 0) {
        ((void (*)(s32 *))param_1[0xb])(param_1);
    }
    param_1[7] = 0;
}
