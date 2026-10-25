#include "ctx.h"

extern u32 data_02159018[];

void func_0208dd84(vu32 *param_1)
{
    u32 a;
    u32 b;
    a = param_1[0];
    b = param_1[1];
    data_02159018[0] = a;
    data_02159018[1] = b;
}
