#include "ctx.h"

extern u32 data_0215be48;
extern void func_0210a854(u32);

void func_02108844(void)
{
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xa8) == 6) {
        func_0210a854(1);
        return;
    }
}
