#include "ctx.h"

typedef void (*FnPtr)(u8 *);

extern FnPtr data_ov019_021611c0[];

void func_ov019_0215eeac(u8 *param_1)
{
    data_ov019_021611c0[*(s16 *)(param_1 + 0x1e)](param_1);
}
