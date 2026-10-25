#include "ctx.h"

u32 func_02080858(void);

void func_020950cc(int param_1, int param_2)
{
    u32 uVar1;

    uVar1 = func_02080858();
    if (param_2 == -1) {
        param_2 = (s16)((u16)((u32)((u16)(uVar1 * 0x10dcd + 1)) * 20 >> 16) + 117);
    }
    *(s16 *)(param_1 + 0x70) = (s16)param_2;
}
