#include "ctx.h"

extern u8 *data_0215be48;
extern void func_0210a854(s32 v);

void func_02108c78(void)
{
    if (*(s32 *)(data_0215be48 + 0xa8) == 5) {
        func_0210a854(1);
    }
}
