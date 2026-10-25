#include "ctx.h"

extern s32 func_0203567c(u32 p);
extern void func_02027f40(u32 p0, s32 p1, s32 p2);
extern void func_ov003_0218e690(u32 p);

void func_02013a7c(u32 param_1)
{
    if (func_0203567c(param_1) != 0) {
        *(u16 *)((u8 *)param_1 + 256 + 4) = 0;
        func_02027f40(param_1, 2, 0);
        func_ov003_0218e690(param_1);
    }
}
