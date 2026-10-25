#include "ctx.h"

extern u32 func_ov003_02174844(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_0203e908(u8 *p, u32 a);
extern void func_ov003_0218e360(u8 *p, u32 a);

void func_ov003_021710a0(u8 *param_1)
{
    u32 v;

    if (func_ov003_02174844(param_1, 1, 73, 74, 75, 76, 100) == 0) {
        return;
    }
    v = *(u16 *)(param_1 + 0xf4);
    if (v >= 79 && v < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 2);
}
