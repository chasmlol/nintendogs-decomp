#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202db24(u8 *p, u32 n);
extern void func_0203e2c0(u8 *p, u32 n);

void func_ov003_021697a0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x19;
    *(u16 *)(param_1 + 0x154) = 1;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 1);
    func_0203e2c0(param_1, 1);
}
