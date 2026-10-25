#include "ctx.h"

extern void func_02023654(u32 a, u32 b, u32 c);
extern void func_ov003_02187108(u32 a, u32 b, u32 c);

void func_ov003_02186af4(u32 param_1)
{
    if (*(u16 *)(param_1 + 0xfc) > 0x1e) {
        func_02023654(param_1, 0xc, 1);
    }
    func_ov003_02187108(param_1, 4, 0);
}
