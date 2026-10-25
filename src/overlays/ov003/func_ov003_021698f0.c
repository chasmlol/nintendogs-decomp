#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 v);

void func_ov003_021698f0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1ce;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0x13, 1);
    func_0202db24(param_1, 5);
}
