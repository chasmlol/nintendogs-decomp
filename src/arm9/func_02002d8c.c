#include "ctx.h"
extern s32 data_0214e6f4[];
void func_02002d8c(u32 param_1)
{
    void (*fn)(u32, s32);
    s32 arg;
    fn = (void (*)(u32, s32))data_0214e6f4[1];
    arg = data_0214e6f4[2];
    if (data_0214e6f4[0] != 0) {
        data_0214e6f4[0] = 0;
    }
    if (fn == NULL) {
        return;
    }
    data_0214e6f4[1] = 0;
    fn(param_1, arg);
}
