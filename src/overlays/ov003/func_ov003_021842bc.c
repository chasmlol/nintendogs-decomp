#include "ctx.h"

void func_0203e8cc(u8 *p, u32 a, u32 b);
void func_ov003_02184b58(u8 *p, u32 a, u32 b, u32 c, u32 d);

void func_ov003_021842bc(u8 *param_1)
{
    u32 t;
    if (*(u16 *)(param_1 + 0xfc) == 0x50) {
        func_0203e8cc(param_1, 1, 0);
    }
    t = *(u16 *)(param_1 + 0xfc) > 100;
    func_ov003_02184b58(param_1, 8, 127, 0, t);
}
