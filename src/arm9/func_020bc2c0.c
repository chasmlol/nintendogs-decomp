#include "ctx.h"

extern u32 data_02159464;
extern void func_020be25c(void);

void func_020bc2c0(void)
{
    *(u32 *)&data_02159464 = 0;
    func_020be25c();
}
