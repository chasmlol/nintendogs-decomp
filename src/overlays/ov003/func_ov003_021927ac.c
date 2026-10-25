#include "ctx.h"

extern void func_0203b778(u32);
extern void func_ov003_02192830(u32, u32, u32);

void func_ov003_021927ac(u8 *param_1)
{
    if (*(u16 *)(param_1 + 0xfc) > 0x14) {
        *(u32 *)(param_1 + 0x244) = 0;
        func_0203b778((u32)param_1);
    }
    func_ov003_02192830((u32)param_1, 1, 0x300);
}
