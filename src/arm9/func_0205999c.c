#include "ctx.h"

extern void func_02026c24(u8 *p);
extern u8 func_020256fc(u8 *p);

u8 func_0205999c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0xde;
    func_02026c24(param_1);
    return func_020256fc(param_1);
}
