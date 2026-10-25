#include "ctx.h"

extern void (*data_ov019_021613d4[])(u8 *);

void func_ov019_0215d7e4(u8 *param_1)
{
    s16 i = *(s16 *)(param_1 + 0x1e);
    void (*cb)(u8 *) = data_ov019_021613d4[i];
    cb(param_1);
}
