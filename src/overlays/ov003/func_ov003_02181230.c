#include "ctx.h"

extern s32 func_02028124(int p);
extern void func_ov003_0218381c(u32 p, int a, int b, int c, int d, int e, int f, int g, int h);

void func_ov003_02181230(u32 param_1)
{
    s32 uVar1;
    s32 uVar2;
    s64 v1;
    s64 v2;

    uVar1 = func_02028124(param_1);
    uVar2 = func_02028124(param_1);
    v1 = (s64)uVar2 * (s64)0x73 + 0x800;
    v2 = (s64)uVar1 * (s64)0x7a + 0x800;
    func_ov003_0218381c(param_1, 1, 0xf0, 0x17, 0x27, -(s32)(u32)(v1 >> 12), 0x2d, 0x45,
                        -(s32)(u32)(v2 >> 12));
}
