#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 n);

void func_ov003_021691fc(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x12b;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 32, 2);
    func_0202db24(param_1, 8);
}
