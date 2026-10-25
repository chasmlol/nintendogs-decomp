#include "ctx.h"

extern s32 func_0206419c(void);
extern u32 func_02064098(u32 a, u32 b);
extern void func_02063cdc(void);
extern void func_0206ce94(u32 a, u32 b);
extern u32 data_0214f9b4;
extern u16 data_0214f9b0;

u32 func_02064334(void)
{
    u32 r;

    if (func_0206419c() != 0) {
        return 3;
    }
    r = func_02064098(1, 0);
    if (r != 0) {
        return r;
    }
    func_02063cdc();
    func_0206ce94(10, 0);
    data_0214f9b4 = 0;
    data_0214f9b0 = 0;
    return 0;
}
