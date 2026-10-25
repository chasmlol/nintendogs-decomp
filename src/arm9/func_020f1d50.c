#include "ctx.h"
extern u8 *data_0215be40;
extern void func_0208db60(u32 a, s32 b, u8 *c, s32 d);
void func_020f1d50(u32 param_1, s32 param_2, u8 *param_3, s32 param_4)
{
    func_0208db60(*(u32 *)(data_0215be40 + 0x1c), param_2, param_3, param_4);
    *(u32 *)&data_0215be40 = 0;
}
