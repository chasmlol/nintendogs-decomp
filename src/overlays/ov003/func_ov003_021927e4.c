#include "ctx.h"

extern void func_0203b778(u8 *p);
extern void func_ov003_02192830(u8 *p, u32 a, u32 b);

void func_ov003_021927e4(u8 *param_1)
{
    if (*(u16 *)(param_1 + 252) > 20) {
        *(u32 *)(param_1 + 0x244) = 0;
        func_0203b778(param_1);
    }
    func_ov003_02192830(param_1, 1, 0x300);
}
