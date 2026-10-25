#include "ctx.h"
extern u32 data_02156038;
extern void func_020884b0(u32 p);
void func_0208838c(u32 param_1)
{
    if (data_02156038 == 0) {
        data_02156038 = 1;
        func_020884b0(param_1);
    }
}
