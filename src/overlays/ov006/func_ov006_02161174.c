#include "ctx.h"

extern void func_ov006_02161344(u32);
extern u8 func_02029504(u32);

u32 func_ov006_02161174(u32 param_1)
{
    u8 bVar1;
    if (*(s16 *)((u8 *)param_1 + 0xf0) == 9) {
        func_ov006_02161344(param_1);
        bVar1 = func_02029504(param_1);
        return (u32)bVar1;
    }
    return param_1;
}
