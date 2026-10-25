#include "ctx.h"

extern u32 data_0215be48;
extern BOOL func_02003a44(void);

void func_02113f1c(s32 *param_1)
{
    BOOL bVar1;
    *param_1 = *param_1 + 1;
    bVar1 = func_02003a44();
    if (bVar1) {
        *(u32 *)((u8 *)data_0215be48 + 0x4868) = 1;
    }
}
