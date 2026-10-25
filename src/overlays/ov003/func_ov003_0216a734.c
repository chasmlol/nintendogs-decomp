#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 n);

void func_ov003_0216a734(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1c6;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 12, 4);
    func_0202db24(param_1, 4);
}
