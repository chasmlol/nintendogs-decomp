#include "ctx.h"

void func_0207431c(u32 *param_1, u8 *param_2)
{
    s32 i;
    if (param_2 == NULL) {
        return;
    }
    do {
        i = 0;
        if ((s32)param_2[0x19] > 0) {
            do {
                if ((((u16 *)(param_2 + 26))[i] & 0x100) != 0) {
                    param_1[i >> 5] |= 1u << (i & 31);
                }
                i = i + 1;
            } while (i < param_2[0x19]);
        }
        param_2 = *(u8 **)(param_2 + 0x10);
    } while (param_2 != NULL);
}
