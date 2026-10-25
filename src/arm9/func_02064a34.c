#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern s32 func_0206419c(void);
extern u8 *func_020641b8(void);

s32 func_02064a34(u32 param_1)
{
    u32 r5 = func_02080b08();
    s32 r = func_0206419c();
    if (r != 0) {
        func_02080b1c(r5);
        return r;
    }
    {
        u8 *q = func_020641b8();
        *(u32 *)(q + 0xbc) = param_1;
    }
    func_02080b1c(r5);
    return 0;
}
