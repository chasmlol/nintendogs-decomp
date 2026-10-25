#include "ctx.h"

extern u8 data_02150e30[];

u16 func_02068928(void)
{
    return *(vu16 *)(data_02150e30 + 2);
}
