#include "ctx.h"

extern void func_02026bac(u8 *);
extern u8 func_02025548(u8 *);
extern void func_02020768(u8 *);

void func_ov003_02167374(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x21a;
    func_02026bac(param_1);
    func_02025548(param_1);
    func_02020768(param_1);
}
