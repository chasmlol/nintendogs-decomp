#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02117d8c(u8 *p);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_02118a0c(u32 *param_1)
{
    *param_1 = 0;
    if (*(s32 *)(data_0215be48 + 0xa8) != 7) {
        return;
    }
    func_02117d8c((u8 *)param_1 + 196);
    if (*(s32 *)(data_0215be48 + 0xa8) == 7) {
        func_02112798(0, 0, 0);
        return;
    }
}
