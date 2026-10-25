#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_02025548(u8 *p);

u8 func_02020214(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x25e;
    func_02026c24(param_1);
    return func_02025548(param_1);
}
