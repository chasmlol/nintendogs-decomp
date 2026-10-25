#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_02003a44(void);

void func_020fe324(s32 *param_1)
{
    *param_1 = *param_1 + 1;
    if (func_02003a44()) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x4000 + 0x868) = 1;
    }
}
