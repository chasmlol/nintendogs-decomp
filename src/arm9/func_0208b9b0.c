#include "ctx.h"

extern u8 *data_02157cc8;
extern void func_0207df9c(u32 a, u32 b, u32 c, u32 d);

void func_0208b9b0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_0207df9c(*(u32 *)(data_02157cc8 + 0x10), param_2, param_3, param_4);
    *(u32 *)(data_02157cc8 + 0x10) = 0;
}
