#include "ctx.h"

extern u8 *func_020038b8(u8 *a, u32 n);
extern void func_0208fb74(u8 *a);
extern u8 *func_0208f1dc(u8 *a, u32 b, u32 c);
extern void func_02078164(u32 a, u32 b, u32 c);

u8 *func_0208fb00(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *r4;

    r4 = func_020038b8(param_1, param_2);
    if (r4 != 0) {
        func_0208fb74(r4);
        if (param_3 == 0) {
            *(u32 *)(r4 + 0x1c) = 0;
        } else {
            *(u8 **)(r4 + 0x1c) = func_0208f1dc(param_1, param_3, 0);
            func_02078164(*(u32 *)(*(u8 **)(r4 + 0x1c) + 8), 0, 0x1f0000);
            func_02078164(*(u32 *)(*(u8 **)(r4 + 0x1c) + 8), 0, 0x3f000000);
        }
    }
    return r4;
}
