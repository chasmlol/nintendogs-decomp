#include "ctx.h"

extern u32 data_021517e8;
extern void func_02089804(u32, u32);

u32 func_0207002c(u32 param_1)
{
    if (param_1 == 0) {
        return 1;
    }
    if ((param_1 & data_021517e8) == 0) {
        func_02089804(param_1, 0);
        data_021517e8 = data_021517e8 | param_1;
        return 1;
    }
    return 0;
}
