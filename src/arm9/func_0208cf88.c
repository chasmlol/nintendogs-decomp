#include "ctx.h"

extern u64 func_0208cae4(s16 *p, u32 a, u32 c);
extern u64 func_0208c9b4(u32 a, u32 b);
extern void func_0208cc2c(s16 *p, u32 b);
extern void func_0207e9f8(u32 a, u32 b);
extern u64 func_0208cb94(s16 *p);

u32 func_0208cf88(s16 *param_1, u32 param_2, u32 param_3)
{
    u32 uVar5;
    u32 uVar2;
    u32 uVar3;
    u32 one;
    u64 r;

    uVar5 = 0;
    if (param_2 != 0xffff) {
        r = func_0208cae4(param_1, param_2, param_3);
        uVar5 = (u32)r;
        uVar2 = uVar5;
        uVar3 = (u32)(r >> 32);
        one = 1;
        do {
            r = func_0208c9b4(uVar2, uVar3);
            uVar3 = (u32)(r >> 32);
            func_0208cc2c(param_1, uVar3);
            func_0207e9f8(one, one);
            r = func_0208cb94(param_1);
            uVar3 = (u32)(r >> 32);
            uVar2 = (u32)*param_1;
        } while (uVar2 != 4);
    }
    return uVar5;
}
