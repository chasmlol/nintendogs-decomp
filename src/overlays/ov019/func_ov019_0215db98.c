#include "ctx.h"
extern void (*data_ov019_0216132c[])(u8 *);
void func_ov019_0215db98(u8 *param_1)
{
    void (*cb)(u8 *) = data_ov019_0216132c[*(s16 *)(param_1 + 0x1e)];
    cb(param_1);
}
