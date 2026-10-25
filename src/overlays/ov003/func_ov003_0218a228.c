#include "ctx.h"

extern void func_ov003_0218a3cc(void *p, s32 a, s32 b);
extern void func_0203e8cc(void *p, s32 a, s32 b);

void func_ov003_0218a228(void *param_1)
{
    u8 *p = (u8 *)param_1;
    func_ov003_0218a3cc(p, 7, 0x7f);
    if (*(u16 *)(p + 0x11e) > 30) {
        func_0203e8cc(p, 0, 0x18d);
        return;
    }
    if (*(s16 *)(p + 0xee) == 0x10e) {
        func_0203e8cc(p, 0, 0x18f);
        return;
    }
}
