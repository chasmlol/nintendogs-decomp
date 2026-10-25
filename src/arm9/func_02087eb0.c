#include "ctx.h"

extern u32 func_02080b08(u8 *p);
extern void func_02080b1c(u32 x);

void func_02087eb0(u8 *param_1)
{
    u32 r;
    u32 f;
    u8 *q;
    r = func_02080b08(param_1);
    f = (*(u32 *)(param_1 + 0xc) & 1) != 0;
    if (f != 0) {
        *(u32 *)(param_1 + 0xc) = *(u32 *)(param_1 + 0xc) | 2;
        q = *(u8 **)(param_1 + 8);
        *(u32 *)(q + 0x10) = *(u32 *)(q + 0x10) | 0x20;
    }
    func_02080b1c(r);
}
