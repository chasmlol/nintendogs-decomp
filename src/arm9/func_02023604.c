#include "ctx.h"

extern u32 data_0215942c;
extern void func_02023684(u8 *, u32, s32);

void func_02023604(u8 *param_1, u32 param_2, s32 param_3)
{
    u8 *p = *(u8 **)&data_0215942c;
    if (*(u16 *)p != 0x11) {
        return;
    }
    if (*(u8 *)(*(u8 **)(param_1 + 0x9e8) + 0x72) == 2) {
        func_02023684(param_1, param_2, param_3);
        return;
    }
}
