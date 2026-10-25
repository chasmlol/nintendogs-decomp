#include "ctx.h"

extern u32 func_02028124(u8 *p);
extern void func_ov003_0218381c(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);

void func_ov003_02181494(u8 *param_1)
{
    u32 uVar1;
    u32 uVar2;
    s64 v;

    uVar1 = func_02028124(param_1);
    uVar2 = func_02028124(param_1);
    v = (s64)(s32)uVar2 * 115 + 0x800;
    v = (s64)(s32)uVar1 * 122 + 0x800;
    func_ov003_0218381c(param_1, 3, 0xf2, 0x17, 0x27,
                        -(s32)(u32)((s64)(s32)uVar2 * 115 + 0x800 >> 12),
                        0x2d, 0x45,
                        -(s32)(u32)((s64)(s32)uVar1 * 122 + 0x800 >> 12));
}
