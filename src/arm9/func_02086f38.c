#include "ctx.h"

void func_02086f38(u8 *param_1)
{
    void (*fn)(u8 *, u32, u32, u32);
    u8 *obj;
    u32 b;
    u32 a;
    u32 arg;
    a = *(u32 *)(param_1 + 0x28);
    b = *(u32 *)(param_1 + 0x34);
    obj = *(u8 **)(param_1 + 8);
    arg = *(u32 *)(param_1 + 0x2c);
    *(vu32 *)(param_1 + 0x28) = a + b;
    fn = *(void (**)(u8 *, u32, u32, u32))(obj + 0x3c);
    fn(obj, arg, a, b);
}
