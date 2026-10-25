#include "ctx.h"

extern u8 *data_0215be48;
extern BOOL func_02003a44(void);

void func_020fec0c(s32 *param_1)
{
    if (param_1[0] < 16) {
        param_1[0] = param_1[0] + 1;
        param_1[0x75] = param_1[0x75] - 0x100;
        return;
    }
    {
        BOOL bVar1 = func_02003a44();
        if (bVar1) {
            *(u32 *)(data_0215be48 + 0x4868) = 1;
        }
    }
}
