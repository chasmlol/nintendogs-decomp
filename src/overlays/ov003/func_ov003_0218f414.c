#include "ctx.h"

void func_ov003_0218f4a8(int a, u32 b, s32 c);

void func_ov003_0218f414(int param_1)
{
    s32 a;
    s64 t;
    a = *(s32 *)(param_1 + 0x260);
    t = (s64)a * *(s32 *)(param_1 + 0x258) + 0x800;
    *(u32 *)(param_1 + 0x260) = (u32)(t >> 12);
    a = *(s32 *)(param_1 + 0x268);
    t = (s64)a * *(s32 *)(param_1 + 0x258) + 0x800;
    *(u32 *)(param_1 + 0x268) = (u32)(t >> 12);
    func_ov003_0218f4a8(param_1, 0, -1);
}
