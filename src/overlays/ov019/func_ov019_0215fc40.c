#include "ctx.h"
extern void (*data_ov019_021612e0[])(u8 *);
void func_ov019_0215fc40(u8 *param_1)
{
    void (*cb)(u8 *) = data_ov019_021612e0[*(s16 *)(param_1 + 0x1e)];
    cb(param_1);
}
