#include "ctx.h"

extern void func_02023654(u32 a, u32 b, u32 c);
extern void func_ov003_02186b90(u32 a, u32 b, u32 c);

void func_ov003_021868e0(u32 param_1)
{
    if (*(u16 *)(param_1 + 0xfc) > 0x1e) {
        func_02023654(param_1, 0x10, 2);
    }
    func_ov003_02186b90(param_1, 8, 1);
}
