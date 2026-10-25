#include "ctx.h"
extern void func_ov003_0218f4a8(void *self, int a, int b);

void func_ov003_0218f3b0(int param_1)
{
    s64 v;
    v = (s64)*(s32 *)(param_1 + 0x260) * (s64)*(s32 *)(param_1 + 0x258) + 0x800;
    *(u32 *)(param_1 + 0x260) = (u32)(v >> 12);
    v = (s64)*(s32 *)(param_1 + 0x268) * (s64)*(s32 *)(param_1 + 0x258) + 0x800;
    *(u32 *)(param_1 + 0x268) = (u32)(v >> 12);
    func_ov003_0218f4a8((void *)param_1, 0, -1);
}
