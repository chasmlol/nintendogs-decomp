#include "ctx.h"

extern u8 data_02150f30[];
extern u32 func_0206d68c(s32 a, s32 b, u32 c, u32 d);
extern void func_0206d00c(void);
extern void func_0206d024(void);

u32 func_0206d648(s32 param_1, s32 param_2)
{
    u32 r = func_0206d68c(param_1, param_2, (u32)func_0206d024, 0);
    *(u32 *)(data_02150f30 + 0x20) = r;
    if (r == 0) {
        func_0206d00c();
    }
    return *(u32 *)(data_02150f30 + 0x20);
}
