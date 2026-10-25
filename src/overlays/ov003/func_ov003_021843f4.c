#include "ctx.h"

extern void func_0203e8cc(u32, u32, u32);
extern void func_ov003_02184b58(u32, u32, u32, u32, u32);

void func_ov003_021843f4(u32 param_1)
{
    if (*(u16 *)((u8 *)param_1 + 252) == 0x50) {
        func_0203e8cc(param_1, 1, 0);
    }
    func_ov003_02184b58(param_1, 7, 0x7f, 0, (u32)(*(u16 *)((u8 *)param_1 + 252) > 100));
}
