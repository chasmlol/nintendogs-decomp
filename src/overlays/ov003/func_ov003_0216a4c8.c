#include "ctx.h"

extern void func_020264d4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 a);

void func_ov003_0216a4c8(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x70;
    func_020264d4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 5);
}
