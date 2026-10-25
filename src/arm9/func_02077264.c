#include "ctx.h"

void func_02077264(u32 *param_1, u8 *param_2)
{
    s32 one;
    s32 zero;
    s32 i;
    if (param_2 == 0) {
        return;
    }
    one = 1;
    zero = 0;
    do {
        i = zero;
        if ((s32)param_2[0x19] > 0) {
            do {
                if (((u16 *)(param_2 + 26))[i] & 0x100) {
                    param_1[i >> 5] = param_1[i >> 5] | (one << (i & 31));
                }
                i = i + 1;
            } while (i < param_2[0x19]);
        }
        param_2 = *(u8 **)(param_2 + 0x10);
    } while (param_2 != 0);
}
