#include "ctx.h"

extern u16 data_0213b648[];

u16 func_02041f04(int param_1)
{
    return data_0213b648[*(s8 *)(param_1 + 0x8d)];
}
