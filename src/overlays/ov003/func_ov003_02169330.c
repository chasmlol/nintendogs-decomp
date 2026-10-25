#include "ctx.h"

void func_020264f4(u8 *p);
void func_020255a4(u8 *p);
void func_02023654(u8 *p, s32 a, s32 b);
void func_0202db24(u8 *p, s32 v);

void func_ov003_02169330(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x1f;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_02023654(param_1, 0x1e, 1);
    func_0202db24(param_1, 2);
}
