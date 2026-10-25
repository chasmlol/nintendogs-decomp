#include "ctx.h"
extern u32 data_0214f474;
extern u32 data_0214f46c;
extern u64 func_02063c28(void);
extern u64 func_0205e708(u32 a, u32 b);

u64 func_0205e83c(u32 param_1)
{
    u32 arg = (u32)&data_0214f474;
    if (data_0214f474 == 0) {
        arg = (u32)(func_02063c28() >> 32);
        if (data_0214f46c != 0) {
            ((void (*)(void))data_0214f46c)();
            data_0214f46c = 0;
            arg = 0;
        }
    }
    return func_0205e708(param_1, arg);
}
