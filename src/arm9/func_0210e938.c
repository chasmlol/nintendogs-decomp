#include "ctx.h"

extern u32 data_0215bfbc;

u32 func_0210e938(void)
{
    u32 p = data_0215bfbc;
    if (p != 0) {
        return *(u32 *)(p + 4);
    }
    return 0;
}
