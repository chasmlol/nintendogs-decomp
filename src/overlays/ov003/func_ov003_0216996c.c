#include "ctx.h"

void func_020264f4(u8 *a);
void func_020255a4(u8 *a);
void func_0202db24(u8 *a, u32 b);

void func_ov003_0216996c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 39;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 3);
}
