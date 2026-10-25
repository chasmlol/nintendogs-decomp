#include "ctx.h"

extern void func_ov003_0218a3cc(u8 *p, s32 a, s32 b);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);

void func_ov003_0218a29c(u8 *param_1)
{
    func_ov003_0218a3cc(param_1, 6, 0x2f);
    if (*(u16 *)(param_1 + 0x11e) > 0x28) {
        func_0203e8cc(param_1, 0, 0x73);
        return;
    }
    if (*(s16 *)(param_1 + 0xee) == 0x10d) {
        func_0203e8cc(param_1, 0, 0x75);
        return;
    }
}
