#include "ctx.h"

void func_020264f4(u8 *p);
u32 func_020255a4(u8 *p);
void func_0202db24(u8 *p, u32 n);

void func_ov003_02169b38(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x70;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 5);
}
