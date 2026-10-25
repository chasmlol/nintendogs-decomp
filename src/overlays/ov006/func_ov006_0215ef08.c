#include "ctx.h"

extern s16 func_ov006_021611a0(int p);
extern void func_ov006_0215fb74(int p, int a, s16 b, int c, int d, int e);

void func_ov006_0215ef08(int param_1)
{
    s16 sVar1;

    sVar1 = func_ov006_021611a0(param_1);
    func_ov006_0215fb74(param_1, 0, sVar1, 0, 1, 1);
}
