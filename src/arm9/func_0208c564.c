#include "ctx.h"

extern u8 *data_02157cc8;
extern void func_0207df9c(u32 p, u32 a, u32 b, u32 c);

void func_0208c564(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 p;
    p = *(u32 *)(data_02157cc8 + 0xc);
    if (p != 0) {
        func_0207df9c(p, param_2, param_3, param_4);
    }
    *(u16 *)(data_02157cc8 + 8) = 0xffff;
    *(u32 *)(data_02157cc8 + 0xc) = 0;
}
