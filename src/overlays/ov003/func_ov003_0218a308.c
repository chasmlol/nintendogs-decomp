#include "ctx.h"

extern void func_ov003_0218a3cc(u8 *p, u32 a, u32 b);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);

void func_ov003_0218a308(u8 *param_1)
{
    func_ov003_0218a3cc(param_1, 5, 0x57);
    if (*(u16 *)(param_1 + 0x11e) > 0x28) {
        func_0203e8cc(param_1, 0, 0x72);
        return;
    }
    if (*(s16 *)(param_1 + 0xee) == 0x10c) {
        func_0203e8cc(param_1, 0, 0x74);
        return;
    }
    return;
}
