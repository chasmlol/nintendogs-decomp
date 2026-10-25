#include "ctx.h"

extern u32 data_02159428;
extern u32 data_02142884;

u32 func_020be21c(void)
{
    return data_02142884 + *(u32 *)(data_02159428 + 0xc);
}
