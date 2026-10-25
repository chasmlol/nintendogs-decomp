#include "ctx.h"

extern u32 func_020bd824(u8 *p, u32 a, s32 b, s32 c);
extern u32 func_01ffdb08(s32 x);
extern void func_0202707c(u32 a, u32 b);

u32 func_020c5ef8(u8 *param_1)
{
    u32 iv;
    if (func_020bd824(param_1, 5, *(s16 *)(param_1 + 152), -1)) {
        if (*(s16 *)(param_1 + 144) == 8) {
            iv = func_01ffdb08(*(s16 *)(param_1 + 152));
            func_0202707c(iv, 45);
        }
        return 1;
    }
    return 0;
}
