#include "ctx.h"

extern void func_020264f4(u8 *);
extern u8 func_020255a4(u8 *);
extern void func_0202db24(u8 *, u32);

void func_ov003_02169ba0(u8 *param_1)
{
    *(u16 *)(param_1 + 0x152) = 0x27;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202db24(param_1, 3);
}
