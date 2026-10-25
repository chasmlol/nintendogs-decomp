#include "ctx.h"

extern u32 data_02150e24;
extern void func_0206cc88(void);
extern void func_0206ce94(s32 a, u32 b);
extern void func_02066180(void);

void func_020661ec(void)
{
    func_0206cc88();
    func_0206ce94(14, (u32)func_02066180);
    *(u32 *)&data_02150e24 = 0;
}
