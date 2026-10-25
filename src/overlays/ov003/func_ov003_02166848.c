#include "ctx.h"

extern void func_02026bac(s32 a);
extern u8 func_02025548(s32 a);
extern void func_02020768(s32 a);

void func_ov003_02166848(s32 param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x25e;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
