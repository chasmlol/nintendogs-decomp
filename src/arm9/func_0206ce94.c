#include "ctx.h"

extern u32 data_02150eac;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 r);

void func_0206ce94(u32 a0, s32 a1)
{
    u32 param_1;
    s32 param_2;
    u32 r;

    param_1 = a0;
    param_2 = a1;
    r = func_02080b08();
    ((s32 *)&data_02150eac)[param_1] = param_2;
    if (param_2 != 0) {
        vu32 *hw = (vu32 *)0x027ffc00;
        hw[0x388 / 4] = hw[0x388 / 4] | (1u << param_1);
    } else {
        vu32 *hw = (vu32 *)0x027ffc00;
        hw[0x388 / 4] = hw[0x388 / 4] & ~(1u << param_1);
    }
    func_02080b1c(r);
}
