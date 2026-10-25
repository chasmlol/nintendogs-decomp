#include "ctx.h"
extern u32 data_02132fa0[];
extern u16 func_02028118(u8 *p);
u32 func_020ec148(u8 *param_1)
{
    u16 uVar1 = func_02028118(param_1);
    return data_02132fa0[uVar1];
}
