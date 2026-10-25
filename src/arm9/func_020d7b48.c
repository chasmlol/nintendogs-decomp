#include "ctx.h"

extern u32 data_0215ad4c;

s32 func_020d5318(u32 p);
void func_0206f224(u32 a, s32 b, u32 c);
void func_0206f19c(u32 a, s32 b);

void func_020d7b48(u32 param_1, u16 *param_2, s32 param_3)
{
    s32 iVar1;

    iVar1 = func_020d5318(param_1);
    if (iVar1 == 2) {
        if (param_2 != 0) {
            ((u32 *)&data_0215ad4c)[param_1] = 1;
            func_0206f224((u32)param_2, param_3, param_1);
            return;
        }
        ((u32 *)&data_0215ad4c)[param_1] = 0;
        return;
    }
    if (iVar1 == 3) {
        if (param_2 != 0) {
            *(u32 *)&data_0215ad4c = 1;
            func_0206f19c((u32)param_2, param_3);
            return;
        }
        *(u32 *)&data_0215ad4c = 0;
        return;
    }
}
