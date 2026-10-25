#include "ctx.h"

extern u32 *data_0214f9b4;
extern s32 func_0206419c(void);
extern void func_020800d4(u32 p, s32 v);

s32 func_02064140(void)
{
    s32 r = func_0206419c();
    if (r == 0) {
        func_020800d4(*(u32 *)((u8 *)data_0214f9b4 + 4), 2);
        if (*(u16 *)*(u8 **)((u8 *)data_0214f9b4 + 4) <= 1) {
            return 3;
        }
        return 0;
    }
    return r;
}
