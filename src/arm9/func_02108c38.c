#include "ctx.h"

extern u8 *data_0215be48;
extern void func_0210a854(u32 a);
extern void func_0210452c(void);

void func_02108c38(void)
{
    if (*(s32 *)(data_0215be48 + 0xa8) == 5) {
        func_0210a854(3);
        func_0210452c();
    }
}
