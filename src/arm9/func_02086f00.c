#include "ctx.h"
void func_02086f00(u8 *param_1)
{
    s32 a;
    s32 b;
    u32 arg;
    u8 *obj;
    s32 sum;
    void (*fn)(u8 *, u32, s32, s32);
    a = *(s32 *)(param_1 + 0x28);
    b = *(s32 *)(param_1 + 0x34);
    obj = *(u8 **)(param_1 + 8);
    arg = *(u32 *)(param_1 + 0x2c);
    sum = a + b;
    *(s32 *)(param_1 + 0x28) = sum;
    fn = *(void (**)(u8 *, u32, s32, s32))(obj + 0x40);
    fn(obj, arg, a, b);
}
