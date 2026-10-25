#include "ctx.h"

typedef void (*TabFn)(u8 *p);
extern TabFn data_ov019_021613b8[];

void func_ov019_0215d3c4(u8 *param_1)
{
    data_ov019_021613b8[*(s16 *)(param_1 + 0x1e)](param_1);
}
