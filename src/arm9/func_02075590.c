#include "ctx.h"

extern void func_020776d4(s32 a, s32 *b, s32 c);

void func_02075590(s32 *param_1, s32 param_2)
{
    s32 arr[3];
    if (((param_1[2] & 0x100) == 0) && ((param_1[2] & 0x200) == 0)) {
        if (param_2 == 0) {
            arr[2] = param_1[0x38];
            arr[1] = arr[2];
            arr[0] = arr[2];
        } else {
            arr[2] = param_1[0x39];
            arr[1] = arr[2];
            arr[0] = arr[2];
        }
        func_020776d4(27, arr, 3);
    }
    param_1[0] = param_1[0] + 1;
}
