#include "ctx.h"

extern u32 data_0212ac70[];
extern void func_0208010c(u32 a, u32 b);

void func_0207cae0(s32 *param_1)
{
    void (*pcVar1)(u32, u32, u32) = (void (*)(u32, u32, u32))data_0212ac70[param_1[0]];
    func_0208010c(param_1[1], param_1[3]);
    pcVar1(param_1[1], param_1[2], param_1[3]);
}
