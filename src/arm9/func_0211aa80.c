#include "ctx.h"

extern u32 data_0215bfc8;
extern u32 data_0215bfc4;
extern u32 func_02080858(void);

void func_0211aa80(void)
{
    *(u32 *)&data_0215bfc8 = 0;
    *(u32 *)&data_0215bfc4 = func_02080858();
}
