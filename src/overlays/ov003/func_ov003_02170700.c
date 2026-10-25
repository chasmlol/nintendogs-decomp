#include "ctx.h"

extern void func_02026bac(u8 *p);
extern u8 func_02025548(u8 *p);

void func_ov003_02170700(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0;
    func_02026bac(param_1);
    func_02025548(param_1);
    *(u32 *)(param_1 + 0x948) = *(u32 *)(param_1 + 0x948) | 1;
}
