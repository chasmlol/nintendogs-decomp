#include "ctx.h"

extern u32 func_02068b68(void);
extern u32 data_02150e64;

void func_0206ab40(void)
{
    u32 uVar1;
    uVar1 = func_02068b68();
    data_02150e64 = uVar1;
}
