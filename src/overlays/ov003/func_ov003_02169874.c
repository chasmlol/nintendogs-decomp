#include "ctx.h"

void func_020264f4(u8 *p);
void func_020255a4(u8 *p);
void func_02023654(u8 *p, u32 a, u32 b);
void func_0202db24(u8 *p, u32 v);

void func_ov003_02169874(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1d3;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 21, 1);
    func_0202db24(param_1, 7);
}
