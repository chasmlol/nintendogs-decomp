#include "ctx.h"

extern void func_02026bac(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202db24(u8 *p, u32 a);

void func_ov003_0216ce7c(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x25e;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
