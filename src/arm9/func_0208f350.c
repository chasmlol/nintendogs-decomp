#include "ctx.h"

extern u32 data_021408e4;
extern void func_0200658c(u8 *);

void func_0208f350(u8 *param_1)
{
    *(u32 *)param_1 = (u32)&data_021408e4;
    *(u16 *)(param_1 + 4) = 0;
    *(u16 *)(param_1 + 6) = 0;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 12) = 0;
    func_0200658c(param_1 + 16);
}
