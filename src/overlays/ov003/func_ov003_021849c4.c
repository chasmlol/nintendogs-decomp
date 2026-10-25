#include "ctx.h"

void func_0203e8cc(u8 *a, u32 b, u32 c);
void func_ov003_02184b58(u8 *a, u32 b, u32 c, u32 d, u32 e);

void func_ov003_021849c4(u8 *param_1)
{
    if (*(u16 *)(param_1 + 252) == 80) {
        func_0203e8cc(param_1, 1, 0);
    }
    func_ov003_02184b58(param_1, 1, 31, 0, (u32)(*(u16 *)(param_1 + 252) > 100));
}
