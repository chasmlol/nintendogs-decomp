#include "ctx.h"
extern void func_02112798(u32 a, u32 b, u32 c);
void func_02117700(u32 *param_1, s32 param_2)
{
    if (param_2 != 0) {
        if (param_1[7] == 5) {
            param_1[7] = 0;
            if (param_1[14] != 0) {
                ((void (*)(u32 *))param_1[14])(param_1);
            }
        }
        if (*(u16 *)(param_1 + 1) != 0xffff) {
            func_02112798(param_1[0], (u32)*(u16 *)(param_1 + 1), 1);
            return;
        }
        return;
    }
    if (param_1[7] != 5) {
        param_1[7] = 5;
        if (param_1[13] != 0) {
            ((void (*)(u32 *))param_1[13])(param_1);
        }
    }
    if (*(u16 *)(param_1 + 1) != 0xffff) {
        func_02112798(param_1[0], (u32)*(u16 *)(param_1 + 1), 0);
        return;
    }
    return;
}
