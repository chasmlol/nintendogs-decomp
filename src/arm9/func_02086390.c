#include "ctx.h"

extern u32 func_020863e4(int a, u32 b);
extern void func_020861b4(int *a, int *b, u32 c, u32 d, u16 e, u32 f);

void func_02086390(int *param_1, int *param_2, u32 param_3, u32 param_4, u16 param_5, u32 param_6)
{
    u16 uVar1;

    uVar1 = func_020863e4((int)param_1, (u32)param_5);
    func_020861b4(param_1, param_2, param_3, param_4, uVar1, param_6);
}
