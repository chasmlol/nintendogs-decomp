#include "ctx.h"

extern u32 data_02157cc0;
extern void func_020800d4(u32 a, u32 b);

u32 func_0208a5ec(void)
{
    func_020800d4(data_02157cc0, 640);
    return *(u32 *)data_02157cc0;
}
