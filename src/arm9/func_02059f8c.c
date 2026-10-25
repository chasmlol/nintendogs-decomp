#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025758(u8 *p);

u8 func_02059f8c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xbb;
    func_02026bac(param_1);
    return func_02025758(param_1);
}
