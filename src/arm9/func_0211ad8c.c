#include "ctx.h"

extern u8 *data_0215bf9c;
void func_02112978(u32 a, u32 b, s16 c, u32 d);

void func_0211ad8c(s32 *param_1)
{
    s32 iVar1;
    param_1[1] = param_1[1] + 1;
    if (param_1[1] > 10) {
        *(u32 *)(data_0215bf9c + 0x198) = 1;
        return;
    }
    iVar1 = (10 - param_1[1]) * -256;
    func_02112978(0, 1, (s16)(iVar1 / 10), 0);
}
