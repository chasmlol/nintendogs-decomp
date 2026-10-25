#include "ctx.h"

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02023654(u8 *p, u32 a, u32 b);
extern void func_0202db24(u8 *p, u32 v);

void func_ov003_0216928c(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x129;
    func_020264f4(param_1);
    func_020255a4(param_1);
    if (*(u16 *)(param_1 + 0xf2) != 0x1f) {
        func_02023654(param_1, 0x1f, 2);
    }
    func_0202db24(param_1, 7);
}
