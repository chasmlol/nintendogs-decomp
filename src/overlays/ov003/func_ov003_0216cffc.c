#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025548(u8 *);
extern void func_0202db24(u8 *, u32);

void func_ov003_0216cffc(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x215;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_0202db24(param_1, 0);
}
